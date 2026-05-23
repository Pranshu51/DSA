// 1944. Number of Visible People in a Queue
// Hard
// There are n people standing in a queue, and they numbered from 0 to n - 1 in left to right order. You are given an array heights of distinct integers where heights[i] represents the height of the ith person.
// A person can see another person to their right in the queue if everybody in between is shorter than both of them. More formally, the ith person can see the jth person if i < j and min(heights[i], heights[j]) > max(heights[i+1], heights[i+2], ..., heights[j-1]).
// Return an array answer of length n where answer[i] is the number of people the ith person can see to their right in the queue.

// Example 1:
// Input: heights = [10,6,8,5,11,9]
// Output: [3,1,2,1,1,0]
// Explanation:
// Person 0 can see person 1, 2, and 4.
// Person 1 can see person 2.
// Person 2 can see person 3 and 4.
// Person 3 can see person 4.
// Person 4 can see person 5.
// Person 5 can see no one since nobody is to the right of them.




// class Solution {
// public:
//     vector<int> canSeePersonsCount(vector<int>& arr) {
//         int n= arr.size();
//         vector<int> ans(n,0);
//         stack<int> st;
//         ans[n-1]=0;
//         st.push(arr[n-1]);
//         for(int i=n-2;i>=0;i--){
//             int count=0;
//             while(st.size()>0 && arr[i]>st.top()){
//                 st.pop();
//                 count++;
//             }
//             if(st.size()!=0) count++;
//             ans[i]=count;
//             st.push(arr[i]);
//         }
//         return ans;
//     }
// };





// 239. Sliding Window Maximum
// Hard
// You are given an array of integers nums, there is a sliding window of size k which is moving from the very left of the array to the very right. You can only see the k numbers in the window. Each time the sliding window moves right by one position.
// Return the max sliding window.
// Example 1:

// Input: nums = [1,3,-1,-3,5,3,6,7], k = 3
// Output: [3,3,5,5,6,7]
// Explanation: 
// Window position                Max
// ---------------               -----
// [1  3  -1] -3  5  3  6  7       3
//  1 [3  -1  -3] 5  3  6  7       3
//  1  3 [-1  -3  5] 3  6  7       5
//  1  3  -1 [-3  5  3] 6  7       5
//  1  3  -1  -3 [5  3  6] 7       6
//  1  3  -1  -3  5 [3  6  7]      7
// Example 2:

// Input: nums = [1], k = 1
// Output: [1]
 


// class Solution {
// public:
//     vector<int> maxSlidingWindow(vector<int>& arr, int k) {
//         int n = arr.size();
//         int ngi[n];
//         stack<int> st;
//         ngi[n-1] =n;
//         st.push(n-1);
//         for(int i=n-2;i>=0;i--){
//             while(st.size()>0 && arr[st.top()]<=arr[i]) st.pop();
//             if(st.size()==0) ngi[i] =n;
//             else ngi[i]=st.top();
//             st.push(i);
//         }
//         vector<int> ans;
//         for(int i=0;i<n-k+1;i++){
//             int mx=arr[i];
//             int j=i;
//             while(j<i+k){
//                 mx=arr[j];
//                 j=ngi[j];
//             }
//             ans.push_back(mx);
//         }
//         return ans;
//     }
// };




// class Solution {
// public:
//     vector<int> maxSlidingWindow(vector<int>& arr, int k) {
//         if(k==1) return arr;
//         int n = arr.size();
//         int ngi[n];
//         stack<int> st;
//         ngi[n-1] =n;
//         st.push(n-1);
//         for(int i=n-2;i>=0;i--){
//             while(st.size()>0 && arr[st.top()]<=arr[i]) st.pop();
//             if(st.size()==0) ngi[i] =n;
//             else ngi[i]=st.top();
//             st.push(i);
//         }
//         vector<int> ans;
//         int j=0;
//         for(int i=0;i<n-k+1;i++){
//             if(j<i) j=i;
//             int mx=arr[j];
//             int j=i;
//             while(j<i+k){
//                 mx=arr[j];
//                 if(ngi[i]>=i+k) break;
//                 j=ngi[j];
//             }
//             ans.push_back(mx);
//         }
//         return ans;
//     }
// };










// 155. Min Stack
// Medium
// Topics
// premium lock icon
// Companies
// Hint
// Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

// Implement the MinStack class:

// MinStack() initializes the stack object.
// void push(int val) pushes the element val onto the stack.
// void pop() removes the element on the top of the stack.
// int top() gets the top element of the stack.
// int getMin() retrieves the minimum element in the stack.
// You must implement a solution with O(1) time complexity for each function.

 

// Example 1:

// Input
// ["MinStack","push","push","push","getMin","pop","top","getMin"]
// [[],[-2],[0],[-3],[],[],[],[]]

// Output
// [null,null,null,null,-3,null,0,-2]

// Explanation
// MinStack minStack = new MinStack();
// minStack.push(-2);
// minStack.push(0);
// minStack.push(-3);
// minStack.getMin(); // return -3
// minStack.pop();
// minStack.top();    // return 0
// minStack.getMin(); // return -2





// class MinStack {
// public:
// stack<int> st;
// stack<int> helper;
//     MinStack() {
        
//     }
    
//     void push(int val) {
//         st.push(val);
//         if(helper.size()==0 || val<helper.top()) helper.push(val);
//         else helper.push(helper.top());
//     }
    
//     void pop() {
//         st.pop();
//         helper.pop();
//     }
    
//     int top() {
//         return st.top();
//     }
    
//     int getMin() {
//         return helper.top();
//     }
// };

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */




//  //alternate bad app
//  class MinStack {
// public:
// vector<int> v;
//     MinStack() {
        
//     }
    
//     void push(int val) {
//        v.push_back(val);
//     }
    
//     void pop() {
//         v.pop_back();
//     }
    
//     int top() {
//         return v[v.size()-1];
//     }
    
//     int getMin() {
//         int mn=v[0];
//         for(int i=1;i<v.size();i++){
//             mn=min(mn,v[i]);
//         }
//         return mn;
//     }
// };



//alternate

// class MinStack {
// public:
// stack<long long> st;
// long long min;
//     MinStack() {
//         // min=LLONG_MAX;
//     }
    
//     void push(int val) {
//         if(st.size()==0){
//             st.push(val);
//             min=st.top();
//         }
//         else if(val>=min) st.push(val);
//         else{//val<min
//             st.push(2LL*val-min);
//             min = val;
//         }
//     }
    
//     void pop() {
//         if(st.top()<min){
//             int oldMin=2*min-st.top();
//             min=oldMin;
//         }
//         st.pop();
//     }
    
//     int top() {
//         if(st.empty()) return -1;
//         if(st.top()<min) return min;
//         else return st.top();
//     }
    
//     int getMin() {
//         return min;
//     }
// };



