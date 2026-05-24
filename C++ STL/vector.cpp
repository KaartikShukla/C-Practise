#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void printVec(vector<int> v){
    cout << "Size :" << v.size()<< endl;
    for(int i = 0; i < v.size();i++){
        //v.size() -> O(1)
        cout << v[i] << " ";
    }
    cout << endl;
}
int main(){
    vector<int> v;
    int n;
    cin >> n;
    for(int i = 0; i<n ;i++){
        int x;
        cin >> x;
        // printVec(v);
        v.push_back(x); //O(1)
    }
    printVec(v);
    // Declaring array of particular size
    vector<int> v1(5);
    printVec(v1);

    //Declaring and filling the value in vector 
    vector<int> v2(10,3);
    printVec(v2);   
    // Remove last element of vector
    vector<int> v2;
    v2.pop_back();  //O(1)

    //Copy vector
    vector<int> v2 = v; // If we change in v2 then v wont change --> O(n)
    

}