/*
What is typecasting?

Typecasting means converting a value from one data type to another data type explicitly.

The programmer tells the compiler:

"Treat/convert this value as this other type."
*/

/*
Syntax
(new_type) value
*/

#include <stdio.h>

int main()
{
    int a = 5;
    int b = 2;

    float result = (float)a / b;

    printf("%.2f", result);

    return 0;
}