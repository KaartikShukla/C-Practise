/*
What is Recursion?

Recursion is a programming technique in which a function calls itself to solve a problem.
*/

#include <stdio.h>

void fun(int n)
{
    if (n == 0)
        return;

    printf("%d\n", n);

    fun(n - 1);
}

int main()
{
    fun(5);

    return 0;
}
/* Recursive Factorial Function */
#include <stdio.h>

int factorial(int n)
{
    if (n == 0)
        return 1;

    return n * factorial(n - 1);
}

int main()
{
    int result;

    result = factorial(5);

    printf("Factorial = %d", result);

    return 0;
}

/* Recursive Fibonacci Function */
#include <stdio.h>

int fibonacci(int n)
{
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n = 6;

    printf("Fibonacci = %d", fibonacci(n));

    return 0;
}

/*
Stack Memory vs Heap Memory

Students often confuse these two.

Stack

Used for things such as:

Function call frames
Parameters
Automatic/local variables
Heap

Used for dynamically allocated memory such as:

malloc()
calloc()
realloc()

A recursive function does not automatically allocate memory on the heap.

Its function-call information is typically managed using the call stack.
*/