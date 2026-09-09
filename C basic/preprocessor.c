/*
#define Statement in C

#define is a preprocessor directive used to define:

Symbolic constants
Macros
Macro-like substitutions with arguments

It is processed before the actual compilation of the C program.

. What is a Preprocessor?

Before understanding #define, students should understand the basic C compilation process.

3. Symbolic Constants

A symbolic constant is a name that represents a fixed value.

#define Does NOT Create a Variable

This is extremely important.

When we write:

#define MAX 100

we have not created a variable.

There is no memory allocated for MAX.

It is simply a preprocessor substitution.

What is a Macro?

A macro is another use of #define.

A macro can represent a piece of code rather than just a simple value.

Example:

#define SQUARE(x) x * x

Now:

int result = SQUARE(5);

is expanded conceptually to:

int result = 5 * 5;

So:

#define
   ↓
Macro definition
   ↓
Preprocessor substitution

Function-Like Macro

A macro that accepts arguments is called a function-like macro.

Syntax:

#define MACRO_NAME(parameter) replacement

Example:

#define SQUARE(x) ((x) * (x))

Usage:

printf("%d", SQUARE(5));

Expansion:

printf("%d", ((5) * (5)));

Output:

25

Macro	                                                                     Function
Preprocessor handles it	                                                       Compiler handles it
Text substitution	                                                           Function call
No type checking of arguments	                                               Type checking applies
Can cause multiple evaluation	                                               Argument evaluated normally before call
No normal function-call overhead	                                           May involve function-call overhead, though compiler can optimize
Can work with different types if expression permits	                           Has declared parameter types
*/
#include <stdio.h>
#define PI 3.14159
#define Area_of_Circle(r) (PI * (r) * (r))
#define DEBUG_MODE
int main(){
float radius = 5.0;
float myArea;

#ifdef DEBUG_MODE
    printf("[DEBUG], Starting Calculation for radius: %.2f\n",radius);
#endif
myArea = Area_of_Circle(radius);
printf("The Area of Circle:%f",myArea);

#ifdef DEBUG_MODE
    printf("[DEBUG], Calculation finished Succesfully");
#endif

    return 0;
}
/*
int main() {
    //Classic Macro trap
#define Multiply(x) (x*x) 
    int x = 5;
    int result = Multiply(x + 1); // This will expand to (x + 1 * x + 1) which is not intended
    printf("Result: %d\n", result);
    return 0;
}
*/