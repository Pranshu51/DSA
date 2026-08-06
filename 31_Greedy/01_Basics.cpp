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
#include <climits>
#include <algorithm>
using namespace std;

// bool cmp(pair<int,int> &a, pair<int,int> &b){//first=profit, second=weight
//     double r1 = (double)a.first/a.second;
//     double r2 = (double)b.first/b.second;
//     return r1>r2;
// }

// double fractionalKnapsack(vector<int> &profit, vector<int> &weights,int n, int w){
//     //T.c=>O(nlogn) S.C=>O(n) or sorting algo s.c
//     vector<pair<int,int>> arr;
//     for(int i=0;i<n;i++){
//         arr.push_back({profit[i],weights[i]});
//     }
//     sort(arr.begin(),arr.end(),cmp);
//     double ans=0;
//     for(int i=0;i<n;i++){
//         if(arr[i].second<=w){
//             ans+=arr[i].first;
//             w-=arr[i].second;
//         }else{
//             // ans+=arr[i].first*((double)w/arr[i].second);//or
//             ans+=((arr[i].first*1.0)/arr[i].second*1.0)*w;
//             w=0;
//             break;
//         }
//     }
//     return ans;
// }

// int main(){
//     vector<int> profit = {60, 100, 120};
//     vector<int> weights = {10, 20, 30};
//     int n = profit.size();
//     int w = 50;
//     cout << fractionalKnapsack(profit, weights, n, w) << endl;
//     return 0;
// }




//MINIMUM PRODUCT SUBSET
// Given an array of integers, the task is to find the minimum product that can be obtained from a subset of the given array. The subset can be of any size, including the empty set. The minimum product can be negative, zero, or positive, depending on the elements in the array.




// int minProduct(vector<int> &arr){
//     int prod_pos=1; int prod_neg=1;
//     int cn =0; int cz=0;int cp=0;
//     int largest_neg = INT_MIN;
//     for(int i =0;i<arr.size();i++){
//         if(arr[i]<0) {
//             cn++;
//             prod_neg*=arr[i];
//             largest_neg = max(largest_neg,arr[i]);
//         }
//         if(arr[i]==0) cz++;
//         if(arr[i]>0) {
//             cp++;
//             prod_pos*=arr[i];
//         }
//     }
//     if(cn==0){
//         if(cz>0) return 0;
//         else return *min_element(arr.begin(),arr.end());
//     }else{
//         if(cn%2==0){//even negative numbers
//             return (prod_neg/largest_neg)*prod_pos;
//         }else{
//             return prod_neg*prod_pos;
//         }
//     }
// }

// int main(){
//     vector<int> arr = { -2, -3,1,4, -2, -5};
//     cout << minProduct(arr) << endl;
//     return 0;
    
// }


// Minimum Cost to cut a board into square
// bool cmp(int a,int b){
//     return a>b;
// } 
//     int minCost(int n, int m, vector<int>& x, vector<int>& y) {//x=vertical cuts, y=horizontal cuts
//         //  code here
//             sort(x.begin(),x.end(),cmp);    
//             sort(y.begin(),y.end(),cmp);    

//             int hr=1;int vr=1;
//             int v=0;int h=0;
//             int ans=0;

//             while(v<x.size() && h<y.size()){
//                 if(x[v]>y[h]){
//                     ans+=x[v]*hr;
//                     vr++;
//                     v++;
//                 }else{
//                     ans+=y[h]*vr;
//                     hr++;
//                     h++;
//                 }
//             }
//             while(v<x.size()){
//                     ans+=x[v]*hr;
//                     vr++;
//                     v++;
//                 }
//                 while(h<y.size()){
//                     ans+=y[h]*vr;
//                     hr++;
//                     h++;
//                 }
//             return ans;
// }


//     int main(){
//         int n = 6, m = 4;
//         vector<int> x = {2, 1, 3, 1, 4};
//         vector<int> y = {4, 1, 2};
//         cout << minCost(n, m, x, y) << endl;
//         return 0;
//     }



//     //or
//     #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int minCost(int n, int m, vector<int>& x, vector<int>& y) {
//     // Sort both cut cost vectors in descending order
//     sort(x.begin(), x.end(), greater<int>());    
//     sort(y.begin(), y.end(), greater<int>());    

//     int hr = 1; // Count of horizontal pieces
//     int vr = 1; // Count of vertical pieces
//     int v = 0, h = 0;
//     int ans = 0;

//     // Interleave greedy choices based on highest cost first
//     while (v < x.size() && h < y.size()) {
//         if (x[v] > y[h]) {
//             ans += x[v] * hr;
//             vr++;
//             v++;
//         } else {
//             ans += y[h] * vr;
//             hr++;
//             h++;
//         }
//     }

//     // Process remaining vertical cuts (placed OUTSIDE the loop)
//     while (v < x.size()) {
//         ans += x[v] * hr;
//         v++;
//     }

//     // Process remaining horizontal cuts (placed OUTSIDE the loop)
//     while (h < y.size()) {
//         ans += y[h] * vr;
//         h++;
//     }

//     return ans;
// }

// int main() {
//     int n = 6, m = 4;
//     vector<int> x = {2, 1, 3, 1, 4};
//     vector<int> y = {4, 1, 2};
//     cout << minCost(n, m, x, y) << endl; // Output: 42
//     return 0;
// }


