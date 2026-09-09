/*  Inheritance

    When properties and member functions of base class are passed on to the derived class
    In Inheritance if we create object of derived class then first constructor of base/parent class is called then constructor of child/derived class is called 
    Just opposite happens in destructor first child class memory is deallocated then parent class memeory is deallocated.
*/
// #include<iostream>
// #include<bits/stdc++.h>
// #include<string>
// using namespace std;

// class Person{
//     public:
//     string name;
//     int age;
//     // Person(string name, int age){
//     //     this->name = name;
//     //     this->age = age;
//     // }
//     Person(){
//         cout << "Hi, I am parent Constructor"<<endl;
//     }
//     ~Person(){
//         cout << "Hi, I am parent Destructor"<<endl;
//     }
// };

// class Student: public Person{
//     public:
//     int rollno;

//     void getInfo(){
//         cout << name << " " << age << " " << rollno<<endl; 
//     }
//     Student(){
//         cout << "Hi, I am child Constructor"<<endl;
//     }
//     ~Student(){
//         cout << "Hi, I am child Destructor"<<endl;
//     }
// };
// int main(){
//     Student s1;
//     s1.name= "Rahul";
//     s1.age = 29;
//     s1.rollno = 1234;
//     s1.getInfo();
// }

/*  Default constructor call in Inheritance     */

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
    // Person(){
    //     cout << "Hi, I am parent Constructor"<<endl;
    // }
    // ~Person(){
    //     cout << "Hi, I am parent Destructor"<<endl;
    // }
};

class Student: public Person{
    public:
    int rollno;
    Student(string name,int age, int rollno) : Person(name, age){
        this->rollno = rollno;
    }

    void getInfo(){
        cout << name << " " << age << " " << rollno<<endl; 
    }

    // Student(){
    //     cout << "Hi, I am child Constructor"<<endl;
    // }
    // ~Student(){
    //     cout << "Hi, I am child Destructor"<<endl;
    // }
};
int main(){
    Student s1("Rahul",29,1234);
    s1.getInfo();
}