#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

/*      Majority Element    */

int main(){
    /*  Brute Forces O(n^2)*/
    
    // int a[5] = {1,2,2,1,1};
    // int n = size(a);
    // int frq = 0;
    // for(int val : a){
    //     for(int num : a){
    //         if(val == num){
    //             frq++;
    //         }
    //     }
    //     if(frq > n /2){
    //         cout << frq;
    //         return 0;
    //     }
    // }
    
    /*  Optimized  O(nlogn)  */
    // int a[5]={1,2,2,1,1};
    // int n = size(a);
    // int frq = 1, ans = a[0];
    // sort(a,a+n);
    // for(int i = 1; i < n; i++){
    //     if(a[i] == a[i-1]){
    //         frq++;
    //     }
    //     else{
    //         frq = 1;
    //         ans = a[i];
    //     }
    //     if(frq > n / 2){
    //         cout << frq;
    //         break;
    //     }
    // } 
    
    /*  Moore's Voting Algorithm  */
    int a[5]={1,2,2,1,1};
    int n = size(a);
    int frq = 0, ans = 0;
    for(int i = 0; i < n;i++){
        if(frq == 0){
            ans = a[i];
        }
        if(ans == a[i]){
            frq++;
        }else{
            frq--;
        }
    }
    cout << ans;
}