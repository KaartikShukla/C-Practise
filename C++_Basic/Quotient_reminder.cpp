#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    int num1,num2;
    int q ,r;
    cin >> num1>>num2;
    q = num1/num2;
    r = num1%num2;
    cout << q <<" " <<r;
    return 0;
}