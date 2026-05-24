#include<iostream>

using namespace std;

class Engine{
	public:
		Engine(){
			cout <<"Engine Started"<<endl;
		}
		~Engine(){
			cout <<"Engine Stopped"<<endl;
		}
};

class Car{
	private:
		Engine eng;
	public:
		Car(){
			cout <<"Car Started" <<endl;
		}
		~Car(){
			cout <<"Car Stopped" <<endl;
		}
};

int main(){
	Car c;
}