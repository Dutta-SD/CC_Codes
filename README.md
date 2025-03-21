# CC Codes

Codes for Codeforces and other sites, using `C++`.

## Development Environment

### Programming Language
- C++ (C++11 or later)
- GCC/G++ compiler with optimization flags

### Technical Setup
- **Compiler Optimization**: Uses `#pragma GCC optimize("Ofast")` for performance optimization
- **Standard Libraries**: 
  * `bits/stdc++.h` for competitive programming
  * Standard Template Library (STL) features
- **I/O Optimization**:
  ```cpp
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  ```

### Project Structure
- `cp/`: Directory containing competitive programming solutions
- `clean_local.sh`: Script to clean build artifacts (`.out` and `.dSYM` files)
- `.gitignore`: Configured to ignore development artifacts:
  * `*.dSYM` (Debug symbols)
  * `*.code-snippets` (IDE snippets)

### Build and Execution
1. Compile individual solutions:
   ```bash
   g++ -std=c++11 -O2 cp/[filename].cpp -o [output]
   ```
2. Clean build artifacts:
   ```bash
   ./clean_local.sh
   ```

### Code Organization
- Each solution is contained in a separate `.cpp` file
- Files are named according to the problem they solve
- Common competitive programming optimizations are applied consistently across solutions