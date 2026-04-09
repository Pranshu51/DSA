// 268. Missing Number
// Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.


// Example 1:
// Input: nums = [3,0,1]
// Output: 2
// Explanation:
// n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.



// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         //T.C=>O(n);
//         //S.C=O(1);
//         //cyclic sort solution:solution is good but we are modifying the array

//         int n =nums.size();
//         // int i=0;
//         // while(i<n){
//         //     int correctIdx=nums[i];
//         //     if(correctIdx==i || nums[i]==n) i++;
//         //     else swap(nums[i],nums[correctIdx]);
//         // }
//         // for(int i=0;i<n;i++){
//         //     if(nums[i] !=i) return i;
//         // }
//         // return n;//last to hoga hi kyuki ye skip ho rha tha

//         //t.c=same
//         //NOt modifying the array

//         int actualSum= n*(n+1)/2;
//         int sum=0;
//         for(int i=0;i<n;i++){
//             sum+=nums[i];
//         }
//         return actualSum-sum;
//     }
// };













// 287. Find the Duplicate Number
// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
// There is only one repeated number in nums, return this repeated number.
// You must solve the problem without modifying the array nums and using only constant extra space.

// Example 1:
// Input: nums = [1,3,4,2,2]
// Output: 2
// Example 2:
// Input: nums = [3,1,3,4,2]
// Output: 3



// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         int n =nums.size();
//     //     sort(nums.begin(),nums.end());
//     //     for(int i=0;i<n;i++){
//     //         if(nums[i]==nums[i+1]){
//     //             return nums[i];
//     //         }
//     //     }
//     //     return -1;

//     // modifying array not aalowed
//     // int ans=-1;
//     // for(int i=0;i<n;i++){
//     //     int index=abs(nums[i]);
//     //     if(nums[index]<0){
//     //         ans=index;
//     //         break;
//     //     }
//     //     nums[index]*=-1;
//     // }
//     // return ans;

//     // positioninig method
//     // while(nums[0] !=nums[nums[0]]){
//     //     swap(nums[0],nums[nums[0]]);
//     // }
//     // return nums[0];



//     //Cyclic sort method
//     int i=0;
//     while(i<n){
//         int correctIdx=nums[i];
//         if(nums[correctIdx]==nums[i]) return nums[i];
//         else swap(nums[i],nums[correctIdx]);
//     }
//     return 100;
//     }
// };











// 448. Find All Numbers Disappeared in an Array

// Given an array nums of n integers where nums[i] is in the range [1, n], return an array of all the integers in the range [1, n] that do not appear in nums.

// Example 1:
// Input: nums = [4,3,2,7,8,2,3,1]
// Output: [5,6]



// class Solution {
// public:
//     vector<int> findDisappearedNumbers(vector<int>& nums) {
//         int n=nums.size();
//         int i=0;
//         while(i<n){
//             int correctIdx=nums[i]-1;
//             if(nums[correctIdx]==nums[i]) i++;
//             else(swap(nums[i],nums[correctIdx]));
//         }
//         vector<int> ans;
//         for(int i=0;i<n;i++){
//             if(nums[i]!=i+1) ans.push_back(i+1);
//         }
//         return ans;
//     }
// };








// 41. First Missing Positive

// Given an unsorted integer array nums. Return the smallest positive integer that is not present in nums.
// You must implement an algorithm that runs in O(n) time and uses O(1) auxiliary space.

// Example 1:
// Input: nums = [1,2,0]
// Output: 3
// Explanation: The numbers in the range [1,2] are all in the array.



// class Solution {
// public:
//     int firstMissingPositive(vector<int>& nums) {
//         int n=nums.size();
//         int i=0;
//         while(i<n){
//             if(nums[i]<=0) i++;
// else if(nums[i] > n || nums[i] == i+1 || nums[nums[i]-1] == nums[i]) i++;
//             else swap(nums[i],nums[nums[i]-1]);
//         }
//         for(int i=0;i<n;i++){
//             if(nums[i] !=i+1) return i+1;
//         }
//         return n+1;
//     }
// };