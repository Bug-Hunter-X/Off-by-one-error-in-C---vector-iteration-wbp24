# Off-by-one Error in C++ Vector Iteration
This repository demonstrates a common off-by-one error in C++ when iterating over a `std::vector`.  The error occurs when the loop condition `i <= vec.size()` is used, leading to an attempt to access an element beyond the valid index range of the vector.  The solution shows the correct way to iterate using `<` instead of `<=`.

## Bug
The `bug.cpp` file contains the erroneous code that causes the out-of-bounds access. This leads to undefined behavior, which can manifest as a program crash or incorrect results.

## Solution
The `bugSolution.cpp` file provides the corrected code, demonstrating the proper way to iterate through a `std::vector` using a loop condition that prevents accessing an invalid index.