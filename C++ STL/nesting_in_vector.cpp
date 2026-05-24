#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printVec(vector<pair<int,int>> v){
    for(int i = 0 ; i< v.size(); i++){
        cout << v[i].first << " " << v[i].second << endl;
    }
}

void printVec1(vector<vector<int>> v){
    for(int i = 0 ; i< v.size(); i++){
        for(int j = 0; j<i;j++){
            cout << v[i][j];
        }
    }
}

int main(){
    //Declare pair in vector
    vector<pair<int,int>> v;
    //Initialize pair in vector
    vector<pair<int,int>> v1 = {{1,2},{2,3},{3,4}};
    printVec(v1);
    // User input for pair in vector
    int n;
    cin >> n;
    for(int i = 0; i<n ;i++){
        int x , y;
        cin >> x >> y;
        v1.push_back({x,y});
    }
    printVec(v1);
    
    // Vector of vector
    //Initialize 
    int N;
    cin >> N;
    vector<vector<int>> v3;
    for(int i=0; i<N; i++){
        int n;
        cin >> n;
        vector<int> temp;
        for(int j=0; j<n ;j++){
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v3.push_back(temp);
    }
    for(int i = 0 ; i < N; i++){
        printVec1(v3);
    }
}
