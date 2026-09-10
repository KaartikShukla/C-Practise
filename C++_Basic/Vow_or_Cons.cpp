#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    char c;
    cin >> c;
    if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ){
        cout << "The character is Vowel";
    }else{
        cout << "The character is Consonant";
    }
    return 0;
}