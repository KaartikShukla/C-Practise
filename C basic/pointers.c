/* A pointer is a variable that stores the address of another object. */

int x = 10;

int *p = &x;

/*
This is extremely important.

During declaration
int *p;

Here * tells us:

p is a pointer.

During use
*p

Here * means:

Access the value stored at the address contained in p.

This is called dereferencing.
*/

/*
NULL pointer

A pointer can intentionally point to nothing.
*/

int *p = NULL;

Dereferencing a null pointer causes undefined behavior.

int *p = NULL;

printf("%d", *p);

/* Pointer to an array element */

int arr[5] = {10, 20, 30, 40, 50};
int *p = arr;   //pointer to its first element:

#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    int *p = arr;

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", *(p + i));
    }

    return 0;
}

/* Pointer to the entire array 

A pointer to the whole array is declared as: */

int (*p)[5];

#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    int (*p)[5] = &arr;

    printf("%d", (*p)[2]);

    return 0;
}

/* Pointers to Functions */

int add(int a, int b)
{
    return a + b;
}

int (*p)(int, int) = add;   or int (*p)(int, int) = &add;

/* Calling a function through a pointer */

int result = p(10, 20);

int result = (*p)(10, 20);

/* Pointers to Structures

A pointer can point to a structure variable.
*/
struct Student
{
    int roll;
    float marks;
};

struct Student s1 = {101, 85.5};

struct Student *p = &s1;

/* Changing structure members through pointer */

#include <stdio.h>

struct Student
{
    int roll;
    float marks;
};

int main()
{
    struct Student s1 = {101, 75.5};

    struct Student *p = &s1;

    p->marks = 90.0;

    printf("%.2f", s1.marks);

    return 0;
}

/*Arrays of Pointers

An array of pointers is an array in which every element is a pointer.
*/

data_type *array_name[size];

int *p[5];  //p is an array of 5 pointers to integers.

#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;
    int c = 30;

    int *p[3];

    p[0] = &a;
    p[1] = &b;
    p[2] = &c;

    printf("%d\n", *p[0]);
    printf("%d\n", *p[1]);
    printf("%d\n", *p[2]);

    return 0;
}

/* Array of pointers vs pointer to array */

/* Array of pointers */

int *p[5];  //Means: p is an array of 5 pointers to int

/* Pointer to array*/
int (*p)[5];    //Means: p is a pointer to an array of 5 int

/*
int *p[5]
    ↑
    array of pointers

int (*p)[5]
     ↑
     pointer to array
*/

