#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    cout <<"a:"<< a << " b:"<< b<< endl;
    cout << "After Swapping" << endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "a:" << a << " b:" << b << endl;  
    return 0;
}