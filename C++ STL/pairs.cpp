#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Pair
    pair<int,string> p;
    // First method to initialize value
    p = make_pair(2,"abc");
    // Second method to initialize value
    p = {3,"abcd"};
    cout << p.first << " " << p.second << endl;
    // Copy & Reference
    pair<int,string> p1 = p;
    cout << p1.first << " " << p1.second<< endl;
    p1.first = 4;
    cout << p1.first << " " << p1.second<< endl;
    

    // Practical implementation
    int roll_no[] = {1,2,3};
    int marks[]   = {2,3,4};

    pair<int,int> roll_marks[3];
    roll_marks[0] = {1,2};
    roll_marks[1] = {2,3};
    roll_marks[2] = {3,4};
    swap(roll_marks[0],roll_marks[2]);
    for(int  i = 0; i <3;i++){
        cout << roll_marks[i].first << " " << roll_marks[i].second<<endl;
    }

    //Input using pair
    pair<int,int> p2;
    cin >> p2.first;
    cin >> p2.second;
    cout << p2.first << " " << p2.second << endl; 
    return 0;
}