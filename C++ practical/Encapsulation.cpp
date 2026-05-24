#include<iostream>
using namespace std;

class employee{
	//Encapsulation
	private:
	int salary;
	
	public:
		// Information hiding
		int empid;
		
		//getter
		void getsalary(int sal){ 
			salary = sal;
		}
		
		//setter
		int setsalary(){
			return salary;
		}
	
};

int main(){
	employee emp1;
	emp1.getsalary(1000);
	cout << emp1.setsalary()<<endl;
	emp1.empid = 123;
	cout << emp1.empid;
}