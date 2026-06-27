/*      Kadane's Algorithm
If value of array is n then subarray is (n*(n+1)/2)
    
    Main Idea (1 line)
        At every index, decide whether to:
        Continue the current subarray, or
        Start a new subarray from the current element.
        Whichever gives a larger sum is chosen.
    When to Use?
        Use Kadane's Algorithm when the question asks for:
            Maximum Subarray Sum
            Largest Contiguous Sum
            Continuous Subarray with Maximum Sum
    Time Complexity: O(n)
    Space Complexity: O(1)
    
    Intuition
        Suppose your current subarray sum is positive.
        ➡ Keep adding the next element because it can increase the answer.
        If the current sum becomes negative,
        ➡ Throw it away and start from the current element because a negative sum will only reduce future sums.
    Rule:
        Negative sum is a burden, so discard it.
    
    Algorithm
        Maintain two variables:
            currentSum → Maximum sum ending at current index.
            maxSum → Maximum sum found so far.
        For every element:
            currentSum = max(current element,
                            currentSum + current element)
            maxSum = max(maxSum, currentSum)
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