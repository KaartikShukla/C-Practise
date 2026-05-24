#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//  all_of function will return "TRUE" only when all the elements of vector will return true.
//  any_of function will return "FALSE" only when all the elemnts of vector will return false.
//  none_of function will return "TRUE" only when all the elements of vector will return true. 
int main(){
    cout << [](int x){return x+2;}(3) << endl;

    auto sum = [](int x, int y){return x+y;};
    cout << sum(2,3) << endl;

    vector<int> v = {2,3,5};
    // We have to check in vector v all elements are positive or not.
    cout << all_of(v.begin(),v.end(),[](int x){return x > 0;}) << endl;

    cout << any_of(v.begin(),v.end(),[](int x){return x > 0;}) << endl;

    cout << none_of(v.begin(),v.end(),[](int x){return x > 0;}) << endl;

}