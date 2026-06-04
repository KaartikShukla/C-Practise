/*  Types of Inheritance
    Single Inheritance: Parent -> Child
    Multi-Level Inheritance:    Parent -> Parent -> Child
    Multiple Inheritance:   Parent -> Child <- Parent
    Hierarchial Inheritance:    Child <- Parent -> Child
    Hybrid Inheritance:     
*/

/*  Multi-Level Inheritance   */

// #include<iostream>
// #include<bits/stdc++.h>
// #include<string>
// using namespace std;

// class Person{
//     public:
//         string name;
//         int age;
// };

// class Student : public Person{
//     public:
//         int roll_no;
// };

// class GradStudent : public Student{
//     public:
//         string researchArea;
// };
// int main(){
//     GradStudent s1;
//     s1.name = "Rahul";
//     s1.researchArea = "C++";

//     cout << s1.name << " " << s1.researchArea << endl;
// }

/*  Multiple Inheritance    */

// #include<iostream>
// #include<bits/stdc++.h>
// #include<string>
// using namespace std;

// class Student{
//     public:
//         string name;
//         int roll_no;
// };

// class Teacher{
//     public:
//         string subject;
//         double salary;
// };

// class TA: public Student, public Teacher{

// };
// int main(){
//   TA t1;
//   t1.name = "Gaurav";
//   t1.subject = "Engineering";
//   t1.roll_no = 1234;
  
//   cout << t1.name << " " << t1.subject << " " << t1.roll_no <<endl;
// }

/*  Hierarchial Inheritance     */

// #include<iostream>
// #include<bits/stdc++.h>
// #include<string>
// using namespace std;
// class Person{
//     public:
//         string name;
//         int age;
// };
// class Student: public Person{
//     public:
//         int roll_no;
// };

// class Teacher: public Person{
//     public:
//         string subject;
// };


// int main(){
//   Student s1;;
//   s1.name = "Gaurav";
//   s1.age = 29;
//   s1.roll_no = 1234;
  
//   cout << s1.name << " " << s1.age << " " << s1.roll_no <<endl;
// }

/*  Hybrid Inheritance  */

