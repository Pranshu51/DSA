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




// 1046. Last Stone Weight

// You are given an array of integers stones where stones[i] is the weight of the ith stone.
// We are playing a game with the stones. On each turn, we choose the heaviest two stones and smash them together. Suppose the heaviest two stones have weights x and y with x <= y. The result of this smash is:
// If x == y, both stones are destroyed, and
// If x != y, the stone of weight x is destroyed, and the stone of weight y has new weight y - x.
// At the end of the game, there is at most one stone left.
// Return the weight of the last remaining stone. If there are no stones left, return 0.

// Example 1:

// Input: stones = [2,7,4,1,8,1]
// Output: 1
// Explanation: 
// We combine 7 and 8 to get 1 so the array converts to [2,4,1,1,1] then,
// we combine 2 and 4 to get 2 so the array converts to [2,1,1,1] then,
// we combine 2 and 1 to get 1 so the array converts to [1,1,1] then,
// we combine 1 and 1 to get 0 so the array converts to [1] then that's the value of the last stone.


// class Solution {
// public:
//     int lastStoneWeight(vector<int>& arr) {
//         // Max-heap stores all stone weights
//         priority_queue<int> pq(arr.begin(), arr.end());

//         // Smash stones until 0 or 1 stone remains
//         while (pq.size() > 1) {
//             int y = pq.top(); pq.pop(); // First heaviest stone
//             int x = pq.top(); pq.pop(); // Second heaviest stone

//             if (y != x) {
//                 pq.push(y - x); // Remaining piece of stone y
//             }
//         }

//         return pq.empty() ? 0 : pq.top();
//     }
// };

// //or

// class Solution {
// public:
//     int lastStoneWeight(vector<int>& arr) {
//         // Max-heap stores all stone weights
//         priority_queue<int> pq;
//         for(auto x:arr){
//             pq.push(x);
//         }

//         // Smash stones until 0 or 1 stone remains
//         while (pq.size() > 1) {
//             int y = pq.top(); pq.pop(); // First heaviest stone
//             int x = pq.top(); pq.pop(); // Second heaviest stone

//             if (y != x) {
//                 pq.push(y - x); // Remaining piece of stone y
//             }
//         }

//         return pq.empty() ? 0 : pq.top();
//     }
// };

//or
// class Solution {
// public:
//     int lastStoneWeight(vector<int>& arr) {
//         // Continue until 0 or 1 stone remains
//         while (arr.size() > 1) {
//             // Step 1: Sort the array to bring the heaviest elements to the end
//             sort(arr.begin(), arr.end());

//             // Step 2: Extract the two heaviest stones
//             int n = arr.size();
//             int y = arr[n - 1]; // Heaviest stone
//             int x = arr[n - 2]; // Second heaviest stone

//             // Step 3: Remove the two heaviest stones
//             arr.pop_back();
//             arr.pop_back();

//             // Step 4: If they are not equal, push the difference back
//             if (y != x) {
//                 arr.push_back(y - x);
//             }
//         }

//         // Return the last stone weight or 0 if no stones are left
//         return arr.empty() ? 0 : arr[0];
//     }
// };



/*
  PROBLEM STATEMENT: Minimum Cost to Connect All Ropes
  
  Given an array 'arr' of rope lengths, connect all ropes into one single rope.
  The cost to connect two ropes of lengths X and Y is (X + Y).
  Find the MINIMUM total cost required to connect all given ropes.

  Example 1:
    Input: arr = [4, 3, 2, 6]
    Output: 29
    Explanation:
      1. Connect 2 and 3 -> cost = 5, ropes left = [4, 5, 6]
      2. Connect 4 and 5 -> cost = 9, ropes left = [9, 6]
      3. Connect 6 and 9 -> cost = 15, ropes left = [15]
      Total Cost = 5 + 9 + 15 = 29

  Example 2:
    Input: arr = [4, 2, 7, 6, 9]
    Output: 62
*/

// #include <iostream>
// #include <vector>
// #include <queue>

// using namespace std;

// int main(){
//     int arr[]{6,5,3,2,8,10,9};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     priority_queue<int, vector<int>, greater<int>> pq(arr, arr + n);

//     int minCost=0;
//     while(pq.size() > 1) {
//         int first = pq.top(); pq.pop();
//         int second = pq.top(); pq.pop();
//         int cost = first + second;
//         minCost += cost;
//         pq.push(cost);
//     }
//     cout << "Minimum cost to connect all ropes: " << minCost << endl;
// }



// 703. Kth Largest Element in a Stream

// You are part of a university admissions office and need to keep track of the kth highest test score from applicants in real-time. This helps to determine cut-off marks for interviews and admissions dynamically as new applicants submit their scores.

// You are tasked to implement a class which, for a given integer k, maintains a stream of test scores and continuously returns the kth highest test score after a new score has been submitted. More specifically, we are looking for the kth highest score in the sorted list of all scores.

// Implement the KthLargest class:

// KthLargest(int k, int[] nums) Initializes the object with the integer k and the stream of test scores nums.
// int add(int val) Adds a new test score val to the stream and returns the element representing the kth largest element in the pool of test scores so far.
 

// Example 1:

// Input:
// ["KthLargest", "add", "add", "add", "add", "add"]
// [[3, [4, 5, 8, 2]], [3], [5], [10], [9], [4]]

// Output: [null, 4, 5, 5, 8, 8]

// Explanation:

// KthLargest kthLargest = new KthLargest(3, [4, 5, 8, 2]);
// kthLargest.add(3); // return 4
// kthLargest.add(5); // return 5
// kthLargest.add(10); // return 5
// kthLargest.add(9); // return 8
// kthLargest.add(4); // return 8

// class KthLargest {
// private:
//     int K;
//     // C++ Min-Heap (smallest element is on top)
//     priority_queue<int, vector<int>, greater<int>> pq;

// public:
//     KthLargest(int k, vector<int>& nums) {
//         K = k;
//         // Populate the heap using the add method
//         for (int num : nums) {
//             add(num);
//         }
//     }
    
//     int add(int val) {
//         pq.push(val);
        
//         // Keep heap size at most K
//         if (pq.size() > K) {
//             pq.pop();
//         }
        
//         // The root of the min-heap is the K-th largest element
//         return pq.top();
//     }
// };