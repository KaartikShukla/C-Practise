/*
                                                  Binary Search  
Binary search is applied on monotonic functions
Monotonic functions : which maintains a given order 
1 2 5 6 7 -> Monotonic functions
1 2 6 5 4 -> Non-monotonic functions
7 4 3 2 1 -> Monotonic functions

Predicate function : always return True or False

F F F F T T T T T ...
T T T T F F F F F ...

The time complexity of binary search is log(N)

*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {2,3,4,5,6,7};
    int n = v.size();
    int lo=0,hi=n-1,target = 3;
    int mid;
    while(hi-lo > 1){
        mid = (hi + lo)/2;
        if(v[mid] < target){
            lo = mid+1;
        }else if(v[mid] > target){
            hi = mid;
        }else{
            cout << mid;
            return 0;
        }
    }
}