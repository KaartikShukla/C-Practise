/*
Divide-by-Zero Error
*/
#include <stdio.h>

int main()
{
    int a = 10;
    int b = 0;

    printf("%d", a / b);    //Input 10/0

    return 0;
}
/*
For integer division, this results in undefined behavior.

On many systems, it may cause a runtime exception/signal such as a division-by-zero trap, and the program may terminate.

But the C standard does not guarantee a particular message or exact behavior.

You should not teach students that C always prints "Divide by zero error."
*/

// Correct way to handle division
#include <stdio.h>

int main()
{
    int a = 10;
    int b = 0;

    if (b == 0)
    {
        printf("Error: Division by zero is not allowed\n");
    }
    else
    {
        printf("Result = %d\n", a / b);
    }

    return 0;
}

/*
Floating-point division by zero

*/
double x = 10.0;
double y = 0.0;

printf("%f", x / y);    // I/P:- 10 / 0     O/P:- inf

/*
because IEEE-754 floating-point arithmetic commonly represents positive infinity.

But floating-point behavior also depends on the implementation and floating-point environment.
*/

/*
Error vs Exception

This is a very important conceptual distinction.

Error

An error means something went wrong during program execution or because of invalid input/state.

Examples:

File does not exist
Invalid input
Memory allocation failed
Division by zero

Exception

An exception is a mechanism in some programming languages/systems for representing and transferring control when an exceptional condition occurs.

Languages such as:

Java
Python
C++

have structured exception mechanisms.

C does not have a built-in try-catch exception mechanism like Java or Python.
*/

/*
C's Error Handling Model

C generally uses:

Return values
errno
perror()
strerror()
NULL
EOF
Signals

depending on the situation.

C does not have try-catch

What is ctypes?

ctypes is a Python standard-library module that allows Python programs to call functions in shared libraries such as:

.dll    → Windows
.so     → Linux/Unix
.dylib  → macOS
*/