/*
To use DMA in C, students must include the <stdlib.h> library. You can break down the toolkit into these four essential functions:

malloc(size) (Memory Allocation): Requests a single block of memory of the specified size in bytes.
It returns a pointer to the beginning of the block but leaves the memory uninitialized (meaning it contains garbage values).

calloc(count, size) (Contiguous Allocation): Requests memory for an array of elements. 
Unlike malloc, it automatically initializes all the newly allocated memory bytes to zero.

realloc(pointer, new_size) (Re-allocation): Resizes a previously allocated memory block
(expanding or shrinking it) without losing the existing data already stored inside it.

free(pointer): Releases the dynamically allocated memory back to the operating system.
*/

/*
malloc() Syntax
malloc stands for "memory allocation". It allocates a single block of uninitialized memory.

Syntax:

ptr = (cast_type *) malloc(byte_size);

ptr: The pointer that will hold the starting address of the memory block.

(cast_type *): malloc returns a generic void pointer. It is a standard practice to cast it to the specific data type you are using (like (int *) or (float *)).

byte_size: Total number of bytes needed, usually calculated using the sizeof() operator.

*/

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     // Using malloc to allocate memory for an array of 5 integers
//     int *arr = (int *)malloc(5 * sizeof(int));
//     if (arr == NULL) {
//         printf("Memory allocation failed\n");
//         return 1;
//     }

//     // Assigning values to the allocated memory
//     for (int i = 0; i < 5; i++) {
//         arr[i] = i + 1; // Assigning values 1 to 5
//     }

//     // Printing the values
//     for (int i = 0; i < 5; i++) {
//         printf("arr[%d] = %d\n", i, arr[i]);
//     }

//     // Freeing the allocated memory
//     free(arr);
    
//     return 0;
// }

/*
calloc() Syntax
calloc stands for "contiguous allocation". It allocates memory for multiple elements and automatically initializes all bytes to zero.

Syntax:

ptr = (cast_type *) calloc(number_of_elements, element_size);

number_of_elements: How many items you want in your dynamically sized array.

element_size: The size of a single item, again using sizeof().

*/

/*
realloc() Syntax
realloc stands for "re-allocation". It dynamically changes the size of a previously allocated memory block without losing the old data.

Syntax:

ptr = (cast_type *) realloc(existing_ptr, new_byte_size);

existing_ptr: The pointer pointing to the memory block you want to expand or shrink.

new_byte_size: The new total size in bytes you want the block to be.
*/

/*
free() Syntax
free is used to deallocate the memory back to the operating system when the program no longer needs it.

Syntax:

free(ptr);

ptr: The pointer to the memory block you are finished using.

free(ptr);

ptr: The pointer to the memory block you are finished using.
*/