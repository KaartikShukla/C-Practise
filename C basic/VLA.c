// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    printf("Start small. Ship something.\n");
    int a[5],j=0;
    for(int i =0; i<10;i++){
        a[i] = j++;
        printf("i = %d, a[i]= %d\n",i,a[i]);
    }
    return 0;
}