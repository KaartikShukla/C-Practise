#include <stdio.h>
#define PI 3.14159
#define Area_of_Circle(r) (PI * (r) * (r))
#define DEBUG_MODE
int main(){
float radius = 5.0;
float myArea;

#ifdef DEBUG_MODE
    printf("[DEBUG], Starting Calculation for radius: %.2f\n",radius);
#endif
myArea = Area_of_Circle(radius);
printf("The Area of Circle:%f",myArea);

#ifdef DEBUG_MODE
    printf("[DEBUG], Calculation finished Succesfully");
#endif

    return 0;
}
/*
int main() {
    //Classic Macro trap
#define Multiply(x) (x*x) 
    int x = 5;
    int result = Multiply(x + 1); // This will expand to (x + 1 * x + 1) which is not intended
    printf("Result: %d\n", result);
    return 0;
}
*/