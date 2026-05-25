/*Classes & Objects

Objects are entities in the real world.
Class is like a blueprint of these entitites.

*/
#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
class Teacher{
    // properties / attributes
    string name;
    string dept;
    string subject;
    double salary;

    //methods / member functions
    void changeDept(string newDept){
        dept = newDept;
    }
};

int main(){
    Teacher t1;
    // t1.name = "ABC";
    // t1.dept = "CS";
    // t1.subject = "C++";
    // t1.salary = 25000;
}