#include <stdio.h>
int main(int argc, char *argv[])
{
    // program
}

#include <stdio.h>

int main(int argc, char *argv[])
{
    for(int i = 0; i < argc; i++)
    {
        printf("argv[%d] = %s\n", i, argv[i]);
    }

    return 0;
}

// Input .\program.exe 10 20 30

/*
Values in argv is stored as strings. 
The first value in argv is the name of the program itself. 
The second value is the first argument passed to the program, and so on.
The last value in argv is NULL, which indicates the end of the array.
*/

// Convert string to integer using atoi() function
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    printf("Sum = %d\n", a + b);

    return 0;
}