// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
int main() {
    // Write C code here
    int *c = (int*) malloc(5 * sizeof(int));
    printf("%p\n",sizeof(c));
    for(int i = 0 ;i<8;i++){
        c[i] = i+1;
    }
    for(int i=0;i<8;i++){
        printf("c[%d] = %p\n",i,&c[i]);
        printf("%d\n",c[i]);
    }
    return 0;
}