// Sets is collection of unique elements
// Set is nothing but set of keys of map. If we remove the values from map then we get set.
// Values get stored in sorted order.
// Internal Implementation of sets is using Red Black tree
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print(set<string> s){
    for(string value : s){
        cout << value << endl;
    }
    for(auto it = s.begin(); it != s.end(); ++it){
        cout << (*it) << endl;
    }
}

int main(){
    //Declare the set
    set<string> s;
    // Intialize the set
    s.insert("abc");    //  log(n)
    s.insert("def");
    s.insert("fgh");
    //access element in set
    auto it = s.find("abc"); // log(n)
    print(s);
    s.erase(it);
    s.erase("abc");
    
    
    //Unordered set
    //Unordered set uses hash tables
    //Complex data structure cannot be used like unordered_set<pair<int,int>> s;
    unordered_set<string> s1;
    s1.insert("abc");    //  O(1)
    s1.insert("def");
    s1.insert("fgh");
    //access element in unordered set
    auto it = s.find("abc"); // O(1)
    print(s);
    s.erase(it);
    s.erase("abc");

    //  Multiset allows to store duplicate values
    //  Multiset internally uses red black tree
    //  Multiset can be used in place of priority queue
    multiset<string> s2;
    s2.insert("abc");    //  O(log(n))
    s2.insert("def");
    s2.insert("fgh");
    s2.insert("abc");
    s2.erase("abc"); /* if we want to delete "abc" one time then we have to use pass iterator in erase() function. 
    If we do s2.erase("abc") then all "abc" will be deleted.*/  
}