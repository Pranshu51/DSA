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






// 973. K Closest Points to Origin

// Given an array of points where points[i] = [xi, yi] represents a point on the X-Y plane and an integer k, return the k closest points to the origin (0, 0).
// The distance between two points on the X-Y plane is the Euclidean distance (i.e., √(x1 - x2)2 + (y1 - y2)2).
// You may return the answer in any order. The answer is guaranteed to be unique (except for the order that it is in).

// Example 1:

// Input: points = [[1,3],[-2,2]], k = 1
// Output: [[-2,2]]
// Explanation:
// The distance between (1, 3) and the origin is sqrt(10).
// The distance between (-2, 2) and the origin is sqrt(8).
// Since sqrt(8) < sqrt(10), (-2, 2) is closer to the origin.
// We only want the closest k = 1 points from the origin, so the answer is just [[-2,2]].

// class Solution {
// public:
//     vector<vector<int>> kClosest(vector<vector<int>>& arr, int k) {
//         vector<vector<int>> ans;
//         priority_queue<pair<int,vector<int>>> pq;
//         for(auto v: arr){
//             int x= v[0];
//             int y= v[1];
//             int dist = x*x+y*y;
//             pq.push({dist,v});
//             if(pq.size()>k) pq.pop();
//         }
//         while(pq.size()>0){
//             ans.push_back(pq.top().second);
//             pq.pop();
//         }
//         return ans;
//     }
// };

// //or
// class Solution {
// public:
//     vector<vector<int>> kClosest(vector<vector<int>>& arr, int k) {
//         vector<vector<int>> ans;
//         priority_queue<pair<int,vector<int>>> pq;
//         for(int i=0;i<arr.size();i++){
//             int x= arr[i][0];
//             int y= arr[i][1];
//             int dist = x*x+y*y;
//             pq.push({dist,arr[i]});
//             if(pq.size()>k) pq.pop();
//         }
//         while(pq.size()>0){
//             ans.push_back(pq.top().second);
//             pq.pop();
//         }
//         return ans;
//     }
// };