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
typedef int* IntPtr;

IntPtr p;

/* typedef with arrays */
typedef int Marks[5];
Marks m;

