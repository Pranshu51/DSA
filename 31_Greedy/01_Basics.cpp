// ALGORITHM PARADIMN

// 1.Brute Force Approach: In this approach, we can maintain a list of all the numbers added so far. When we need to find the median, we can sort the list and then find the median based on the size of the list. This approach has a time complexity of O(n log n) for finding the median, which is not efficient for large data streams.
// 2.Dynamic Programming Approach: We can use a dynamic programming approach to maintain the median as we add numbers. We can keep track of the count of numbers added and the sum of the numbers. When we need to find the median, we can calculate it based on the count and sum. This approach has a time complexity of O(1) for finding the median, but it requires additional space to store the count and sum.
// 3.divide and conquer Approach: We can use a divide and conquer approach to maintain the median as we add numbers. We can keep track of the left and right halves of the numbers added so far. When we need to find the median, we can calculate it based on the left and right halves. This approach has a time complexity of O(log n) for finding the median, which is efficient for large data streams.
// 4.Greedy Approach: do local optimization at each step to find the global optimum. In this approach, we can maintain two heaps (a max heap for the left half and a min heap for the right half) to keep track of the numbers added so far. When we need to find the median, we can calculate it based on the top elements of the heaps. This approach has a time complexity of O(log n) for adding a number and O(1) for finding the median, which is efficient for large data streams.



// 1005. Maximize Sum Of Array After K Negations

// Given an integer array nums and an integer k, modify the array in the following way:
// choose an index i and replace nums[i] with -nums[i].
// You should apply this process exactly k times. You may choose the same index i multiple times.
// Return the largest possible sum of the array after modifying it in this way.

 

// Example 1:

// Input: nums = [4,2,3], k = 1
// Output: 5
// Explanation: Choose index 1 and nums becomes [4,-2,3].
// class Solution {
// public:
//     int largestSumAfterKNegations(vector<int>& nums, int k) {//t.c=O(klongn+n)
//         priority_queue<int, vector<int>, greater<int>> pq(nums.begin(),nums.end());//O(n)
//         int sum = 0;
//         for(int i =0;i<nums.size();i++){
//             sum+=nums[i];
//         }
//         while(k--){//O(klogn)
//             int ele =  pq.top();
//             if(ele==0) break;
//             pq.pop();
//             sum-=ele;
//             pq.push(-ele);
//             sum+=(-ele);
//         }
//         return sum;
//     }
// };




//FRACTIONAL KNAPSACK PROBLEM
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int,int> &a, pair<int,int> &b){//first=profit, second=weight
    double r1 = (double)a.first/a.second;
    double r2 = (double)b.first/b.second;
    return r1>r2;
}

int fractionalKnapsack(vector<int> &profit, vector<int> &weights,int n, int w){

}

int main(){
    vector<int> profit = {60, 100, 120};
    vector<int> weights = {10, 20, 30};
    int n = profit.size();
    int w = 50;
    cout << fractionalKnapsack(profit, weights, n, w) << endl;
    return 0;
}