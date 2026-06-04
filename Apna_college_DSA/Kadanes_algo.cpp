/*      Maximum Subarray Sum
    If value of array is n then subarray is (n*(n+1)/2)

*/
#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
// int main(){
//     int n = 5;
//     int a[5] = {1,2,3,4,5};
// /*  Brute force approach to print all subarray of an array  */
//     for(int st = 0; st < n; st++){
//         for(int end = st; end < n; end++){
//             for(int i = st;i <= end; i++){
//                 cout << a[i];
//             }
//             cout << " ";
//         }
//         cout << endl;
//     }
// }

/*Better approach than previous one its complexity is O(n^2)*/

// int main(){
//     int n = 7;
//     int a[7] = {3,-4,5,4,-1,7,-8};
//     int maxSum = 0;
//     for(int st=0;st<n;st++){
//         int currSum = 0;
//         for(int en=st;en<n;en++){
//             currSum += a[en];
//             maxSum = max(maxSum,currSum);
//         }
//     }
//     cout << maxSum;
// }

/*  Kadane's Algorithm   */

int main(){
    int n = 7;
    int a[7] = {3,-4,5,4,-1,7,-8};
    int maxSum = 0;
    int currSum = 0;
    for(int st=0;st<n;st++){
        currSum += a[st];
        maxSum = max(maxSum,currSum);
        if(currSum < 0){
            currSum = 0;
        }
    }
    cout << maxSum;
}