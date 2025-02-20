# C++ Out-of-Bounds Vector Access Bug

This repository demonstrates a common C++ bug: accessing elements outside the bounds of a `std::vector`.  Out-of-bounds access leads to undefined behavior, often causing crashes or unexpected results.  The solution showcases safe access techniques using `at()` or checking the size before accessing.

## Bug Description

The `bug.cpp` file contains code that attempts to access an element in a `std::vector` at an index that is beyond the vector's size. This results in undefined behavior.

## Solution

The `bugSolution.cpp` file provides a corrected version of the code.  It uses the `at()` method which throws an exception when accessing an invalid index, providing a more controlled and safer solution. Alternatively, one can check the size of the vector before accessing any element.