// 378. Kth Smallest Element in a Sorted Matrix

// Given an n x n matrix where each of the rows and columns is sorted in ascending order, return the kth smallest element in the matrix.
// Note that it is the kth smallest element in the sorted order, not the kth distinct element.
// You must find a solution with a memory complexity better than O(n2).

// Example 1:

// Input: matrix = [[1,5,9],[10,11,13],[12,13,15]], k = 8
// Output: 13
// Explanation: The elements in the matrix are [1,5,9,10,11,12,13,13,15], and the 8th smallest number is 13

// class Solution {
// public:
//     int kthSmallest(vector<vector<int>>& arr, int k) {
//         int m = arr.size();
//         int n = arr[0].size();
//         // vector<vector<int>> ans;
//         priority_queue<int> pq;
//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 pq.push(arr[i][j]);
//                 if(pq.size()>k){
//                     pq.pop();
//                 }
//             }
//         }
//         return pq.top();
//     }
// };


//or good method

// pending






// 1636. Sort Array by Increasing Frequency

// Given an array of integers nums, sort the array in increasing order based on the frequency of the values. If multiple values have the same frequency, sort them in decreasing order.
// Return the sorted array.

// Example 1:

// Input: nums = [1,1,2,2,2,3]
// Output: [3,1,1,2,2,2]
// Explanation: '3' has a frequency of 1, '1' has a frequency of 2, and '2' has a frequency of 3.

// class Solution {
// public:
//     typedef pair<int, int> pi;

//     vector<int> frequencySort(vector<int>& nums) {
//         unordered_map<int, int> mp;

//         // Count frequency
//         for (auto x : nums) {
//             mp[x]++;
//         }
//         //using comparator
//         auto cmp = [&mp](int a ,int b){
//             if(mp[a]!=mp[b]){
//                 return mp[a]<mp[b];
//             }else return a>b;
//         };

//         sort(nums.begin(),nums.end(),cmp);
//         return nums;
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


// class Solution {
// public:
//     vector<int> findClosestElements(vector<int>& arr, int k, int x) {
//         vector<int> ans;
//         int n =arr.size();
//         priority_queue<pair<int,int>> pq;
//         for(int i=0;i<n;i++){
//             int diff = abs(arr[i]-x);
//             pq.push({diff,arr[i]});
//             if(pq.size()>k) pq.pop();
//         }
//         while(pq.size()>0){
//             ans.push_back(pq.top().second);
//             pq.pop();
//         }
//         sort(ans.begin(),ans.end());
//         return ans;
//     }
// };