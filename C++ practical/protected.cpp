#include<iostream>
using namespace std;

class Employee{
	protected:
		int salary;
};

class Programmer : public Employee{
	public:
		void setSalary(int s){
			salary = s;
		}
		
	 	int getSalary(){
			return salary;
		}
};
int main(){
	Programmer p;
	p.setSalary(50000);
	cout <<p.getSalary();
}