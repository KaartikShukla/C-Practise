#include<iostream>

using namespace std;

template <typename T>
T add(T a, T b){
	return a + b;
}
template <typename M>
M mul(M a,M b){
 	return a * b;
 }

int main(){
	cout << add<int>(5,3)<<"\n";
	cout << add<double>(2.5,1.5)<<"\n";
	cout << mul<int>(5,3)<<"\n";
	cout << mul<float>(5.5,3.5)<<"\n";
}