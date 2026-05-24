/*  Binary Search using Upper bound and Lower bound  */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int lower_bound(vector<int> &v, int target){
    int lo = 0, hi = v.size()-1;
    while(hi - lo > 1){
        int  mid = (hi + lo) / 2;
        if(v[mid] < target){
            lo = mid + 1;
        }else{
            hi = mid;
        }
    }
    if(v[lo] >= target){
        return lo;
    }
    if(v[hi] >= target){
        return hi;
    }
    return -1;
}

int upper_bound(vector<int> &v, int target){
    int lo = 0, hi = v.size()-1;
    while(hi - lo > 1){
        int  mid = (hi + lo) / 2;
        if(v[mid] <= target){
            lo = mid + 1;
        }else{
            hi = mid;
        }
    }
    if(v[lo] > target){
        return lo;
    }
    if(v[hi] > target){
        return hi;
    }
    return -1;
}

int main(){
    vector<int> v = {1,2,3,4,5,6,7};
    cout << lower_bound(v,6) << " " << v[lower_bound(v,6)] << endl;
    cout << upper_bound(v,6) << " " << v[upper_bound(v,6)] << endl;

}