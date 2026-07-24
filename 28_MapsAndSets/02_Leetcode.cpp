
// 2094. Finding 3-Digit Even Numbers

// You are given an integer array digits, where each element is a digit. The array may contain duplicates.

// You need to find all the unique integers that follow the given requirements:

// The integer consists of the concatenation of three elements from digits in any arbitrary order.
// The integer does not have leading zeros.
// The integer is even.
// For example, if the given digits were [1, 2, 3], integers 132 and 312 follow the requirements.

// Return a sorted array of the unique integers.

// Example 1:

// Input: digits = [2,1,3,0]
// Output: [102,120,130,132,210,230,302,310,312,320]
// Explanation: All the possible integers that follow the requirements are in the output array. 
// Notice that there are no odd integers or integers with leading zeros.

// class Solution {
// public:
//     vector<int> findEvenNumbers(vector<int>& digits) {
//         int n = digits.size();
//         vector<int> ans;
//         unordered_map<int,int> m;
//         for(int i=0;i<n;i++){
//             m[digits[i]]++;
//         }
//         for(int i=100;i<=999;i+=2){
//             int x = i;
//             int a = x%10;//ones place digit
//             x/=10;
//             int b = x%10;//tens place digit
//             x/=10;
//             int c = x;
//             if(m.find(a)!=m.end()){
//                 m[a]--;
//                 if(m[a]==0) m.erase(a);
//                 if(m.find(b)!=m.end()){
//                     m[b]--;
//                     if(m[b]==0) m.erase(b);
//                     if(m.find(c)!=m.end())
//                         ans.push_back(i);
//                     m[b]++;
//                 }
//                 m[a]++;
//             }
//         }
//         return ans;
//     }
// };



// 1814. Count Nice Pairs in an Array

// You are given an array nums that consists of non-negative integers. Let us define rev(x) as the reverse of the non-negative integer x. For example, rev(123) = 321, and rev(120) = 21. A pair of indices (i, j) is nice if it satisfies all of the following conditions:

// 0 <= i < j < nums.length
// nums[i] + rev(nums[j]) == nums[j] + rev(nums[i])
// Return the number of nice pairs of indices. Since that number can be too large, return it modulo 109 + 7.

// Example 1:

// Input: nums = [42,11,1,97]
// Output: 2
// Explanation: The two pairs are:
//  - (0,3) : 42 + rev(97) = 42 + 79 = 121, 97 + rev(42) = 97 + 24 = 121.
//  - (1,2) : 11 + rev(1) = 11 + 1 = 12, 1 + rev(11) = 1 + 11 = 12.


//  class Solution {
// public:
//     int rev(int n){
//         int r=0;
//         while(n>0){
//             r *=10;
//             r += n%10;
//             n /=10;
//         }
//         return r;
//     }
//     int countNicePairs(vector<int>& nums) {
//         int count=0;
//         int n = nums.size();
//         for(int i =0;i<n;i++){
//             nums[i]=nums[i]-rev(nums[i]);
//         }
//         unordered_map<int,int> m;
//         for(int i =0;i<n;i++){
//            if(m.find(nums[i])!=m.end()){
//             count = count%1000000007;
//             count += m[nums[i]];
//             m[nums[i]]++;
//            }else  m[nums[i]]++;
//         }
//         return count%1000000007;
//     }
// };