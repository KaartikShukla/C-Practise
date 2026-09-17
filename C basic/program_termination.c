/*
Program Termination in C

Program termination means the process of ending a running program.

A C program can terminate in several ways:

Normal completion of main()
Using return from main()
Using exit()
Abnormal termination caused by serious runtime problems/signals

What does 0 mean?

By convention:

0       → successful termination
non-zero → some kind of failure/error
*/
/*
exit() Function

The exit() function is used to terminate the entire program immediately from any function.

*/
#include <stdio.h>
#include <stdlib.h> // Required

int main()
{
    printf("Program started\n");

    exit(0);

    printf("This will not execute\n");

    return 0;
}

/*
return vs exit()

This is an important distinction for students.

return

return returns control from the current function to its caller.
*/

void fun()
{
    printf("Inside function\n");
    exit(0);                    //There is no return to main().

    printf("This won't execute\n");
}

int main()
{
    fun();

    printf("Back in main\n");

    return 0;
}

/*
exit(0) and exit(non-zero)

exit(0); 
    
    means:

    Program terminated successfully.

exit(1);

    means:

    Program terminated with a failure/error status.
*/

/*
exit() and atexit()

C also provides:

atexit()

It allows you to register functions that should run when the program 
terminates normally through exit() or by returning from main().
*/

#include <stdio.h>
#include <stdlib.h>

void goodbye()
{
    printf("Program is terminating...\n");
}

int main()
{
    atexit(goodbye);

    printf("Program is running\n");

    exit(0);
}
