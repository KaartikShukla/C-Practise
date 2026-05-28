/*  Constructor
    Special method invoked automatically at the time of object creation. Used for Initialisation.

    * Same name as class
    * Constructor doesn't have a return type
    * Only called once (automatically), at object creation
    * Memory allocation happens when constructor is called
    
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
    Teacher(){
        cout << "Hi, I am constructor" << endl;
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
};

int main(){
    Teacher t1;     //Constructor call
    t1.name = "ABC";
    t1.dept = "CS";
    t1.subject = "C++";
    t1.setSalary(25000);
    cout << t1.getSalary() << endl;
}
