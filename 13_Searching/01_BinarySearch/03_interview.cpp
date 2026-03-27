// 704. Binary Search
// Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.
// You must write an algorithm with O(log n) runtime complexity.
// Example 1:
// Input: nums = [-1,0,3,5,9,12], target = 9
// Output: 4
// Explanation: 9 exists in nums and its index is 4



// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//         int lo=0;
//         int hi=nums.size()-1;
//         while(lo<=hi){
//             int mid=/*(lo+hi)/2;*/lo+(hi-lo)/2;
//             if(nums[mid]==target) return mid;
//             else if(nums[mid]<target) lo=mid+1;
//             else hi=mid-1;
//         }
//         return -1;
//     }
// };







// 69. Sqrt(x)
// Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.
// You must not use any built-in exponent function or operator.
// For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.
// Example 1:
// Input: x = 4
// Output: 2
// Explanation: The square root of 4 is 2, so we return 2.

// class Solution {
// public:
//     int mySqrt(int x) {
//         int lo=0;
//         int hi=x;
//         while(lo<=hi){
//             int mid=lo+(hi-lo)/2;
//             long long m= (long long)mid*mid;
//             // long long y=(long long )x;
//            if (m==x )return mid;
//            else if(m>x) hi=mid-1;
//            else lo=mid+1;
//         }
//         return hi;
//     }
        
// };

/*852. Peak Index in a Mountain Array ==> O(log n)

You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.
Return the index of the peak element.
Your task is to solve it in O(log(n)) time complexity.
Example 1:

Input: arr = [0,1,0]
Output: 1
Example 2:
Input: arr = [0,2,1,0]
Output: 1*/

// class Solution {
// public:
//     int peakIndexInMountainArray(vector<int>& arr) {
//         int n=arr.size();
//         int lo=0;
//         int hi=n-1;
//         // int ans=-1;
//         while(lo<=hi){
//             int mid = lo+(hi-lo)/2;
//             if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
//                return  mid;
//             }
//             else if(arr[mid]<arr[mid+1]){
//                 lo=mid+1;
//             }else{
//                  hi=mid-1;
//             }
//         }
//         return -1;
//     }
// };






/*33. Search in Rotated Sorted Array  ==> O(log n)

There is an integer array nums sorted in ascending order (with distinct values).
Prior to being passed to your function, nums is possibly left rotated at an unknown index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be left rotated by 3 indices and become [4,5,6,7,0,1,2].
Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.
You must write an algorithm with O(log n) runtime complexity.

Example 1:

Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4
Example 2:

Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1
Example 3:*/

// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//         int n = nums.size();
//         if(n==2){
//             if(target==nums[0]) return 0;
//             else if(target==nums[1]) return 1;
//             else return -1;
//         }
//         int lo=0;
//         int hi=n-1;
//         int pivot= -1;
//         //finding the pivot element pivot is the element which is greater or less than both its adjacent numbers from pivot both 
//         while(lo<=hi){
//             int mid = lo + (hi-lo)/2;
//             if(mid==0) lo=mid+1;
//             else if(mid==n-1) hi=mid-1;
//             else if(nums[mid]<nums[mid+1] && nums[mid]<nums[mid-1]){
//                 pivot = mid;
//                 break;
//             }
//             else if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]){
//                 pivot = mid+1;
//                 break;
//             }
//             //4,5,6,7,0,1,2 here pivot=0 and if last element is less than mid than its order is not asscending that means it got rotated so we will get our answer lo=mid+1; also if last element is greater than mid that means sequence is correct and in ascending order than the pivot element will ot get at end so ih=mid-1;
//             else if(nums[mid]>nums[hi]) lo=mid+1;
//             else hi=mid-1;
//         }
//         if(pivot==-1){
//             int lo=0;
//             int hi = n-1;
//             while(lo<=hi){
//                 int mid = lo + (hi-lo)/2;
//                 if(nums[mid]==target) return mid;
//                 else if(nums[mid]>target) hi=mid-1;
//                 else lo=mid+1;
//             }
//             return -1;
//         }
//         else if(target>=nums[0] && target<=nums[pivot-1]){
//              int lo=0;
//             int hi = pivot-1;
//             while(lo<=hi){
//                 int mid = lo + (hi-lo)/2;
//                 if(nums[mid]==target) return mid;
//                 else if(nums[mid]>target) hi=mid-1;
//                 else lo=mid+1;
//             }
//         }
//         else if(target>=nums[pivot] && target<=nums[n-1]){
//              int lo=pivot;
//             int hi = n-1;
//             while(lo<=hi){
//                 int mid = lo + (hi-lo)/2;
//                 if(nums[mid]==target) return mid;
//                 else if(nums[mid]>target) hi=mid-1;
//                 else lo=mid+1;
//             }
//         }
//         return -1;
//     }
// };


// 658. Find K Closest Elements
// Given a sorted integer array arr, two integers k and x, return the k closest integers to x in the array. The result should also be sorted in ascending order.
// An integer a is closer to x than an integer b if:
// |a - x| < |b - x|, or
// |a - x| == |b - x| and a < b
 
// Example 1:
// Input: arr = [1,2,3,4,5], k = 4, x = 3
// Output: [1,2,3,4]

// Example 2:
// Input: arr = [1,1,2,3,4,5], k = 4, x = -1
// Output: [1,1,2,3]


// class Solution {
// public:
//     vector<int> findClosestElements(vector<int>& arr, int k, int x) {
//         int n =arr.size();
//         vector<int> ans(k);
//         if(x<arr[0]){
//             for(int i=0;i<k;i++){
//                 ans[i]=arr[i];
//             }
//             return ans;
//         }
//         if(x>arr[n-1]){
//             int i=n-1;
//             int j= k-1;
//             while(j>=0){
//                 ans[j]=arr[i];
//                 j--;
//                 i--;
//             }
//             return ans;
//         }
//         int lo=0;
//         int hi=n-1;
//         int flag=false;
//         int t=0; //representing the index of ans
//         int mid=-1;
//         while(lo<=hi){
//             mid = lo+ (hi-lo)/2;
//             if(arr[mid]==x) {
//                 flag=true;
//                 ans[t]=arr[mid];
//                 t++;
//                 break;
//             }
//             else if(arr[mid]>x) hi=mid-1;
//             else lo=mid+1;
//         }
//         int lb= hi;
//         int ub= lo;
//         if(flag==true){
//             lb=mid-1;
//             ub=mid+1;
//         }
//         while(t<k && lb>=0 && ub<=n-1){
//             int d1=abs( x - arr[lb]);
//             int d2 = abs( x - arr[ub]);
//             if(d1<=d2){
//                 ans[t] = arr[lb];
//                 lb--;
//                  }
//             else {
//                 ans[t]= arr[ub];
//                 ub++;
//             }
//             t++;
//         }
//         if(lb<0){
//             while(t<k){
//                 ans[t]=arr[ub];
//                 ub++;
//                 t++;
//             }
//         }
//         if(ub>n-1){
//             while(t<k){
//                 ans[t]=arr[lb];
//                 lb--;
//                 t++;
//             }
//         }
//         sort(ans.begin(), ans.end());
//         return ans;
//     }
// };



// 633. Sum of Square Numbers
// Given a non-negative integer c, decide whether there're two integers a and b such that a2 + b2 = c.

// Example 1:\
// Input: c = 5
// Output: true
// Explanation: 1 * 1 + 2 * 2 = 5
// Example 2:

// Input: c = 3
// Output: false

// class Solution {
// public:
// bool isPerfectSquare(int n){
//     int root = sqrt(n);
//     if(root * root== n) return true;
//     else return false;
// }
//     bool judgeSquareSum(int c) {
//        int x =0;
//        int y=c;
//        while(x<=y){
//         if(isPerfectSquare(x) && isPerfectSquare(y)) return true;
//         else if(!isPerfectSquare(y)){
//             y = (int)sqrt(y) * (int)sqrt(y);
//             x = c - y;
//         }
//         else if(!isPerfectSquare(x)){
//             x = ((int)sqrt(x) + 1) *((int)sqrt(x) + 1);
//             y = c - x;
//         }
//        }
//         return false;
//     }
// };















