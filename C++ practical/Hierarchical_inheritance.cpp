#include<iostream>
using namespace std;

class father{
	public:
		void fatherdisplay(){
			cout << "This is the call from father\n";
		}
};
class son : public father{
	public:
		void display(){
			cout << "This is the call from son\n";
		}
};
class daughter : public father{
	public:
		void display(){
			cout << "This is the call from daughter\n";
		}
}; 

int main(){
	son s;
	s.fatherdisplay();
	s.display();
	
	daughter d;
	d.fatherdisplay();
	d.display();
}