// Map is a data stucture which stores key value pair
// In maps values are stored in sorted order according to the key 
// Map uses Red Black Tree to store values which is a self balancing tree
// Map is not continous in nature we can do it++ in map  
// In unordered map values are not stored in order
//
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    //Declare Map
    map<int,string>m;
    // Initialize Map
    m[1] = "abc";       //log(n)
    m[5] = "cde";
    m[3] = "def";
    //m[6]; time complexity is log(n) and by default an empty string or zero is inserted in value of map
    //m[5] = "ghf"; map stores unique keys 
    m.insert({4,"afg"});
    m.insert(make_pair(2,"acv"));
    map<int,string> :: iterator it;
    for(it = m.begin(); it !=  m.end(); ++it){
        cout << it->first << " " << it->second << endl; // accessing one element from map complexity is O(log n) this loop prints n elements so complexity is O(n(log n))
    }

    // Find element in map
    auto it = m.find(3); // O(log(n)) find function return m.end() if value is not present in map
    m.erase(3); // log(n)
    // m.erase(it);
    // m.clear(); It clears the complete map
    if(it == m.end()){
        cout << "No value";
    }else{
        cout << it->first << " " << it->second;
    }

    //Depth of insertion in map
    map<string,string> m1;
    m1["abcd"] = "abcd"; // while insertion key "abcd" is compare with other keys present in map so it takes "s.size * log(n)" time to insert
    
}