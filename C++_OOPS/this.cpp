/* this
    this is a special pointer in C++ that points to the current object.
    this->prop is same as *(this).prop
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
    Teacher(string name, string dept, string subject, double salary){
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
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
