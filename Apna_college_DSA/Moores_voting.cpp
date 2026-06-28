#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

/*      Moore's Voating Algorithm
    Main Idea (1 line)
        Every time we find a different element, we cancel one occurrence of the current candidate.
        If an element appears more than n/2 times, it can never be completely cancelled.

    When to Use?
        Use Moore's Voting Algorithm when the question asks for:
        Majority Element
        Element occurring more than n/2 times

    Time Complexity: O(n)
    Space Complexity: O(1)
    
    Intuition
        Imagine every element gets one vote.
        Same element → Increase its votes.
        Different element → Cancel one vote.
        Since the majority element appears more than half of the time, even after all cancellations, it will still remain as the final candidate.

    Algorithm
        Maintain two variables:
        candidate → Possible majority element
        count → Number of unmatched votes
        For every element:
        Case 1
            If count == 0
            candidate = current element
            count = 1
        Case 2
            If current element == candidate
            count++
        Case 3
            Otherwise
            count--
*/

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