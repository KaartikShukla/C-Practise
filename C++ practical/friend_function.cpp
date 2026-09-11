#include<iostream>
using namespace std;

class Employee {
  private:
    int salary;

  public:
    Employee(int s) {
      salary = s;
      cout << "s = " << s <<endl;
    }

    // Declare friend function
    friend void displaySalary(Employee emp);
};

void displaySalary(Employee emp) {
	printf("displaySalary = %d\n",emp);
  	cout << "Salary: " << emp.salary;
}

int main() {
  Employee myEmp(50000);
  printf("myEmp = %d\n",myEmp);
  displaySalary(myEmp);
  return 0;
}