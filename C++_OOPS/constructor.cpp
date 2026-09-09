/*  Constructor
    Special method invoked automatically at the time of object creation. Used for Initialisation.

    * Same name as class
    * Constructor doesn't have a return type
    * Only called once (automatically), at object creation
    * Memory allocation happens when constructor is called

    Constructor are of 3 types:
    * Non Paramterized Constructor
    * Parameterized Constructor
    * Copy Constructor: In a single class if there are more than one constructor of same name but different parameter
        * different parameter : Constructor Overloading --> Example of Polymorphism    
    
*/

#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

    class Teacher{
    private:
        double salary;
    public:
    //Constructor
    // 1. Non Parameterized Constructor
    //Teacher(){
      //  cout << "Hi, I am constructor" << endl;
    //}
    //2. Paramterized Constructor
    Teacher(string n, string d, string s, double sal){
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }
    // properties / attributes
    string name;
    string dept;
    string subject;
    

    //methods / member functions
    void changeDept(string newDept){
        dept = newDept;
    }

    //setter
    void setSalary(double s){
        salary = s;
    }
    
    //getter
    double getSalary(){
        return salary;
    }
    void getinfo(){
        cout << name <<" " << subject << " " << dept << " "<< salary;
    }
};

int main(){
    //Teacher t1;     //Constructor call
    //t1.name = "ABC";
    //t1.dept = "CS";
    //t1.subject = "C++";
    //t1.setSalary(25000);
    //cout << t1.getSalary() << endl;
    Teacher t2("Abc","CS","C++",25000);
    t2.getinfo();
}
