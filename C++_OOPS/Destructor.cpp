/* Destructor
    Opposite of constructor
    Deallocate the memory
    Destructor is called automatically
    Destructor only deallocate the statically allocated memory
    In DMA "new" keyword is used to allocate the memory and "delete" keyword is used to deallocate the memory
    when we write "delete ptr" in code then the memory is deleted in heap whereas ptr remains
    Destructor should have same name as class
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
    // Destructor
    ~Student(){
        cout << "Hi, I delete everything";
        delete cgpaPtr;
    }


    void getInfo(){
        cout << name << " " << *cgpaPtr << endl;
    }

};

int main(){
    Student s1("Rahul Kumar",8.9);
    //Student s2(s1);
    s1.getInfo();
    //*(s2.cgpaPtr) = 9.2;
    //s1.getInfo();
    //s2.getInfo();
}
