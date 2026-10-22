# C++ Foundations & Algorithmic Complexity

A structured collection of low-level C++ implementations focusing on memory mechanics, primitive type casting, pseudo-random distribution, and asymptotic runtime analysis (Big-O).

## Modules

### 1. ASCII Encoding & Character Logic (`task1.cpp`)
* **Core Concepts:** Character arithmetic, dynamic ASCII type casting, stream insertion (`std::cout`), and evaluation branching.
* **Implementation:** Demonstrates how `char` primitives are represented as small integers at machine level, looping through byte codes 65–90 without external conversion libraries.

### 2. Pseudo-Random Numerical Arrays (`task2.cpp`)
* **Core Concepts:** Hardware clock seeding (`srand(time(0))`), floating-point normalization via `(double)rand() / RAND_MAX`, contiguous fixed memory allocation.
* **Optimization:** Derives dual-set frequency counters ($\ge 0.5$ vs $< 0.5$) in constant $\mathcal{O}(1)$ time through array invariant subtraction ($N - k$) rather than running redundant secondary iterations.

### 3. Asymptotic Complexity & Divisibility (`task3.cpp`)
* **Core Concepts:** Big-O classification, bounds checking, and division-by-zero runtime protection.
* **Runtimes Covered:**
  * Single number evaluation: $\mathcal{O}(1)$ (Constant Time)
  * Single-dimensional array search: $\mathcal{O}(n)$ (Linear Time)
  * Cross-array matrix divisibility: $\mathcal{O}(n^2)$ (Quadratic Time)

## Build & Execution
Compiled on macOS using `g++` with C++17 standards:

```bash
g++ -std=c++17 task1.cpp -o task1 && ./task1
g++ -std=c++17 task2.cpp -o task2 && ./task2
g++ -std=c++17 task3.cpp -o task3 && ./task3
