/*
C does not have a built-in complex keyword like int or float. Instead, C provides complex number support through <complex.h>.

A complex number has two parts:

$$ z = a + bi $$

where:

a → real part
b → imaginary part
i → imaginary unit
\(i^2 = -1\)

For example:
    z=5+3i

Here:

Real part      = 5
Imaginary part = 3

Type	                               Meaning
float                       complex	Complex number using float
double                      complex	Complex number using double
long double complex	        Complex number using long double
*/

#include <stdio.h>

#include <complex.h>

int main(){
    double complex z1 = 5.0 + 3.0*I; // double complex data type generally used
    printf("%.2f + %.2fi\n", creal(z1), cimag(z1)); // prints the real and imaginary parts of z1
    double complex z2 = 6.0 + 4.0*I;
    
    // Addition
    double complex add = z1 + z2;
    printf("Addition = %.2f + %.2fi\n",creal(add),cimag(add));
    double complex sub = z2 - z1;
    printf("Subtraction = %.2f - %.2fi\n",creal(sub),cimag(sub));
    double complex mul = z1 * z2;
    printf("Multiplication = %.2f * %.2fi\n",creal(mul),cimag(mul));
    double complex div = z1 / z2;
    printf("Division = %.2f / %.2fi\n",creal(div),cimag(div));
    return 0;
}