#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// If lower bound and upper bound function are not present then we have to use binary search.
// lower bound function 
//      1. if value is present returns the exact element.
//      2. if value is not present then returns the next greater element.

// upper bound function finds the next element even if element is present.
// upper bound and lower bound function returns the location.
// Time complexity is O(log(n))
// In case of Maps and Sets the upper bound and lower bound function time complexity is O(n).
// In case of Map upper and lower bound works only on key.

int main(){
    int arr[6] = {6,5,4,3,2,1};
    sort(arr,arr+6);
    for(int i = 0; i<6;i++){
        cout << arr[i] << endl;
    }
    int *ptr = lower_bound(arr,arr+6,5);
    int *pt = upper_bound(arr,arr+6,5);
    cout << (*ptr) << endl;
    cout << (*pt) << endl;
    /* In case of Vector */
    vector<int> a = {6,4,7,8,9};
    auto it = lower_bound(a.begin(),a.end(),4);
    cout << *it << endl;

    /* In case of Sets and Maps */
    set<int> s={1,2,3,4,5};
    for(auto i = s.begin(); i != s.end(); ++i){
        auto t = s.lower_bound(5);
        cout << *t << endl;
    }
}
