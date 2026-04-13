#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;


// 1052. Grumpy Bookstore Owner
// There is a bookstore owner that has a store open for n minutes. You are given an integer array customers of length n where customers[i] is the number of the customers that enter the store at the start of the ith minute and all those customers leave after the end of that minute.
// During certain minutes, the bookstore owner is grumpy. You are given a binary array grumpy where grumpy[i] is 1 if the bookstore owner is grumpy during the ith minute, and is 0 otherwise.
// When the bookstore owner is grumpy, the customers entering during that minute are not satisfied. Otherwise, they are satisfied.
// The bookstore owner knows a secret technique to remain not grumpy for minutes consecutive minutes, but this technique can only be used once.
// Return the maximum number of customers that can be satisfied throughout the day.

// Example 1:
// Input: customers = [1,0,1,2,1,1,7,5], grumpy = [0,1,0,1,0,1,0,1], minutes = 3
// Output: 16
// Explanation:
// The bookstore owner keeps themselves not grumpy for the last 3 minutes.
// The maximum number of customers that can be satisfied = 1 + 1 + 1 + 1 + 7 + 5 = 16.




// class Solution {
// public:
//     int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
//         int n=customers.size();
//         vector<int> & arr=customers;
//         int k=minutes;
//         int prevLoss=0;
//         for(int i=0;i<k;i++){
//             if(grumpy[i]==1) prevLoss+=arr[i];
//         }
//         int maxLoss=prevLoss;
//         int idx=0;
//         int i=1;
//         int j=k;
//         while(j<n){
//             int currentLoss=prevLoss;
//             if(grumpy[j]==1) currentLoss+=arr[j];
//             if(grumpy[i-1]==1) currentLoss-=arr[i-1];
//             if(maxLoss<currentLoss){
//                 maxLoss=currentLoss;
//                 idx=i;
//             }
//             prevLoss=currentLoss;
//             i++;
//             j++;
//         }

//         for(int i=idx;i<idx+k;i++){
//             grumpy[i]=0;
//         }
//         int sum=0;
//         for(int i=0;i<n;i++){
//             if(grumpy[i]==0) sum+=arr[i];
//         }
//         return sum;
//     }
// };





// 209. Minimum Size Subarray Sum

// Given an array of positive integers nums and a positive integer target, return the minimal length of a subarray whose sum is greater than or equal to target. If there is no such subarray, return 0 instead.
// Example 1:
// Input: target = 7, nums = [2,3,1,2,4,3]
// Output: 2
// Explanation: The subarray [4,3] has the minimal length under the problem constraint.


// class Solution {
// public:
//     int minSubArrayLen(int target, vector<int>& nums) {//.T.C=>O(n)
//     //total no.of operation <2*n
//         int n= nums.size();
//         int i=0;
//         int j=0;
//         int minLength=INT_MAX;
//         int len;
//         int sum=0;
//         while(j<n){
//             sum +=nums[j];
//             while(sum>=target){
//                  len=j-i+1;
//                 minLength=min(len,minLength);
//                 sum-=nums[i];
//                 i++;
//             }
//             j++;
//         }
//         if(minLength==INT_MAX)  return 0;
//         return minLength;
//     }
// };





// 1004. Max Consecutive Ones III

// Given a binary array nums and an integer k, return the maximum number of consecutive 1's in the array if you can flip at most k 0's.

// Example 1:

// Input: nums = [1,1,1,0,0,0,1,1,1,1,0], k = 2
// Output: 6
// Explanation: [1,1,1,0,0,1,1,1,1,1,1]
// Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.
// Example 2:

// Input: nums = [0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1], k = 3
// Output: 10
// Explanation: [0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,1]
// Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.



// class Solution {
// public:
//     int longestOnes(vector<int>& nums, int k) {
//         int n=nums.size();
//         int i=0, j=0, flips=0;
//         int maxLen=INT_MIN,len=INT_MIN;
//         while(j<n){
//             if(nums[j]==1) j++;
//             else{//nums[j]==0;
//                 if(flips<k) {
//                     flips++;
//                     j++;
//                     }else{
//                         len=j-i;
//                         maxLen=max(len,maxLen);
// //i ko just 0 wale idx ke ek aage wale idx pe le jaao
//                         while(nums[i]==1) i++;//yha se nums[i]==0 pe aa jaega isse ek i++ kar do
//                         i++;
//                         j++;
//                     }
//             }
//         }
//         len=j-i;
//         maxLen=max(len,maxLen);
//         return maxLen;
//     }
// };













// 1493. Longest Subarray of 1's After Deleting One Element
// Given a binary array nums, you should delete one element from it.
// Return the size of the longest non-empty subarray containing only 1's in the resulting array. Return 0 if there is no such subarray.

// Example 1:
// Input: nums = [1,1,0,1]
// Output: 3
// Explanation: After deleting the number in position 2, [1,1,1] contains 3 numbers with value of 1's.




// class Solution {
// public:
//     int longestSubarray(vector<int>& nums) {
//         int k=1;
//         int n=nums.size();
//         int i=0,j=0,flips=0;
//         int maxLen=INT_MIN,len=INT_MIN;
//         while(j<n){
//             if(nums[j]==1) j++;
//             else{
//                 if(flips<k){
//                     flips++;
//                     j++;
//                 }else{
//                     len=j-i;
//                     maxLen=max(len,maxLen);
//                     while(nums[i]==1) i++;
//                     i++;
//                     j++;
//                 }
//             }
//         }
//          len=j-i;
//          maxLen=max(len,maxLen);
//          return maxLen-1;
//     }
// };



// //m-2
// class Solution {
// public:
//     int longestSubarray(vector<int>& nums) {
//         int n=nums.size();
//         int i=0, j=0,count=0;
//         int zeroPosition=-1;
//         int maxLen=INT_MIN;
//        while(j<n){
//         int prev =zeroPosition;
//         if(nums[j]==0){
//             count++;
//             zeroPosition=j;
//         }
//         if(count<=1) j++;
//         else{
//             maxLen=max(maxLen,j-i);
//             i=prev+1;
//             count--;
//             j++;
//         }
//        }
//      maxLen=max(maxLen,j-i);
//     return maxLen-1;
//     }
// };








// 713. Subarray Product Less Than K

// Given an array of integers nums and an integer k, return the number of contiguous subarrays where the product of all the elements in the subarray is strictly less than k. 

// Example 1:

// Input: nums = [10,5,2,6], k = 100
// Output: 8
// Explanation: The 8 subarrays that have product less than 100 are:
// [10], [5], [2], [6], [10, 5], [5, 2], [2, 6], [5, 2, 6]
// Note that [10, 5, 2] is not included as the product of 100 is not strictly less than k.



// class Solution {
// public:
//     int numSubarrayProductLessThanK(vector<int>& nums, int k) {
//         if(k<=1) return 0;
//         int n=nums.size();
//         int i=0,j=0,count=0;
//         int prd=1;
//         while(j<n){
//             prd*=nums[j];
//             while(prd>=k){
//                 count+=(j-i);
//                 prd/=nums[i];
//                 i++;    
//             }
//             j++;
//         }
//         while(i<n){
//                 count+=(j-i);
//                 prd/=nums[i];
//                 i++;    
//             }
//         return count;
//     }
// };