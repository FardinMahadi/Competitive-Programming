# Competitive Programming Handbook

A comprehensive LaTeX-based handbook for competitive programming contests, containing code templates, algorithms, data structures, and mathematical formulas.

## Structure

```
Handbook/
├── source/              # LaTeX source files
│   ├── main.tex        # Main document
│   ├── preamble.tex     # Document configuration
│   └── sections/       # Content sections
├── versions/           # Compiled PDF versions
│   ├── by-date/       # Date-based versions
│   └── by-contest/    # Contest-specific versions
├── build/             # Temporary build files (gitignored)
└── scripts/           # Build automation scripts
```

## Prerequisites

You need a LaTeX distribution installed:

- **Windows**: [MiKTeX](https://miktex.org/) or [TeX Live](https://www.tug.org/texlive/)
- **Linux**: `sudo apt-get install texlive-full` (or equivalent)
- **macOS**: [MacTeX](https://www.tug.org/mactex/)

## Building the Handbook

### Windows (PowerShell)

```powershell
cd Handbook/scripts
.\build.ps1 [contest-type] [date]
```

**Examples:**

```powershell
# Build with current date and general contest type
.\build.ps1

# Build for ICPC contest with current date
.\build.ps1 icpc

# Build for CodeForces contest with specific date
.\build.ps1 codeforces 2025-01-15
```

### Linux/macOS (Bash)

```bash
cd Handbook/scripts
chmod +x build.sh  # Make script executable (first time only)
./build.sh [contest-type] [date]
```

**Examples:**

```bash
# Build with current date and general contest type
./build.sh

# Build for ICPC contest with current date
./build.sh icpc

# Build for CodeForces contest with specific date
./build.sh codeforces 2025-01-15
```

**Note:** On Windows, use the PowerShell script (`build.ps1`) instead. The `chmod` command is Unix-only and will not work in PowerShell.

## Output

The build script creates PDFs in two locations:

1. **Date-based**: `versions/by-date/YYYY-MM-DD/handbook-YYYY-MM-DD.pdf`
2. **Contest-based**: `versions/by-contest/[contest-type]/handbook-[contest-type]-YYYY-MM-DD.pdf`

## Content Sections

1. **Templates and Boilerplates**: Main C++ boilerplate, binary search, binary exponentiation
2. **Data Structures**: DSU, Segment Tree, Fenwick Tree, Trie, Sparse Table, Ordered Set
3. **Graph Algorithms**: DFS, BFS, Dijkstra, Floyd-Warshall, Topological Sort, SCC, Cycle Detection
4. **String Algorithms**: KMP, Z-algorithm, string utilities
5. **Mathematical Algorithms**: Modular arithmetic, combinatorics, prime factorization, GCD/LCM, Euler totient
6. **STL Containers**: Vector, map, set, priority_queue, and common operations
7. **Miscellaneous**: Grid helpers, coordinate compression, timing utilities

## Customization

### Adding Content

Edit the appropriate section file in `source/sections/`:

- `01-templates.tex` - Code templates
- `02-data-structures.tex` - Data structures
- `03-graphs.tex` - Graph algorithms
- `04-strings.tex` - String algorithms
- `05-math.tex` - Mathematical algorithms
- `06-stl.tex` - STL containers
- `07-misc.tex` - Miscellaneous utilities

### Modifying Layout

Edit `source/preamble.tex` to change:

- Page layout (margins, orientation)
- Font sizes
- Code highlighting colors
- Section formatting

### Creating Contest-Specific Versions

You can create contest-specific variants by:

1. Modifying section files to include/exclude content
2. Using the build script with the contest type parameter
3. The PDF will be saved in `versions/by-contest/[contest-type]/`

## Version Management

- **Date-based versions**: Automatically organized by date for easy tracking
- **Contest-based versions**: Organized by contest type (icpc, codeforces, general, etc.)
- Each version is a complete snapshot of the handbook at that time

## Troubleshooting

### LaTeX Compilation Errors

If you encounter compilation errors:

1. Check that all required LaTeX packages are installed
2. Review `build/main.log` for detailed error messages
3. Ensure all section files are present in `source/sections/`

### Missing Packages

If you get "Package not found" errors, install the missing packages:

- **MiKTeX**: Automatically prompts to install missing packages
- **TeX Live**: Use `tlmgr install <package-name>`

### PDF Not Generated

- Check that `pdflatex` is in your PATH
- Verify the build directory is writable
- Check `build/main.log` for compilation errors

## Tips

- The handbook is optimized for **landscape A4** printing
- Use **two-column layout** for compact reference
- Code is syntax-highlighted for easy reading
- Table of contents is automatically generated
- Page numbers and headers are included

## License

This handbook is for personal and educational use.
