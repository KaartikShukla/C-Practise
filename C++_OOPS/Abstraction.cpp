/*  Abstraction 
    
    Hiding all unnessary details & showing only the important parts
    The easy way to implement Abstraction is Access Modifier.

    The other way to implement Abstraction is Abstract classes.
    Using abstract classes:
        Abstract classes are used to provide a base class from which other classes can be derived.
        They cannot be instantiated(object) and are meant to be inherited.
        Abstract classes are typically used to define an interface for derived classes.
        Abstract class is implemented just for inheritance and it doesn't have any object.
        Classes inherits the abstract class

*/

#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

class Shape{    //abstract class
    virtual void show() = 0;    //pure virtual function
};

class Circle: public Shape{
    public:
    void show(){
        cout << "Drawing a Circle";
    }
};

int main(){
    //  Shape s1;   // This will give Error
    Circle c1;
    c1.show();
}