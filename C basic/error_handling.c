/*
When a C program performs operations such as opening a file, allocating memory, reading data, or communicating with the operating system, something can go wrong.

For example:

File does not exist
Permission denied
Invalid file operation
Memory allocation fails
Invalid system operation

C provides several mechanisms to help identify these errors.

A simple way to remember them:

errno → stores error number
perror() → prints error message automatically
strerror() → converts error number into error message

*/

/*
What is errno?

errno is a special integer value used to indicate an error that occurred during certain library/system operations.
*/

#include <stdio.h>
#include <errno.h>  // Mandatory to use

int main()
{
    FILE *fp = fopen("abc.txt", "r");

    if(fp == NULL)
    {
        printf("Error number = %d\n", errno);
    }

    return 0;
}
/* If abc.txt does not exist, fopen() can fail and errno can contain an error code such as:

The exact numeric value is platform-dependent, so no particular number as universal.

errno can provide an error code that can then be converted into a human-readable description.
*/

#include <stdio.h>
#include <errno.h>
#include <string.h>

int main()
{
    FILE *fp = fopen("abc.txt", "r");

    if(fp == NULL)
    {
        printf("Error number = %d\n", errno);
        printf("Reason = %s\n", strerror(errno));
    }

    return 0;
}

/*
Important point about errno

errno is not normally reset to zero automatically after every successful operation.

Therefore:

Do not check errno by itself to determine whether the immediately preceding function succeeded.

Instead, first check the function's documented failure indication.
*/

FILE *fp = fopen("data.txt", "r");

if (errno == 0)
{
    printf("File opened successfully");
}

// Previous operation → failed → errno = 2

// Next operation → succeeds

// errno may still contain 2

/*
What is perror()?

perror() means approximately:

print error

It is declared in:

#include <stdio.h>

Syntax:

perror("message");
*/
//It prints your message followed by a description corresponding to the current errno.

#include <stdio.h>

int main()
{
    FILE *fp = fopen("abc.txt", "r");

    if(fp == NULL)
    {
        perror("Error opening file");
        return 1;
    }

    fclose(fp);

    return 0;
}

/*
Output

If the file doesn't exist, the output may look like:

O/P :- Error opening file: No such file or directory

The exact wording depends on the operating system and C library.
*/

/*
What is strerror()?

strerror() converts an error number into a human-readable error message.

It is declared in:

#include <string.h>

Syntax:

strerror(error_number);

It returns a pointer to a string describing the error.
*/
#include <stdio.h>
#include <errno.h>
#include <string.h>

int main()
{
    FILE *fp = fopen("abc.txt", "r");

    if(fp == NULL)
    {
        printf("Error code: %d\n", errno);
        printf("Error message: %s\n", strerror(errno));

        return 1;
    }

    fclose(fp);

    return 0;
}
/*
Output
Error code: 2
Error message: No such file or directory
*/
/*
errno vs perror() vs strerror()

| Feature | `errno`             | `perror()`               | `strerror()`                  |
| ------- | ------------------- | ------------------------ | ----------------------------- |
| Purpose | Provides error code | Prints error message     | Converts error code to string |
| Header  | `<errno.h>`         | `<stdio.h>`              | `<string.h>`                  |
| Type    | Integer-like macro  | Function                 | Function                      |
| Example | `errno`             | `perror("Error")`        | `strerror(errno)`             |
| Gives   | Number/code         | Complete printed message | Error description string      |

*/


