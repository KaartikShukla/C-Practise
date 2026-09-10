// Malloc
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
int main() {
    // Write C code here
    int *c = (int*) malloc(5 * sizeof(int));
    size_t t = malloc_usable_size(c);
    printf("%zu\n",sizeof(t));
    for(int i = 0 ;i<10;i++){
        c[i] = i+1;
    }
    
    for(int i=0;i<10;i++){
        printf("c[%d] = %p\n",i,&c[i]);
        printf("%d\n",c[i]);
    }
    return 0;
}