/*
Files and Streams

To understand file handling, we need to understand the concept of a stream.

What is a Stream?

A stream is a flow of data between a program and an input/output device or file.

Think of a stream as a channel through which data flows.

When reading:

File → Stream → Program

When writing:

Program → Stream → File


. Types of Streams

In C, the standard streams are:

Stream	            Purpose
stdin	            Standard input
stdout	            Standard output
stderr	            Standard error
*/

/*
FILE Pointer

The FILE type is provided by the standard I/O library.

We need:

#include <stdio.h>

A file pointer is declared as:

FILE *fp;

Here:

FILE → data type used for file handling
* → indicates a pointer
fp → file pointer

*/
#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("student.txt", "r");

    if (fp == NULL)
    {
        printf("File could not be opened");
    }
    else
    {
        printf("File opened successfully");
    }

    return 0;
}

/*
File Modes

The second argument of fopen() specifies the file mode.

The mode tells C what we want to do with the file.

Important modes are:

Mode	        Meaning
"r"	        Open for reading
"w"	        Open for writing
"a"	        Open for appending
"r+"	    Open for reading and writing
"w+"	    Open for reading and writing
"a+"	    Open for reading and appending

*/

/*
Closing a File

After finishing file operations, the file should be closed.
*/

FILE *fp;

fp = fopen("data.txt", "r");

if (fp != NULL)
{
    // file operations

    fclose(fp);
}

/*
Why Should We Close a File?

Closing a file is important because it:

Releases system resources.
Ensures buffered data is properly written.
Ends the file stream.
Prevents unnecessary resource usage.

*/

/*
Writing to a File

C provides several functions for writing data.

Important functions are:

fputc()
fputs()
fprintf()
fwrite()

fputc() Function

fputc() writes one character to a file.

Syntax
fputc(character, file_pointer);

fputs() Function

fputs() writes a string to a file.

Syntax
fputs(string, file_pointer);

fprintf() Function

fprintf() is similar to printf(), but it writes formatted data to a file.

Syntax
fprintf(file_pointer, "format", values);

Example:

fprintf(fp, "Age = %d", age);

ifference Between printf() and fprintf()
Function	Purpose
printf()	Writes formatted output to standard output
fprintf()	Writes formatted output to a specified stream

Reading from a File

Important functions for reading are:

fgetc()
fgets()
fscanf()
fread()

fgetc() Function

fgetc() reads one character from a file.

Syntax
fgetc(file_pointer);
*/

/* Reading the Complete File Using fgetc() */

#include <stdio.h>

int main()
{
    FILE *fp;
    int ch;

    fp = fopen("data.txt", "r");

    if (fp == NULL)
    {
        printf("File cannot be opened");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}

/*
Why int ch instead of char ch?

This is an important concept.

fgetc() returns an int, not simply a char, because it needs to represent:

Character values
+
EOF

*/

/*
What is EOF?

EOF stands for:

End Of File

It is a special value used by C input functions to indicate that there is no more input to read.

For example:

while ((ch = fgetc(fp)) != EOF)
*/

/*
fgets() Function

fgets() reads a line/string from a file.

Syntax
fgets(string, size, file_pointer);

It can read up to size - 1 characters and adds a null character '\0' when successful.
*/

/*
Difference Between fscanf() and fgets()
fscanf()	                                fgets()
Reads formatted data	                Reads a line/string
Similar to scanf()	                    Similar to reading a line
Can directly convert numeric data	    Reads characters into a string
Useful for structured text	            Useful for line-based text
*/

/*
Binary File Functions

For binary files, C provides:

fread()
fwrite()

These are useful for reading/writing blocks of binary data.

fwrite()

Used to write binary data.

Syntax:

fwrite(&variable, sizeof(variable), 1, fp);
fread()

Used to read binary data.

Syntax:

fread(&variable, sizeof(variable), 1, fp);
*/

/*
File Position

Every opened file has a current file position.

fseek() Function

fseek() is used to move the file position.

Syntax
fseek(fp, offset, position);

Common positions:

SEEK_SET
SEEK_CUR
SEEK_END

Meaning
Constant	            Meaning
SEEK_SET	        Beginning of file
SEEK_CUR	        Current position
SEEK_END	        End of file

*/
fseek(fp, 0, SEEK_END);

/* rewind() Function

rewind() moves the file position back to the beginning.*/
rewind(fp);

/*
ftell() Function

ftell() tells us the current position in a file.
*/

long position;

position = ftell(fp);

/*
Basic File Operations

Rename a File
rename("oldname", "newname");

Delete a File
remove("filename");
*/
