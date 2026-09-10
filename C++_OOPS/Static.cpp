/* Static
    Static Variables:   Variables declared as static in a function are created & initialised once for the lifetime of the program   //  in Function
                        Static variables in a class are created & initialised once. They are shared by all the objects of the class //  in Class
    
    
*/

#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

//  Static in Function
// void fun(){
//     static int x = 0;
//     cout << "x :" << x << endl;
//     x++;
// }

// int main(){
//     fun();
//     fun();
//     fun();
//}


// Static variable in class

// class A{
//     public:
//     int x = 0;

//     void inc(){
//         x = x + 1;
//     }
// };
// int main(){
//     A obj1;
//     A obj2;
//     obj2.x = 200;
//     obj1.x = 100;

//     cout << "obj1.x:" << obj1.x << " "<< "obj2.x" << obj2.x << endl; 
//     cout << "obj1.x:" << obj1.x << endl;
// }

//Static Object in Class

// class ABC{
//     public:
//     ABC(){
//         cout << "Constructor" << endl;
//     }

//     ~ABC(){
//         cout << "Destructor" << endl;
//     }
// };
// int main(){
//     if(true){
//         static ABC obj;     //  Static object   
//     }
//     cout << "End of main function"<<endl;
// }

