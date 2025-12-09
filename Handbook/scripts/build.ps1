# PowerShell build script for Competitive Programming Handbook
# Usage: .\build.ps1 [contest-type] [date]
# Example: .\build.ps1 icpc 2025-01-15
# Example: .\build.ps1 general (uses current date)

param(
    [string]$ContestType = "general",
    [string]$Date = ""
)

# Get script directory and project root
$ScriptDir = Split-Path -Parent $MyInvocation.MyCommand.Path
$ProjectRoot = Split-Path -Parent $ScriptDir
$SourceDir = Join-Path $ProjectRoot "source"
$BuildDir = Join-Path $ProjectRoot "build"
$VersionsDir = Join-Path $ProjectRoot "versions"

# Use current date if not provided
if ([string]::IsNullOrEmpty($Date)) {
    $Date = Get-Date -Format "yyyy-MM-dd"
}

# Create build directory if it doesn't exist
if (-not (Test-Path $BuildDir)) {
    New-Item -ItemType Directory -Path $BuildDir | Out-Null
}

# Change to source directory
Push-Location $SourceDir

try {
    Write-Host "Building handbook PDF..." -ForegroundColor Green

    # Find pdflatex - check PATH first, then common installation locations
    $latexCmd = $null

    # Check if pdflatex is in PATH
    $pdflatexInPath = Get-Command pdflatex -ErrorAction SilentlyContinue
    if ($pdflatexInPath) {
        $latexCmd = "pdflatex"
    } else {
        # Check common MiKTeX installation paths
        $commonPaths = @(
            "$env:LOCALAPPDATA\Programs\MiKTeX\miktex\bin\x64\pdflatex.exe",
            "$env:LOCALAPPDATA\Programs\MiKTeX\miktex\bin\pdflatex.exe",
            "$env:ProgramFiles\MiKTeX\miktex\bin\x64\pdflatex.exe",
            "$env:ProgramFiles\MiKTeX\miktex\bin\pdflatex.exe",
            "${env:ProgramFiles(x86)}\MiKTeX\miktex\bin\pdflatex.exe"
        )

        foreach ($path in $commonPaths) {
            if (Test-Path $path) {
                $latexCmd = $path
                Write-Host "Found pdflatex at: $path" -ForegroundColor Yellow
                break
            }
        }

        # Check TeX Live paths
        if (-not $latexCmd) {
            $texLivePaths = @(
                "$env:ProgramFiles\TeX Live\*\bin\win32\pdflatex.exe",
                "$env:ProgramFiles\texlive\*\bin\win32\pdflatex.exe"
            )

            foreach ($pattern in $texLivePaths) {
                $found = Get-ChildItem -Path $pattern -ErrorAction SilentlyContinue | Select-Object -First 1
                if ($found) {
                    $latexCmd = $found.FullName
                    Write-Host "Found pdflatex at: $latexCmd" -ForegroundColor Yellow
                    break
                }
            }
        }
    }

    if (-not $latexCmd) {
        Write-Host "Error: pdflatex not found. Please install a LaTeX distribution (e.g., MiKTeX or TeX Live)." -ForegroundColor Red
        Write-Host "Or ensure pdflatex is in your system PATH." -ForegroundColor Yellow
        exit 1
    }

    # Ensure BuildDir is absolute path
    $BuildDir = (Resolve-Path $BuildDir -ErrorAction SilentlyContinue).Path
    if (-not $BuildDir) {
        $BuildDir = (New-Item -ItemType Directory -Force -Path $BuildDir).FullName
    }

    Write-Host "Running pdflatex (first pass)..." -ForegroundColor Yellow
    & $latexCmd -interaction=nonstopmode -output-directory="$BuildDir" main.tex 2>&1 | Out-Null

    Write-Host "Running pdflatex (second pass for TOC)..." -ForegroundColor Yellow
    & $latexCmd -interaction=nonstopmode -output-directory="$BuildDir" main.tex 2>&1 | Out-Null

    if ($LASTEXITCODE -ne 0) {
        Write-Host "Error: LaTeX compilation failed. Check build/main.log for details." -ForegroundColor Red
        exit 1
    }

    # Determine output paths
    $DateDir = Join-Path $VersionsDir "by-date" $Date
    $ContestDir = Join-Path $VersionsDir "by-contest" $ContestType

    # Create version directories
    New-Item -ItemType Directory -Force -Path $DateDir | Out-Null
    New-Item -ItemType Directory -Force -Path $ContestDir | Out-Null

    # Generate filenames
    $DateFilename = "handbook-$Date.pdf"
    $ContestFilename = "handbook-$ContestType-$Date.pdf"

    $DatePath = Join-Path $DateDir $DateFilename
    $ContestPath = Join-Path $ContestDir $ContestFilename
    $BuildPdf = Join-Path $BuildDir "main.pdf"

    # Copy PDFs to version directories
    if (Test-Path $BuildPdf) {
        Copy-Item $BuildPdf $DatePath -Force
        Copy-Item $BuildPdf $ContestPath -Force
        Write-Host "PDF created successfully!" -ForegroundColor Green
        Write-Host "  Date version: $DatePath" -ForegroundColor Cyan
        Write-Host "  Contest version: $ContestPath" -ForegroundColor Cyan
    } else {
        Write-Host "Error: PDF not found in build directory." -ForegroundColor Red
        exit 1
    }

} finally {
    Pop-Location
}

Write-Host "Build complete!" -ForegroundColor Green
