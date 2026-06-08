/*  Friend Function
    
*/
#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

// class Complex{
//     int a,b;
//     public:
//     void setNum(int x,int y){
//         a = x;
//         b = y;
//     }

//     void printNum(){
//         cout << a <<"+" <<b <<"i"<<endl;
//     }

//     friend Complex addComplex(Complex o1, Complex o2);

// };
// Complex addComplex(Complex o1,Complex o2){
//     Complex o3;
//     o3.setNum(o1.a+o2.a,o1.b+o2.b);
//     o3.printNum();
//     return o3;
// }
// int main(){
//    Complex o1,o2;
//    o1.setNum(2,3);
//    o1.printNum();

//    o2.setNum(3,4);
//    o2.printNum();

//    addComplex(o1,o2);
//     return 0;
// }

/* Friend Class  
    Complex class is foraward declared as compiler will read calculator class first and will find Complex as argument
    In Calculator class addRealComplex() function is only declared and not defined inside class beacuse compiler will not be able to understand o1 and o2 in void addRealComplex(Complex o1, Complex o2)
    addRealComplex() function is written with scope resolution operator in Complex class as friend function
    void Calculator::addRealComplex(Complex o1, Complex o2) is declared outside the class with scope resolution 

*/
class Complex;
class Calculator{
    public:
    void addRealComplex(Complex , Complex);
};  

class Complex{
    int a,b;
    public:
    void setNum(int x,int y){
        a = x;
        b = y;
    }

    void printNum(){
        cout << a <<"+" <<b <<"i"<<endl;
    }

    friend void Calculator::addRealComplex(Complex , Complex);
    //Declaring entire class as friends
    friend class calculator;

};
void Calculator::addRealComplex(Complex o1, Complex o2){
        cout << o1.a+o2.a << endl;
    }
int main(){
    Complex o1,o2;
    o1.setNum(1,3);
    o2.setNum(2,4);

    Calculator calc;
    calc.addRealComplex(o1,o2);
}