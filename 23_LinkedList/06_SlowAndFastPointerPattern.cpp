// 202. Happy Number

// Write an algorithm to determine if a number n is happy.

// A happy number is a number defined by the following process:

// Starting with any positive integer, replace the number by the sum of the squares of its digits.
// Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
// Those numbers for which this process ends in 1 are happy.
// Return true if n is a happy number, and false if not.

 

// Example 1:

// Input: n = 19
// Output: true
// Explanation:
// 12 + 92 = 82
// 82 + 22 = 68
// 62 + 82 = 100
// 12 + 02 + 02 = 1




// class Solution {
// public:
//     int square(int n){
//         int ans=0;
//         while(n>0){
//         int x= n%10;
//         ans+=x*x;
//         n=n/10;
//         }
//         return ans;
//     }
//     bool isHappy(int n) {
//         int slow = square(n);
//         int fast = square(square(n));
//         while(slow!=fast){
//             slow = square(slow);
//             fast = square(square(fast));
//         }
//         return slow==1;
//     }
// };




// 142. Linked List Cycle II

// Given the head of a linked list, return the node where the cycle begins. If there is no cycle, return null.
// There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to (0-indexed). It is -1 if there is no cycle. Note that pos is not passed as a parameter.
// Do not modify the linked list.

// Example 1
// Input: head = [3,2,0,-4], pos = 1
// Output: tail connects to node index 1
// Explanation: There is a cycle in the linked list, where tail connects to the second node.

// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) {
//         if(head==NULL || head->next==NULL) return NULL;
//         unordered_set<ListNode*> st;
//         ListNode* fast = head;
//         while(fast!=NULL){
//             if(st.find(fast)!= st.end()) return fast;
//             else {
//                 st.insert(fast);
//                 fast=fast->next;
//             }
//         }
//         return NULL;
//     }
// };