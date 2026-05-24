#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/* Square root using binary search */
// Time complexity is N*(10^d)
/*double eps = 1e-7;
int main(){
    double x = 16;
    double lo = 0, hi = x, mid;
    while(hi - lo > eps){
        mid = (hi+lo)/2;
        if( mid * mid < x){
            lo = mid;
        }else{
            hi = mid;
        }
    }
    cout << lo << " " << hi;
*/
/* Nth root using binary search */
// Time complexity is p*log(N*(10^d))
double multiply(int m, int n){
    int ans = 1;
    for(int i = 0; i < n ; i++){
        ans *= m;
    }
    return ans;
}

double eps = 1e-7;

int main(){
    double x = 16;
    int n = 4;
    double lo = 0, hi = x, mid;
    while(hi - lo > eps){
        mid = (hi+lo)/2;
        if(multiply(mid,n) < x){
            lo = mid;
        }else{
            hi = mid;
        }
    }
    cout << lo << " " << hi;
}