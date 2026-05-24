#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// All functions time complexity is O(n).
// Count and Find functions time complexity in Sets and Maps are O(log(n)).

int main(){
    vector<int> n = {1,2,3,4,5,6};

    int min = *min_element(n.begin(),n.end());
    cout << min << endl;
    int max = *max_element(n.begin(),n.end());
    cout << max << endl;
    int sum = accumulate(n.begin(),n.end(),0); // here 0 is the initial value of sum.
    cout  << sum << endl;
    int ct = count(n.begin(),n.end(),1); // here 1 is the element which we have to find in vector.
    cout << ct << endl;
    int element = *find(n.begin(),n.end(),6); // find returns the location 
    cout << element << endl;
    reverse(n.begin(),n.end());

    string s= "ashdjdjf";
    reverse(s.begin(),s.end());
    cout << s;

}