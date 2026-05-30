/* Copy Constructor
    Special constructor (default) used to copy properties of one object into another.
    It takes the properties of one object and creates the copy.
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
    
    //Copy Constructor
    Teacher(Teacher &obj){      //&obj means pass by reference it means original obj is getting passed not its copy 
        cout << "I am custom copy construtor.. \n";
        this->name = obj.name;
        this->dept = obj.dept;
        this->subject = obj.subject;
        this->salary = obj.salary;
    }
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
    Teacher t3(t2);     //Default copy constructor --invoke 
    t3.getinfo();
}
