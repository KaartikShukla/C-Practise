#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
/*  Unary Operator Overloading  */
// class Number
// {
//     int x;

//     public:
//         Number(int a)
//         {
//             x = a;
//         }

//         void operator++()
//         {
//             x++;
//         }

//         void display()
//         {
//             cout << x << endl;
//         }
// };

// int main()
// {
//     Number n(5);

//     ++n;

//     n.display();

//     return 0;
// }

/*  Binary Operator Overloading */

// class Complex
// {
//     int real, imag;

// public:
//     Complex(int r = 0, int i = 0)
//     {
//         real = r;
//         imag = i;
//     }

//     Complex operator +(Complex c)
//     {
//         Complex temp;

//         temp.real = real + c.real;
//         temp.imag = imag + c.imag;

//         return temp;
//     }

//     void display()
//     {
//         cout << real << " + " << imag << "i" << endl;
//     }
// };

// int main()
// {
//     Complex c1(2,3);
//     Complex c2(4,5);

//     Complex c3;

//     c3 = c1 + c2;

//     c3.display();
// }