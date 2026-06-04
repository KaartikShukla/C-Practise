/*  Polymorphism 

Polymorphism is the ability of objects to take on different forms or behave in different ways depending on the context in which they ae used.

* Compile Time Polymorphism --> Statically done | Constructor Overloading, Function Overloading  
    
    Constructor Overloading:    In Single Class we have two or more constructor with same name but having different paramter.
    Function Overloading:       In Single class we have two or more function with same name but having different paramter. 
                                Function can have same return type or not

* Run Time Polymorphism --> Dynamically done   | Function Overriding 
    Function Overriding:    Parent & Child class both contain the same function with different implementation.
                            The parent class function is said to be overriden.
                            The child class object will give more priority to function in child class.
    
    
    Virtual Functions: A virtual function is a member function that you expect to be redefined in derived classes.
*/

/*  Function Overloading    */
// #include<iostream>
// #include<bits/stdc++.h>
// #include<string>
// using namespace std;

// class Print{
//     public:
//     void show(int x){
//         cout << "Int:" << " " << x << endl;
//     }
//     void show(char x){
//         cout << "Char:" << " " << x << endl;
//     }
// };
// int main(){
//     Print p;
//     p.show(1);
//     p.show('$');
// }

/*  Function Overriding     */

// #include<iostream>
// #include<bits/stdc++.h>
// #include<string>
// using namespace std;
// class Parent{
//     public:
//     void getInfo(){
//         cout << "Parent Class"<<endl;
//     } 
// };
// class Child : public Parent{
//     public:
//     void getInfo(){
//         cout << "Child Class"<<endl;
//     }
// };

// int main(){
//     Child c1;
//     c1.getInfo();
//     Parent p1;
//     p1.getInfo();
// }

/*  Virtual Functions   */

#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
class Parent{
    public:
    void getInfo(){
        cout << "Parent Class"<<endl;
    }
    
    virtual void hello(){
        cout << "Hello from Parents"<< endl;
    }
};
class Child : public Parent{
    public:
    void getInfo(){
        cout << "Child Class"<<endl;
    }
    void hello(){
        cout << "Hello from Child"<< endl;
    }
};

int main(){
    Child c1;
    c1.getInfo();
    c1.hello();     // The function hello value has been overriden in child function due to virtual keyword
}