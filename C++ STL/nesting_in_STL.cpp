#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    map<pair<int,int>,int> m;
    pair<int,int> p1,p2;
    p1={1,2};
    p2={2,3};
    //p1 = {2,2};
    //p2 = {2,3}; 
    // cout << (p1 < p2); //1 as comparison is done by second element
    cout << (p1 < p2) << endl;

    /*map<set<int>,int> m1;
    set<int> s1 = {1,2,3};
    set<int> s2 = {2,3};
    cout << (s1 < s2);*/

    map<pair<string,string>,vector<int>> m1;
    pair<string,string> p3 = {"a","b"};
    pair<string,string> p4 = {"c","d"};
    m1[p3].push_back(10);
    m1[p4].push_back(20);
    m1[{"e","f"}].push_back(30);

    for(auto &pr : m1){
        auto &full_name = pr.first;
        auto &list = pr.second;
        cout << pr.second[0] << endl;
        cout << full_name.first << " " << full_name.second << endl;
        //cout << pr.first;
        cout << pr.first.first << endl;
        cout << pr.first.second << endl;
    }
}