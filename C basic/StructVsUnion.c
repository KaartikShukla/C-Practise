/*
Structure → every member gets separate memory.
Union → all members share the same memory.
*/

struct Student
{
    int roll;
    float marks;
    char grade;
};

struct Student s1;

union Student
{
    int roll;
    float marks;
    char grade;
};

union Student s1;

/* Demonstrating Memory Sharing */

#include <stdio.h>

union Data
{
    int i;
    float f;
    char c;
};

int main()
{
    union Data d;

    printf("Address of i = %p\n", (void *)&d.i);
    printf("Address of f = %p\n", (void *)&d.f);
    printf("Address of c = %p\n", (void *)&d.c);

    return 0;
}

/* Output
Address of i = 000000000061FE1C
Address of f = 000000000061FE1C
Address of c = 000000000061FE1C
*/


#include <stdio.h>

struct Data
{
    int i;
    float f;
    char c;
};

int main()
{
    struct Data d;

    printf("Address of i = %p\n", (void *)&d.i);
    printf("Address of f = %p\n", (void *)&d.f);
    printf("Address of c = %p\n", (void *)&d.c);

    return 0;
}

/*
Output
Address of i = 000000000061FE10
Address of f = 000000000061FE14
Address of c = 000000000061FE18
*/