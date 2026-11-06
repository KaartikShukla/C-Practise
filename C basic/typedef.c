/* typedef is used to give an existing data type a new name (alias).

It does not create a completely new data type.

typedef does not create a variable
*/

// Syntax
// typedef existing_type new_name;

//It makes complicated declarations easier to read.

unsigned long int number;

typedef unsigned long int ULI;

ULI number;

/* typedef with pointers */
#include<stdio.h>
typedef int* IntPtr;

IntPtr p;
int main() {
    int a = 10;

    IntPtr p = &a;

    printf("Value of a = %d\n", a);
    printf("Value using pointer = %d\n", *p);

    *p = 50;

    printf("Updated value of a = %d\n", a);

    return 0;
}

/* typedef with arrays */
#include<stdio.h>
typedef int Marks[5];
Marks m;

int main() {
    Marks m = {80, 75, 90, 85, 70};

    printf("First subject marks = %d\n", m[0]);
    printf("Second subject marks = %d\n", m[1]);
    printf("Third subject marks = %d\n", m[2]);

    printf("\nAll subject marks:\n");

    for (int i = 0; i < 5; i++) {
        printf("%d ", m[i]);
    }

    return 0;
}

