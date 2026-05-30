// 622. Design Circular Queue

// Design your implementation of the circular queue. The circular queue is a linear data structure in which the operations are performed based on FIFO (First In First Out) principle, and the last position is connected back to the first position to make a circle. It is also called "Ring Buffer".
// One of the benefits of the circular queue is that we can make use of the spaces in front of the queue. In a normal queue, once the queue becomes full, we cannot insert the next element even if there is a space in front of the queue. But using the circular queue, we can use the space to store new values.
// Implement the MyCircularQueue class:

// MyCircularQueue(k) Initializes the object with the size of the queue to be k.
// int Front() Gets the front item from the queue. If the queue is empty, return -1.
// int Rear() Gets the last item from the queue. If the queue is empty, return -1.
// boolean enQueue(int value) Inserts an element into the circular queue. Return true if the operation is successful.
// boolean deQueue() Deletes an element from the circular queue. Return true if the operation is successful.
// boolean isEmpty() Checks whether the circular queue is empty or not.
// boolean isFull() Checks whether the circular queue is full or not.
// You must solve the problem without using the built-in queue data structure in your programming language. 

 

// Example 1:

// Input
// ["MyCircularQueue", "enQueue", "enQueue", "enQueue", "enQueue", "Rear", "isFull", "deQueue", "enQueue", "Rear"]
// [[3], [1], [2], [3], [4], [], [], [], [4], []]
// Output
// [null, true, true, true, false, 3, true, true, true, 4]

// Explanation
// MyCircularQueue myCircularQueue = new MyCircularQueue(3);
// myCircularQueue.enQueue(1); // return True
// myCircularQueue.enQueue(2); // return True
// myCircularQueue.enQueue(3); // return True
// myCircularQueue.enQueue(4); // return False
// myCircularQueue.Rear();     // return 3
// myCircularQueue.isFull();   // return True
// myCircularQueue.deQueue();  // return True
// myCircularQueue.enQueue(4); // return True
// myCircularQueue.Rear();     // return 4


// class MyCircularQueue {
// public:
//     int f;//front
//     int b;//rear
//     int s;//size
//     int c;//capacity
//     vector<int> arr;
//     MyCircularQueue(int k) {
//     f=0;
//     b=0;
//     s=0;
//     c=k;
//     vector<int> v(k);
//     arr=v;
//     }
    
//     bool enQueue(int val) {//push_back
//         if(s==c) return false;
//         arr[b]=val;
//         b++;
//         if(b==c) b=0;
//         s++;
//         return true;
//     }
    
//     bool deQueue() {
//         if(s==0) return false;
//         f++;
//         if(f==c) f=0;
//         s--; 
//         return true;
//     }
    
//     int Front() {
//         if(s==0) return -1;
//         return arr[f];
//     }
    
//     int Rear() {
//         if(s==0) return -1;
//         if(b==0) return arr[c-1];
//         return arr[b-1];
//     }
    
//     bool isEmpty() {
//         if(s==0) return true;
//         else return false;
//     }
    
//     bool isFull() {
//         if(s==c) return true;
//         else return false;
//     }
// };




//INTERVIEW QUESITON

#include<iostream>
#include<queue>
#include<stack>
using namespace std;
// //1.Reverse first k elements of the queue



// int main(){
//     queue<int> q;
//     stack<int> st;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     int k =4;
//     int n =q.size();
//     for(int i=0;i<k;i++){
//         st.push(q.front());
//         q.pop();
//     }
//     while(st.size()>0){
//         q.push(st.top());
//         st.pop();
//     }
//     for(int i=0;i<n-k;i++){
//         int x = q.front();
//         q.pop();
//         q.push(x);
//     }

//     for(int i=0;i<n;i++){
//         int x=q.front();
//         cout<<x<<" ";
//         q.pop();
//         q.push(x);
//     }
// }



// 1700. Number of Students Unable to Eat Lunch
// ol cafeteria offers circular and square sandwiches at lunch break, referred to by numbers 0 and 1 respectively. All students stand in a queue. Each student either prefers square or circular sandwiches.
// The number of sandwiches in the cafeteria is equal to the number of students. The sandwiches are placed in a stack. At each step:
// If the student at the front of the queue prefers the sandwich on the top of the stack, they will take it and leave the queue.
// Otherwise, they will leave it and go to the queue's end.
// This continues until none of the queue students want to take the top sandwich and are thus unable to eat.

// You are given two integer arrays students and sandwiches where sandwiches[i] is the type of the i​​​​​​th sandwich in the stack (i = 0 is the top of the stack) and students[j] is the preference of the j​​​​​​th student in the initial queue (j = 0 is the front of the queue). Return the number of students that are unable to eat.

 

// Example 1:

// Input: students = [1,1,0,0], sandwiches = [0,1,0,1]
// Output: 0 
// Explanation:
// - Front student leaves the top sandwich and returns to the end of the line making students = [1,0,0,1].
// - Front student leaves the top sandwich and returns to the end of the line making students = [0,0,1,1].
// - Front student takes the top sandwich and leaves the line making students = [0,1,1] and sandwiches = [1,0,1].
// - Front student leaves the top sandwich and returns to the end of the line making students = [1,1,0].
// - Front student takes the top sandwich and leaves the line making students = [1,0] and sandwiches = [0,1].
// - Front student leaves the top sandwich and returns to the end of the line making students = [0,1].
// - Front student takes the top sandwich and leaves the line making students = [1] and sandwiches = [1].
// - Front student takes the top sandwich and leaves the line making students = [] and sandwiches = [].
// Hence all students are able to eat.

// class Solution {
// public:
//     int countStudents(vector<int>& students, vector<int>& sandwiches) {
//         int n=students.size();
//         queue<int> q;
//         for(int i=0;i<n;i++){
//             q.push(students[i]);
//         }
//         int count=0;
//         int i =0;
//         while(q.size()>0 && count!=q.size()){
//             if(q.front()==sandwiches[i]){
//                 count=0;
//                 q.pop();
//                 i++;
//             }else{
//                 q.push(q.front());
//                 q.pop();
//                 count++;
//             }
//         }
//         return q.size();
//     }
// };











// 232. Implement Queue using Stacks

// Implement a first in first out (FIFO) queue using only two stacks. The implemented queue should support all the functions of a normal queue (push, peek, pop, and empty).
// Implement the MyQueue class:
// void push(int x) Pushes element x to the back of the queue.
// int pop() Removes the element from the front of the queue and returns it.
// int peek() Returns the element at the front of the queue.
// boolean empty() Returns true if the queue is empty, false otherwise.
// Notes:

// You must use only standard operations of a stack, which means only push to top, peek/pop from top, size, and is empty operations are valid.
// Depending on your language, the stack may not be supported natively. You may simulate a stack using a list or deque (double-ended queue) as long as you use only a stack's standard operations.
 

// Example 1:

// Input
// ["MyQueue", "push", "push", "peek", "pop", "empty"]
// [[], [1], [2], [], [], []]
// Output
// [null, null, null, 1, 1, false]

// Explanation
// MyQueue myQueue = new MyQueue();
// myQueue.push(1); // queue is: [1]
// myQueue.push(2); // queue is: [1, 2] (leftmost is front of the queue)
// myQueue.peek(); // return 1
// myQueue.pop(); // return 1, queue is [2]
// myQueue.empty(); // return false



// class MyQueue {
// public:
//     int size;
//     stack<int> st;
//     stack<int> gt;
//     MyQueue() {
//         size=0;
//     }
    
//     void push(int x) {
//         st.push(x);
//         size++;
//     }
    
//     int pop() {
//         if(size==0) return -1;
//         while(st.size()>1){
//             gt.push(st.top());
//             st.pop();
//         }
//         int x=st.top();
//         st.pop();
//         while(gt.size()>0){
//             st.push(gt.top());
//             gt.pop();
//         }
//         size--;
//         return x;
//     }
    
//     int peek() {
//         while(st.size()>1){
//             gt.push(st.top());
//             st.pop();
//         }
//         int x = st.top();
//         while(gt.size()>0){
//             st.push(gt.top());
//             gt.pop();
//         }
//         return x;
//     }
    
//     bool empty() {
//         if(st.size()==0) return true;
//         else return false;
//     }
// };


// //little change


//PUSH OPTIMIZED //t.c=push=O(1); but pop t.c=O(n)

// class MyQueue {
// public:
//     stack<int> st;
//     stack<int> gt;
//     MyQueue() {
//     }
    
//     void push(int x) {
//         st.push(x);
//     }
    
//     int pop() {
//         while(st.size()>0){
//             gt.push(st.top());
//             st.pop();
//         }
//         int x=gt.top();
//         gt.pop();
//         while(gt.size()>0){
//             st.push(gt.top());
//             gt.pop();
//         }
//         return x;
//     }
    
//     int peek() {
//         while(st.size()>0){
//             gt.push(st.top());
//             st.pop();
//         }
//         int x = gt.top();
//         while(gt.size()>0){
//             st.push(gt.top());
//             gt.pop();
//         }
//         return x;
//     }
    
//     bool empty() {
//         if(st.size()==0) return true;
//         else return false;
//     }
// };



//POP OPTIMIZED //t.c=pop=O(1); but push t.c=O(n)

// class MyQueue {
// public:
//     stack<int> st;
//     stack<int> gt;
//     MyQueue() {
//     }
    
//     void push(int x) {
//         if(st.size()==0) {
//             st.push(x);
//             return;
//         }
//        else{
//          while(st.size()>0){
//             gt.push(st.top());
//             st.pop();
//         }
//         st.push(x);
//         while(gt.size()>0){
//             st.push(gt.top());
//             gt.pop();
//         }  
//        }   
//   }
    
//     int pop() {
//         int x =st.top();
//         st.pop();
//         return x;
//     }
    
//     int peek() {
//         return st.top();
//     }
    
//     bool empty() {
//         if(st.size()==0) return true;
//         else return false;
//     }
// };



//FIRST NEGATIVE IN EACH WINDOW SIZE K



// int main(){

//     int arr[] = {3,-4,-7,30,7,-9,2,1,6,-1};
//     int k = 3;
//     int n = sizeof(arr)/sizeof(arr[0]);

//     // -4 -4 -7 -9 -9 -9 0 -1 should be ans

//     vector<int> ans;
//     queue<int> q;

//     for(int i=0;i<n;i++){
//         if(arr[i] < 0) q.push(i);
//     }

//     int i = 0;

//     while(i <= n-k){

//         while(q.size() > 0 && q.front() < i){
//             q.pop();
//         }

//         if(q.size() == 0 || q.front() >= i+k){
//             ans.push_back(0);
//         }
//         else{
//             ans.push_back(arr[q.front()]);
//         }

//         i++;
//     }

//     for(int i=0;i<n;i++){
//         cout << arr[i] << " ";
//     }

//     cout << endl;

//     for(int i=0;i<ans.size();i++){
//         cout << ans[i] << " ";
//     }

// }









// 239. Sliding Window Maximum

// Hint
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
//     vector<int> maxSlidingWindow(vector<int>& nums, int k) {
//         if(k==1) return nums;
//         int n= nums.size();
//         deque<int> dq;
//         vector<int> ans;
//         for(int i =0;i<n;i++){
//             while(dq.size()>0 && nums[i]>nums[dq.back()]){
//                 dq.pop_back();
//             }
//             dq.push_back(i);
//             int j =i-k+1;
//             while(dq.front()<j) dq.pop_front();
//             if(i>=k-1) ans.push_back(nums[dq.front()]);
//         }
//         return ans;
//     }
// };





// 649. Dota2 Senate

// In the world of Dota2, there are two parties: the Radiant and the Dire.
// The Dota2 senate consists of senators coming from two parties. Now the Senate wants to decide on a change in the Dota2 game. The voting for this change is a round-based procedure. In each round, each senator can exercise one of the two rights:
// Ban one senator's right: A senator can make another senator lose all his rights in this and all the following rounds.
// Announce the victory: If this senator found the senators who still have rights to vote are all from the same party, he can announce the victory and decide on the change in the game.
// Given a string senate representing each senator's party belonging. The character 'R' and 'D' represent the Radiant party and the Dire party. Then if there are n senators, the size of the given string will be n.
// The round-based procedure starts from the first senator to the last senator in the given order. This procedure will last until the end of voting. All the senators who have lost their rights will be skipped during the procedure.

// Suppose every senator is smart enough and will play the best strategy for his own party. Predict which party will finally announce the victory and change the Dota2 game. The output should be "Radiant" or "Dire".

// Example 1:

// Input: senate = "RD"
// Output: "Radiant"
// Explanation: 
// The first senator comes from Radiant and he can just ban the next senator's right in round 1. 
// And the second senator can't exercise any rights anymore since his right has been banned. 
// And in round 2, the first senator can just announce the victory since he is the only guy in the senate who can vote.




// class Solution {
// public:
//     string predictPartyVictory(string s) {
//         queue<int> q;
//         queue<int> r;
//         queue<int> d;

//         for(int i=0;i<s.length();i++){
//             q.push(i);
//             if(s[i]=='R') r.push(i);
//             else d.push(i);
//         }
//         while(q.size()>1){
//             if(s[q.front()]=='X') q.pop();
//             else if(s[q.front()]=='R'){
//                 if(d.size()==0) return "Radiant";
//                 else{
//                     s[d.front()] = 'X';
//                     d.pop();
//                     q.push(q.front());
//                     q.pop();
//                     r.push(r.front());
//                     r.pop();
//                 }
//             }
//             else{//q.front()=='D'
//                 if(r.size()==0) return "Dire";
//                 else{
//                     s[r.front()]  = 'X';
//                     r.pop();
//                     q.push(q.front());
//                     q.pop();
//                     d.push(d.front());
//                     d.pop();
//                 }
//             }
//         }
//         if(r.size()==0) return "Dire";
//         else return "Radiant";
//     }
// };


// //littl tweak
// class Solution {
// public:
//     string predictPartyVictory(string s) {
//         queue<int> q;
//         queue<int> r;
//         queue<int> d;

//         for(int i=0;i<s.length();i++){
//             q.push(i);
//             if(s[i]=='R') r.push(i);
//             else d.push(i);
//         }
//         while(q.size()>1){
//             if(s[q.front()]=='X') q.pop();
//             else if(s[q.front()]=='R'){
//                 if(d.size()==0) return "Radiant";
//                 else{
//                     s[d.front()] = 'X';
//                     d.pop();
//                     q.push(q.front());
//                     q.pop();
//                     r.push(r.front());
//                     r.pop();
//                 }
//             }
//             else{//q.front()=='D'
//                 if(r.size()==0) return "Dire";
//                 else{
//                     s[r.front()]  = 'X';
//                     r.pop();
//                     q.push(q.front());
//                     q.pop();
//                     d.push(d.front());
//                     d.pop();
//                 }
//             }
//         }
//         if(s[q.front()]=='D') return "Dire";
//         else return "Radiant";
//     }
// };





//RECORD QUEUE(INTERLEAVE 1ST HALF WIHT 2ND HALF)
/**
 * Problem: Interleave the First Half of the Queue with the Second Half
 * * Task: 
 * Given a queue of integers of even size, rearrange the elements 
 * by interleaving the first half of the queue with the second half.
 * * Example:
 * Input:  1 2 3 4
 * Output: 1 3 2 4
 * Example 2:

Input: 11 12 13 14 15 16 17 18 19 20

Output: 11 16 12 17 13 18 14 19 15 20
 */

//  (do this using satck only) if coding round then do it with array
#include<algorithm>
void display(queue<int> &q){
       int n=q.size();
    for(int i=0;i<n;i++){
        cout<<q.front();
        q.push(q.front());
        q.pop();
    }
}
void reorder(queue<int> &q){
        stack<int> st;
        int n=q.size();
    while(q.size()>n/2){
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
    while(q.size()>n/2){
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
        q.push(q.front());
        q.pop();
    }
    while(q.size()>0){
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
}
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    display(q);
    cout<<endl;
    reorder(q);
    display(q);

}