#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Set and maps don't have indexing so we use iterator to access value.
// Iterators are pointer like structure
int main(){
    vector<int> v = {1,2,3,4,5};
    for(int i = 0 ; i< v.size(); i++){
        cout << v[i];
    }
    cout << endl;
    vector <int> :: iterator it = v.begin();
    cout << *(it) << endl;
    for(it = v.begin(); it!=v.end(); ++it){
        cout << *(it) << endl;
    }
    // it++ --> next iterator and it+1 --> next location for vector it is same but for set and map it changes
    //Intialize vector of pair and iterating through iterator
    vector<pair<int,int>> v_p = {{1,2},{2,3},{3,4}};
    vector<pair<int,int>> :: iterator t;
    for(t = v_p.begin(); t != v_p.end(); t++){
        cout << (*t).first << " " << (*t).second << endl;
    }
    //Same syntax as above rewritten cout << (*t).first <==> (t->first)
    for(t = v_p.begin(); t != v_p.end(); t++){
        cout << (t->first) << " " << (t->second) << endl;
    }

    //Range based loop on vector
    for(int value : v){
        cout << value << endl;
    }
    //value has the copy of the element of v
    /*for(int value : v){
        value++;
    }
    for(int value : v){
        cout << value << endl;
    }

    // Reference value concept
    for(int &value : v){
        value++;
    }
    for(int value : v){
        cout << value << endl;
    }    */
    
    // auto keyword
    // vector<pair<int,int>> :: iterator t; this line is not needed because of auto keyword
    for(auto t = v_p.begin(); t != v_p.end(); t++){
        cout << (*t).first << " " << (*t).second << endl; 
    }
}