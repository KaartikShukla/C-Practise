/*

What is ctypes?

ctypes is a Python standard-library module that allows Python programs to call functions in shared libraries such as:

.dll    → Windows
.so     → Linux/Unix
.dylib  → macOS

Python Interaction with C

Python
   |
   +---- ctypes ----> C shared library
   |
   +---- C extension modules
   |
   +---- Cython
   |
   +---- cffi
   |
   +---- Python C API
*/

// gcc -shared -o math.dll math.c

#include<stdio.h>

int add(int a, int b)
{
    return a + b;
}

