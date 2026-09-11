#include<iostream>
#include<fstream>

using namespace std;

int main(){
	ofstream MyFile("filename.txt");
	MyFile << "This is my first file with C++";
	MyFile.close();
}