#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    int arr[] ={5,4,3,2,1};
    int n = size(arr);
    
    for(int i = 0; i < n; i++){
        int smallestIdx = i;
        for(int j = i+1; j < n; j++){
            if(arr[j]<arr[smallestIdx]){
                smallestIdx = j;
            }
        }
        swap(arr[i],arr[smallestIdx]);
    }
    
    for(int i = 0 ; i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}