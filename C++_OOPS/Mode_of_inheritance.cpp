/*      Mode Of Inheritance
                    | Derived Class | Derived Class | Derived Class |
    Parent Class    |    Private    |   Protected   |   Public      |
        Private     | Not Inherited | Not Inherited | Not Inherited |
        Protected   |    Private    |  Protected    |  Protected    |
        Public      |    Private    |  Protected    |   Public      |

*/

#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

class Person{
    public:
    string name;
    int age;
    //Parameterized Constructor
    Person(string name, int age){
        this->name = name;
        this->age = age;
    }
};

class Student: private Person{
    public:
    int rollno;
    Student(string name,int age, int rollno) : Person(name, age){
        this->rollno = rollno;
    }

    void getInfo(){
        cout << name << " " << age << " " << rollno <<endl; 
    }
};
int main(){
    Student s1("Rahul",29,1234);
    s1.getInfo();
    //  cout << s1.name;    // Printing name when class Student: public Person{}
    //  cout << s1.name;     // Printing name when class Student: private Person{}
}