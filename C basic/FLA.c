/*The Three Golden Rules
To prevent compiler errors, your students must memorize these structural rules for FAMs:

The Last Member Only: The flexible array must be the absolute final member defined in the struct.

Need a Companion: The struct must have at least one other standard, named member before the flexible array.

Dynamic Memory Required: The size of the array is not counted in the sizeof the struct. 
You must use malloc() or calloc() to allocate memory for both the struct and the array elements together.

struct BadStruct {
    int grades[]; // ERROR: No standard member before the flexible array
};

*/

#include <stdio.h>
#include <stdlib.h>

// Defining a struct with a flexible array member
struct StudentRecord {
    int student_id;
    int num_grades;
    float grades[]; // Flexible array member (empty brackets)
};

int main() {
    int grades_needed = 3;
    
    // Allocate memory: Size of the struct + (number of elements * size of one element)
    struct StudentRecord *record = malloc(sizeof(struct StudentRecord) + (grades_needed * sizeof(float)));
    
    record->student_id = 101;
    record->num_grades = grades_needed;
    
    // Assigning values to the flexible array
    record->grades[0] = 85.5;
    record->grades[1] = 90.0;
    record->grades[2] = 78.5;
    
    printf("Student %d's first grade is %.1f\n", record->student_id, record->grades[0]);
    
    free(record); // Always free dynamically allocated memory!
    return 0;
}