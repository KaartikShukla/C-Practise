#include<iostream>

using namespace std;

class Address{
	public:
		string city;
		string state;
		Address(string c, string s){
			city = c;
			state = s;
		}
};

class Student{
		string name;
		int age;
		Address* addr;
		public:
			Student(string n, int a, Address *ad){
				name = n;
				age = a;
				addr = ad;
			}
		void display(){
			cout <<"Name :"<<name<<endl;
			cout <<"Age :"<<age<<endl;
			cout <<"City :"<<addr->city<<endl;
			cout <<"State :"<<addr->state<<endl;
		}
};

int main(){
	Address a("Kanpur","UP");
	Student s("Kaartik", 21, &a);
	s.display();
}