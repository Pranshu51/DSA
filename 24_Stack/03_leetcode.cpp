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




// 20. Valid Parentheses

// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// An input string is valid if:

// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
// Every close bracket has a corresponding open bracket of the same type.
 

// Example 1:

// Input: s = "()"

// Output: true

// class Solution {
// public:
//     bool isValid(string s) {
//         stack<char> st;

//         for(char &ch : s){
//             if(st.empty() ||ch=='(' || ch=='{' || ch=='['){
//                 st.push(ch);
//                 continue;
//             }else{
//                 if(ch==')'){
//                     if(st.top()=='(') st.pop();
//                     else return false;
//                 }
//                 else if(ch=='}'){
//                     if(st.top()=='{') st.pop();
//                     else return false;
//                 }
//                 else if(ch==']'){
//                     if(st.top()=='[') st.pop();
//                     else return false;
//                 }
//             }
//         }
//         return st.empty();
//     }
// };


// 2095. Delete the Middle Node of a Linked List

// You are given the head of a linked list. Delete the middle node, and return the head of the modified linked list.
// The middle node of a linked list of size n is the ⌊n / 2⌋th node from the start using 0-based indexing, where ⌊x⌋ denotes the largest integer less than or equal to x.
// For n = 1, 2, 3, 4, and 5, the middle nodes are 0, 1, 1, 2, and 2, respectively.

// Example 1:

// class Solution {
// public:
//     ListNode* deleteMiddle(ListNode* head) {
//         if(head==NULL || head->next==NULL) return NULL;
//         ListNode* temp =head;
//         int size=0;
//         while(temp!=NULL){
//             size++;
//             temp=temp->next;
//         }
//         temp=head;
//         for(int i=0;i<(size/2)-1;i++){
//             temp = temp->next;
//         }
//         temp->next=temp->next->next;
//         return head;
//     }
// };

//or

// class Solution {
// public:
//     ListNode* deleteMiddle(ListNode* head) {
//         if(head==NULL || head->next==NULL) return NULL;
//         ListNode* slow=head;
//         ListNode* fast=head;
//         ListNode* prev=head;

//         while(fast !=NULL && fast->next!=NULL){
//             prev = slow;
//             slow=slow->next;
//             fast=fast->next->next;
//         }
//         prev->next=slow->next;
//         return head;
//     }
// };




// 901. Online Stock Span


// Design an algorithm that collects daily price quotes for some stock and returns the span of that stock's price for the current day.

// The span of the stock's price in one day is the maximum number of consecutive days (starting from that day and going backward) for which the stock price was less than or equal to the price of that day.

// For example, if the prices of the stock in the last four days is [7,2,1,2] and the price of the stock today is 2, then the span of today is 4 because starting from today, the price of the stock was less than or equal 2 for 4 consecutive days.
// Also, if the prices of the stock in the last four days is [7,34,1,2] and the price of the stock today is 8, then the span of today is 3 because starting from today, the price of the stock was less than or equal 8 for 3 consecutive days.
// Implement the StockSpanner class:

// StockSpanner() Initializes the object of the class.
// int next(int price) Returns the span of the stock's price given that today's price is price.
 

// Example 1:

// Input
// ["StockSpanner", "next", "next", "next", "next", "next", "next", "next"]
// [[], [100], [80], [60], [70], [60], [75], [85]]
// Output
// [null, 1, 1, 1, 2, 1, 4, 6]

// Explanation
// StockSpanner stockSpanner = new StockSpanner();
// stockSpanner.next(100); // return 1
// stockSpanner.next(80);  // return 1
// stockSpanner.next(60);  // return 1
// stockSpanner.next(70);  // return 2
// stockSpanner.next(60);  // return 1
// stockSpanner.next(75);  // return 4, because the last 4 prices (including today's price of 75) were less than or equal to today's price.
// stockSpanner.next(85);  // return 6
// class StockSpanner {
// public:
//     stack<pair<int,int>> st;//{price,pair}
//     StockSpanner() {

//     }
    
//     int next(int price) {
//         int span =1;
//         while(!st.empty() && st.top().first <=price){
//             span+=st.top().second;
//             st.pop();
//         }
//         st.push({price,span});
//         return span;
//     }
// };


// 1047. Remove All Adjacent Duplicates In String

// You are given a string s consisting of lowercase English letters. A duplicate removal consists of choosing two adjacent and equal letters and removing them.
// We repeatedly make duplicate removals on s until we no longer can.
// Return the final string after all such duplicate removals have been made. It can be proven that the answer is unique.

// Example 1:

// Input: s = "abbaca"
// Output: "ca"
// Explanation: 
// For example, in "abbaca" we could remove "bb" since the letters are adjacent and equal, and this is the only possible move.  The result of this move is that the string is "aaca", of which only "aa" is possible, so the final string is "ca".

// class Solution {
// public:
//     string removeDuplicates(string s) {
//         string ans = "";
        
//         for (int i = 0; i < s.length(); i++) {
//             if (ans.length() > 0 && ans.back() == s[i]) {
//                 ans.pop_back(); // Remove the adjacent duplicate
//             } else {
//                 ans += s[i];     // Keep the character
//             }
//         }
        
//         return ans;
//     }
// };


//or
// class Solution {
// public:
//     string removeDuplicates(string s) {
//         string ans = "";
//         stack<char> st;
//         for(int i=0;i<s.length();i++){
//             if(!st.empty() && st.top()==s[i]){
//                 st.pop();
//             }else {
//                 st.push(s[i]);
//             }
//         }
//         while (!st.empty()) {
//             ans += st.top();
//             st.pop();
//         }
//         reverse(ans.begin(),ans.end());
//         return ans;
//     }
// };


// 224. Basic Calculator

// Given a string s representing a valid expression, implement a basic calculator to evaluate it, and return the result of the evaluation.
// Note: You are not allowed to use any built-in function which evaluates strings as mathematical expressions, such as eval().

// Example 1:

// Input: s = "1 + 1"
// Output: 2

// class Solution {
// public:
//     int calculate(string s) {
//         int n = s.length();

//         stack<long long> st;

//         long long result = 0;
//         long long number = 0;
//         long long sign = 1;

//         for (int i = 0; i < n; i++) {

//             if (isdigit(s[i])) {
//                 number = number * 10 + (s[i] - '0');
//             }

//             else if (s[i] == '+') {
//                 result += number * sign;
//                 number = 0;
//                 sign = 1;
//             }

//             else if (s[i] == '-') {
//                 result += number * sign;
//                 number = 0;
//                 sign = -1;
//             }

//             else if (s[i] == '(') {
//                 st.push(result);
//                 st.push(sign);

//                 result = 0;
//                 number = 0;
//                 sign = 1;
//             }

//             else if (s[i] == ')') {
//                 result += number * sign;
//                 number = 0;

//                 long long stack_sign = st.top();
//                 st.pop();

//                 long long last_result = st.top();
//                 st.pop();

//                 result = result * stack_sign + last_result;
//             }
//         }

//         result += number * sign;

//         return result;
//     }
// };


// 907. Sum of Subarray Minimums

// Given an array of integers arr, find the sum of min(b), where b ranges over every (contiguous) subarray of arr. Since the answer may be large, return the answer modulo 109 + 7.

// Example 1:

// Input: arr = [3,1,2,4]
// Output: 17
// Explanation: 
// Subarrays are [3], [1], [2], [4], [3,1], [1,2], [2,4], [3,1,2], [1,2,4], [3,1,2,4]. 
// Minimums are 3, 1, 2, 4, 1, 1, 2, 1, 1, 1.
// Sum is 17.

// class Solution {
// public:
//     vector<int> getLsl(vector<int> &arr,int n ){
//         vector<int> result(n);
//         stack<int> st;

//         for(int i =0;i<n;i++){
//             if(st.empty()){
//                 result[i]=-1;
//             }else{
//                 while(!st.empty() && arr[st.top()]>=arr[i]) st.pop();

//                 result[i] =st.empty()? -1 : st.top(); 
//             }
//             st.push(i);
//         }
//         return result;
//     }

//      vector<int> getNsr(vector<int> &arr,int n ){
//         vector<int> result(n);
//         stack<int> st;

//         for(int i =n-1;i>=0;i--){
//             if(st.empty()){
//                 result[i]=n;
//             }else{
//                 while(!st.empty() && arr[st.top()]>arr[i]) st.pop();

//                 result[i] =st.empty()? n : st.top(); 
//             }
//             st.push(i);
//         }
//         return result;
//     }

//     int sumSubarrayMins(vector<int>& arr) {
//         int n = arr.size();
//         long long sum = 0;
//         int MOD = 1e9 + 7;
//         vector<int> nsl = getLsl(arr,n);
//         vector<int> nsr = getNsr(arr,n);

//         for (int i = 0; i < n; i++) {
//             long long ls = i-nsl[i];
//             long long rs = nsr[i]-i;
            
//             long long totalways = ls*rs;

//             long long totalSum = arr[i]*totalways;

//             sum=(sum+totalSum)%MOD;
            
//         }

//         return sum;
//     }
// };