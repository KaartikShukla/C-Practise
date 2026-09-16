/* Global Memory vs Local Memory, Scope and Lifetime of Variables in C */

/*
Scope = Where can I access the variable?
Lifetime = How long does the variable exist in memory?
*/

/*
Global Variables

A variable declared outside all functions is called a global variable.
*/

#include <stdio.h>

int x = 10;   // Global variable because it is declared outside main() and outside every other function.

void display()
{
    printf("%d\n", x);
}

int main()
{
    printf("%d\n", x);
    display();

    return 0;
}
/*
Where is Global Variable Stored?

Global variables have static storage duration.

Conceptually, they are stored in the program's static/data storage area rather than in the function-call stack.


Scope of a Global Variable

The scope of a global variable generally extends from its declaration to the end of the relevant source file
*/
#include <stdio.h>

int x = 100;

void fun()
{
    printf("%d\n", x);
}

int main()
{
    printf("%d\n", x);
    fun();

    return 0;
}

/* A global variable can be used in another source file only when it is appropriately declared there, commonly using extern */

extern int x;

void fun()
{
    printf("%d", x);
}
/*
A global variable has file scope by default, 
unless static gives it internal linkage, and external access across source files requires appropriate declarations/linkage.
*/

/*
Lifetime of a Global Variable

Global variables have static storage duration.

That means:

Their lifetime is approximately the entire execution of the program.
*/

/*
Local Variables

A variable declared inside a function or block is generally a local variable.
*/
#include <stdio.h>

void fun()
{
    int x = 10;   // Local variable

    printf("%d", x);
}

int main()
{
    fun();

    return 0;
}

/*
Scope of Local Variable

A local variable can be accessed only within the block in which it is declared and its nested blocks.
*/
void fun()
{
    int x = 10;

    printf("%d", x);  // Correct
}

int main()
{
    printf("%d", x);  // ❌ x not accessible here
}

/* Local Variable and Stack */

void fun()
{
    int x = 10;
}
// x is generally stored in the stack frame associated with fun()

// When fun() finishes, its stack frame is released, so the automatic local variable's lifetime ends.

/* Lifetime of a Local Variable
For an ordinary local variable with automatic storage duration:
*/

void fun()
{
    int x = 10; // its lifetime begins when execution reaches its declaration and ends when execution leaves the block containing it.
}

/* 
Four Common Storage Classes 
| Storage class   | Typical scope                  | Lifetime                                         |
| --------------- | ------------------------------ | ------------------------------------------------ |
| `auto`          | Block                          | Block execution                                  |
| `register`      | Block                          | Block execution                                  |
| `static` local  | Block                          | Entire program                                   |
| `static` global | File                           | Entire program                                   |
| `exte

register is a request to the implementation to consider using a CPU register; modern compilers may ignore that request.
*/

/*
static Global Variable

Consider:

static int x = 100;

when declared at file scope.

It still has:

    File scope
    Static storage duration

But static at file scope also gives it internal linkage, 
meaning the name is limited to that translation unit (source file after preprocessing).

Global static → accessible only within that source file, while its lifetime is the entire program.
*/
static int x = 100;



