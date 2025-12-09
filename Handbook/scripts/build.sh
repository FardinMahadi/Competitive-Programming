#!/bin/bash
# Build script for Competitive Programming Handbook
# Usage: ./build.sh [contest-type] [date]
# Example: ./build.sh icpc 2025-01-15
# Example: ./build.sh general (uses current date)

CONTEST_TYPE=${1:-general}
DATE=${2:-$(date +%Y-%m-%d)}

# Get script directory and project root
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
SOURCE_DIR="$PROJECT_ROOT/source"
BUILD_DIR="$PROJECT_ROOT/build"
VERSIONS_DIR="$PROJECT_ROOT/versions"

# Create build directory if it doesn't exist
mkdir -p "$BUILD_DIR"

# Change to source directory
cd "$SOURCE_DIR" || exit 1

echo "Building handbook PDF..."

# Check if pdflatex is available
if ! command -v pdflatex &> /dev/null; then
    echo "Error: pdflatex not found. Please install a LaTeX distribution (e.g., TeX Live)."
    exit 1
fi

# Compile LaTeX (run twice for proper TOC and references)
echo "Running pdflatex (first pass)..."
pdflatex -interaction=nonstopmode -output-directory="$BUILD_DIR" main.tex > /dev/null

echo "Running pdflatex (second pass for TOC)..."
pdflatex -interaction=nonstopmode -output-directory="$BUILD_DIR" main.tex > /dev/null

if [ $? -ne 0 ]; then
    echo "Error: LaTeX compilation failed. Check build/main.log for details."
    exit 1
fi

# Determine output paths
DATE_DIR="$VERSIONS_DIR/by-date/$DATE"
CONTEST_DIR="$VERSIONS_DIR/by-contest/$CONTEST_TYPE"

# Create version directories
mkdir -p "$DATE_DIR"
mkdir -p "$CONTEST_DIR"

# Generate filenames
DATE_FILENAME="handbook-$DATE.pdf"
CONTEST_FILENAME="handbook-$CONTEST_TYPE-$DATE.pdf"

DATE_PATH="$DATE_DIR/$DATE_FILENAME"
CONTEST_PATH="$CONTEST_DIR/$CONTEST_FILENAME"
BUILD_PDF="$BUILD_DIR/main.pdf"

# Copy PDFs to version directories
if [ -f "$BUILD_PDF" ]; then
    cp "$BUILD_PDF" "$DATE_PATH"
    cp "$BUILD_PDF" "$CONTEST_PATH"
    echo "PDF created successfully!"
    echo "  Date version: $DATE_PATH"
    echo "  Contest version: $CONTEST_PATH"
else
    echo "Error: PDF not found in build directory."
    exit 1
fi

echo "Build complete!"
