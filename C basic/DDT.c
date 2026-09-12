// Advance Data Types
#include <stdio.h>
void add(){
    int a = 2;
    int b = 3;
    printf("Th sum of two number is =%d",a+b);
}
int sum_of_two_no(int a,int b){
    return a+b;
}

int main() {
    //Derived Data Types
    //Arrays
    // int a[5] = {10,20,30,40,50};
    // for(int i = 0; i<5;i++){
    //     printf("i = %d, a[i]=%d\n ",i,a[i]);
    // }
    /*int b[2][2]= {{1,2},
                {3,4}};*/

    //Pointers
    // int b = 10;
    // int *c = &b;
    // printf("Address of b =%p\n",&b);
    // printf("%p\n  ",c);
    // printf("Address of c =%p\n",&c);
    // printf("value at b= %d\n",b);
    // printf("value at c= %d\n",*c);

     add();
     int res = sum_of_two_no(3,4);
     printf("\nThe sum of two no is =%d",res);
     return 0;
}
