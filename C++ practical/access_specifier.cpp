#include<iostream>
using namespace std;

class Employee{
	public:
		int salary;
	private:
		int id;
		
};

int main(){
	Employee emp1;
	emp1.salary = 10000;
	cout << emp1.salary <<endl;
	
	Employee *emp2 = new Employee();
	emp2->salary = 20000;
	cout << emp2->salary;
}