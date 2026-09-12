/*In C, type qualifiers are keywords that tell the compiler something about how a variable can be accessed or used.

There are three important type qualifiers:

const → Cannot be changed
volatile → May change unexpectedly
restrict → This pointer is the main/only way to access this memory

1. const — Value cannot be changed

const means constant.

Once you give a value to a const variable, you should not change it.
*/
#include <stdio.h>
void change( int *restrict a,int *restrict b){
    *a = 10;
    *b = 20;
    printf("%d\n",*a);
    printf("%d\n",*b);
}
int main(){


// const int age = 20;

// age = 25;   // ERROR

// printf("%d",age);

/*
volatile — Value can change unexpectedly

volatile is used when a variable's value can be changed by something outside the normal program flow.

For example:

Hardware
Interrupts
Another thread/process
Memory-mapped hardware registers

This tells the compiler:

"Don't assume flag always contains the same value. Check its memory value whenever I use it."
*/

// volatile int flag;

int x = 10;

int *p = &x;
int *q = &x;

printf("%d\n",*p);
printf("%d\n",*q);

printf("%p\n",&x);
printf("%p\n",p);
printf("%p\n",q);


int y = 5;
int z = 8;
change(&y,&z);

return 0;
}
