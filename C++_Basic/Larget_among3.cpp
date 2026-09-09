#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    
    int a,b,c;
    cin >> a >> b >> c;
    if(a>b && a>c){
        cout << "The largest number is " << a;
    }else if(b>c && b>a){
        cout << "The largest number is " << b;
    }else{
        cout << "The largest number is " << c;
    }
    return 0;
}