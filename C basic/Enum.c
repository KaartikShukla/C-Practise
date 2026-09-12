/*
Enumeration (enum) in C

An enumeration is a user-defined data type in C that allows us to give meaningful names to a set of integer constants.

In simple words:

enum is used when a variable can have one value from a fixed set of named options.
*/
#include <stdio.h>

enum Day
{
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

int main()
{
    enum Day today;

    today = WEDNESDAY;

    printf("%d\n", today);

    return 0;
}

We can specify our own values

enum Month
{
    JANUARY = 1,
    FEBRUARY = 2,
    MARCH = 3,
    APRIL = 4
};

/* Mixed values */

enum Number
{
    A = 10,
    B = 20,
    C,
    D = 50,
    E
};

enum Day
{
    MONDAY,
    TUESDAY,
    WEDNESDAY
};
int main(){
    enum Day d;
    printf("%d",sizeof(d));
}

/*
Most important exam points

Students should remember these points:
enum is a user-defined type in C.
It is used to create named integer constants.
By default, the first enumeration constant has value 0.
Subsequent constants normally increase by 1.
We can assign our own values.
Enumeration constants are identifiers representing integer constant values, not strings.
switch works very naturally with enum values.
typedef can be used to give a shorter type name.
The exact size of an enum object is implementation-defined.
*/
