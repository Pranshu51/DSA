#include<iostream>
#include<vector>
using namespace std;
// 1480. Running Sum of 1d Array

// Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
// Return the running sum of nums.
// Example 1:

// Input: nums = [1,2,3,4]
// Output: [1,3,6,10]
// Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].


// class Solution {
// public:
//     vector<int> runningSum(vector<int>& nums) {
//         int n=nums.size();
//         // vector<int> sum;
//         // int runSum=0;
//         // for(int i=0;i<n;i++){
//         //     runSum+=nums[i];
//         //     sum.push_back(runSum);
//         // }
//         // return sum;

//         //m-2
//         // vector<int> run(n);
//         // run[0]=nums[0];
//         // for(int i=1;i<n;i++){
//         //     run[i]=nums[i]+run[i-1];
//         // }
//         // return run;

//         //m-3
//         for(int i=1;i<n;i++){
//             nums[i]+=nums[i-1];
//         }
//         return nums;
//     }
// };


//Que=>Check if array can be partitioned into 2 continuous arrays of equal sum
// Input: nums = [1,2,3,3]
// Output: true
// Explanation: The array can be partitioned as [1,2,3] and [3].

int main(){
    int arr[]={1,2,3,4,5,5,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++){
        arr[i]+=arr[i-1];
    }
    int idx=-1;
    for(int i=0;i<n;i++){
        if(2*arr[i]==arr[n-1]){
            idx=i;
            break;
        }
    }
    if(idx !=-1) cout<<"Array can be partitioned into 2 continuous arrays of equal sum at index "<<idx<<endl;
    else cout<<"Array cannot be partitioned into 2 continuous arrays of equal sum"<<endl;
     return 0;
}
