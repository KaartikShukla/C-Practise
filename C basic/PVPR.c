
// First Run this Program
#include <stdio.h>
void change(int x){
    x =20;
}
int main() {
    int a =10;
    change(a);
    printf("%d",a);
    return 0;
}

// Second Run this Program
#include <stdio.h>
int change(int x){
    printf("%d",x);
    x = 20;
    return x;
}
int main() {
    int a =10;
    change(a);
    printf("%d",a);
    return 0;
}

// Third Run this Program
#include <stdio.h>
int change(int x){
    printf("%p\n",&x);
    printf("%d\n",x);
    x = 20;
    printf("%d\n",x);
    return x;
}
int main() {
    int a = 10;
    printf("%p\n",&a);
    change(a);
    printf("%d",a);
    return 0;
}



// Fourth Run this Program
#include <stdio.h>
void change(int *x){
    printf("%p\n",&x);
    printf("%d\n",*x);
    *x = 20;
    printf("%d\n",*x);
}
int main() {
    int a = 10;
    printf("%p\n",&a);
    change(&a);
    printf("%d", a);
    return 0;
}