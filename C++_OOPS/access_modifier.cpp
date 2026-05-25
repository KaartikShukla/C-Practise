/*  Access Modifier
        Special Keyword
        private : data & methods accessible inside class / Default

        public : data & methods accessible to everyone

        protected : data & methods accessible inside class & to its derived class
*/
#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
class Teacher{
    private:
        double salary;
    public:
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
    Teacher t1;
    t1.name = "ABC";
    t1.dept = "CS";
    t1.subject = "C++";
    t1.setSalary(25000);
    cout << t1.getSalary() << endl;
}