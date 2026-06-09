/*      Shallow & Deep Copy

    A Shallow copy of an object copies all of the member values from one object to another object.
    Default constructor / Copy constructor creates a shallow copy 
    Shallow copy create issue with Dynmaic memory  allocation
    DMA is done using new keyword and variable is stored in heap memory.
    Shallow copy creates problem when class or object is allocated to memory dynamically  

*/

/* Shallow Copy Problem in DMA*/

// #include<iostream>
// #include<bits/stdc++.h>
// #include<string>
// using namespace std;

// class Student{
//     public:
//     string name;
//     double* cgpaPtr;

//     Student(string name, double cgpa){
//         this->name = name;
//         cgpaPtr = new double;       //Dynamcially allocating memory
//         *cgpaPtr = cgpa;
//     }

//     Student(Student &obj){
//         this->name = obj.name;
//         this->cgpaPtr = obj.cgpaPtr;
//     }

//     void getInfo(){
//         cout << name << " " << *cgpaPtr << endl;
//     }

// };

// int main(){
//     Student s1("Rahul Kumar",8.9);
//     Student s2(s1);
//     s1.getInfo();
//     *(s2.cgpaPtr) = 9.2;
//     s1.getInfo();        // After updating the value to 9.2 still 8.9 is getting printed
// }

/* Deep Copy
    
A deep copy on the other hand, not only copies the member values but also make copies of any dynamically allocated memory that the members point to

*/
#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

class Student{
    public:
    string name;
    double* cgpaPtr;

    Student(string name, double cgpa){
        this->name = name;
        cgpaPtr = new double;       //Dynamically allocating memory
        *cgpaPtr = cgpa;
    }

    Student(Student &obj){
        this->name = obj.name;
        cgpaPtr = new double;       // Deep copy is being created
        *cgpaPtr = *obj.cgpaPtr;
    }

    void getInfo(){
        cout << name << " " << *cgpaPtr << endl;
    }

};

int main(){
    Student s1("Rahul Kumar",8.9);
    Student s2(s1);
    s1.getInfo();
    *(s2.cgpaPtr) = 9.2;
    s1.getInfo();
    s2.getInfo();
}