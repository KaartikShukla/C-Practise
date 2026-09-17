/*
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

