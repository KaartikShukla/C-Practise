#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    if(a%2==0){
        cout <<"a is even";
    }else{
        cout <<"a is odd";
    }
    cout << endl;
    if(b%2==0){
        cout <<"b is even";
    }else{
        cout <<"b is odd";
    }
    return 0;
}