/*
Structure Declaration

There are two things students often confuse:

Defining the structure type

*/
#include <stdio.h>
struct Student
{
    int roll_no;
    char name[50];
    float marks;
};

/*Structure Declaration + Variable Together

We can also create the structure variables while defining the structure:*/

struct Student
{
    int roll_no;
    char name[50];
    float marks;
} s1, s2;


/* Structure Initialization

We can initialize a structure when creating the variable.

Method 1: Positional initialization */

struct Student s1 = {101, "Rahul", 85.5, 'A'};

/*Designated Initialization

C also allows us to specify the member names explicitly.*/

struct Student s1 =
{
    .roll_no = 101,
    .name = "Rahul",
    .marks = 85.5,
    .grade = 'A'
};

/*
Partial Initialization
*/

#include <stdio.h>

struct Student
{
    int roll_no;
    char name[50];
    float marks;
};

int main()
{
    struct Student s1 = {101};

    printf("%d\n", s1.roll_no);
    printf("%.2f\n", s1.marks);

    return 0;
}

/* Assigning Members After Declaration */
#include <stdio.h>
#include <string.h>

struct Student
{
    int roll_no;
    char name[50];
    float marks;
    char grade;
};

int main()
{
    struct Student s1;

    s1.roll_no = 101;
    strcpy(s1.name, "Rahul");
    s1.marks = 85.5;
    s1.grade = 'A';

    printf("Roll No = %d\n", s1.roll_no);
    printf("Name = %s\n", s1.name);
    printf("Marks = %.2f\n", s1.marks);
    printf("Grade = %c\n", s1.grade);

    return 0;
}

/*
Array of Structures

Suppose we want to store information for 100 students.

*/

#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student students[3] =
    {
        {101, "Rahul", 85.5},
        {102, "Amit", 90.0},
        {103, "Priya", 78.5}
    };

    for(int i = 0; i < 3; i++)
    {
        printf("%d %s %.2f\n",
               students[i].roll,
               students[i].name,
               students[i].marks);
    }

    return 0;
}

/*Structure Inside Structure

Structures can contain other structures.

*/

struct Date
{
    int day;
    int month;
    int year;
};

struct Student
{
    int roll;
    char name[50];
    struct Date dob;
};


int main(){
    struct Student s1;
    s1.roll
    s1.name

    s1.dob.day = 15;
    s1.dob.month = 8;
    s1.dob.year = 2000;

return 0;

}

/*Structure Assignment

One structure variable can be assigned to another structure variable of the same type.
*/
struct Student s1 = {101, "Rahul", 85.5};
struct Student s2;

s2 = s1;

/*
Structure as Function Argument

Structures can also be passed to functions.
*/
#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

void display(struct Student s)
{
    printf("Roll = %d\n", s.roll);
    printf("Name = %s\n", s.name);
    printf("Marks = %.2f\n", s.marks);
}

int main()
{
    struct Student s1 = {101, "Rahul", 85.5};

    display(s1);

    return 0;
}

/*
Pointer to Structure

We can also create a pointer to a structure.
*/

struct Student s1 = {101, "Rahul", 85.5};

struct Student *ptr = &s1;

(*ptr).roll = 10 or ptr->roll = 10