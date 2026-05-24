#include <iostream>
#include <bits/stdc++.h>
using namespace std;
    bool should_i_swap(){

    }
int main(){
    //  sort() :- Sort takes two parameters 1. address from where sorting starts   
    //  2. next address till where sorting needs to be done
    //  sort fuuntion uses introsort to sort element 
    //  introsort = insertion sort + quick sort + heap sort
    /* How to sort a vector */
    int n;

    cin >> n;
    vector<int> a(n);
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());

    sort(a.begin(),a.end(),should_i_swap); //   should_i_swap is a comparator function 
    //  if return false swap should be done if return true swap will not be done
    
}