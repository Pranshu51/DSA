
// 237. Delete Node in a Linked List

// There is a singly-linked list head and we want to delete a node node in it.
// You are given the node to be deleted node. You will not be given access to the first node of head.
// All the values of the linked list are unique, and it is guaranteed that the given node node is not the last node in the linked list.
// Delete the given node. Note that by deleting the node, we do not mean removing it from memory. We mean:\
// The value of the given node should not exist in the linked list.
// The number of nodes in the linked list should decrease by one.
// All the values before node should be in the same order.
// All the values after node should be in the same order.
// Custom testing:

// For the input, you should provide the entire linked list head and the node to be given node. node should not be the last node of the list and should be an actual node in the list.
// We will build the linked list and pass the node to your function.
// The output will be the entire list after calling your function.
// Input: head = [4,5,1,9], node = 5
// Output: [4,1,9]
// Explanation: You are given the second node with value 5, the linked list should become 4 -> 1 -> 9 after calling your function.          

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// class Solution {
// public:
//     void deleteNode(ListNode* node) {//you can replace node=target
//         node->val = node->next->val;
//         node->next =node->next->next;
//     }
// };



// 876. Middle of the Linked List

// Given the head of a singly linked list, return the middle node of the linked list.

// If there are two middle nodes, return the second middle node.
// Input: head = [1,2,3,4,5]
// Output: [3,4,5]
// Explanation: The middle node of the list is node 3.


// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         int size=0;
//         ListNode* temp =head;
//         while(temp!=NULL){
//             temp=temp->next;
//             size++;
//         }
//         int midIdx = size/2;
//         ListNode* mid = head;
//         for(int i=1;i<=midIdx;i++){
//             mid=mid->next;
//         }
//         return mid;

//     }
// };

//INTERVIEW APPROACH FOR THE QUESITON IN 1 PASS
//YOU CAN NOT WRITE fast->next!=NULL first because when it will be on end(NULL) its next is nothing
//FIRST AWAYS WRITE THE SAME NODE THEN ITS NEXT

// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         ListNode* slow = head;
//         ListNode* fast  = head;
//         while(fast!=NULL && fast->next!=NULL){
//             slow=slow->next;
//             fast=fast->next->next;
//         }
//         return slow;
//     }
// };








// 19. Remove Nth Node From End of List

// Given the head of a linked list, remove the nth node from the end of the list and return its head.
// Example 1:
// Input: head = [1,2,3,4,5], n = 2
// Output: [1,2,3,5]
// Example 2:

// Input: head = [1], n = 1
// Output: []
// Example 3:


//NOT SO GOOD
// class Solution {
// public:
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         ListNode* temp =head;
//         int len=0;
//         while(temp !=NULL){
//             len++;
//             temp=temp->next;
//         }
//         if(len==n){
//             head=head->next;
//             return head;
//         }
//         //nth from end = len-n+1 from the start
//         int m=len-n+1;
//         int idx=m-1;//the idx of node to be deleted
//         temp=head;
//         for(int i=1;i<=idx-1;i++){
//             temp=temp->next;
//         }
//         temp->next=temp->next->next;
//         return head;
//     }
// };


//ONE PASS METHOD

// class Solution {//t.c=O9n) s.c=O(1)
// public:
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         ListNode* slow =head;
//         ListNode* fast =head;
//         for(int i=1;i<=n+1;i++){
//             if(fast==NULL) return head->next;
//             fast=fast->next;
//         }
//         while(fast!=NULL){
//             slow=slow->next;
//             fast=fast->next;
//         }      
//  slow->next=slow->next->next;
//         return head;
//     }
// };








// 160. Intersection of Two Linked Lists

// Given the heads of two singly linked-lists headA and headB, return the node at which the two lists intersect. If the two linked lists have no intersection at all, return null.

// For example, the following two linked lists begin to intersect at node c1

// Input: intersectVal = 8, listA = [4,1,8,4,5], listB = [5,6,1,8,4,5], skipA = 2, skipB = 3
// Output: Intersected at '8'
// Explanation: The intersected node's value is 8 (note that this must not be 0 if the two lists intersect).
// From the head of A, it reads as [4,1,8,4,5]. From the head of B, it reads as [5,6,1,8,4,5]. There are 2 nodes before the intersected node in A; There are 3 nodes before the intersected node in B.
// - Note that the intersected node's value is not 1 because the nodes with value 1 in A and B (2nd node in A and 3rd node in B) are different node references. In other words, they point to two different locations in memory, while the nodes with value 8 in A and B (3rd node in A and 4th node in B) point to the same location in memory.

// class Solution {
// public:
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//          ListNode * tempA = headA;
//         ListNode * tempB = headB;
//         int lenA=0;
//         while(tempA!=NULL) {
//             lenA++;
//             tempA=tempA->next;
//          }
      
//         int lenB=0;
//         while(tempB!=NULL){
//             lenB++;
//             tempB=tempB->next;
//         }
//         tempA=headA;
//         tempB=headB;
//         if(lenA>lenB){
//             int diff=lenA-lenB;
//             for(int i=1;i<=diff;i++){
//                 tempA=tempA->next;
//             }
//         }
//         else{
//             int diff=lenB-lenA;
//             for(int i=1;i<=diff;i++){
//                 tempB=tempB->next;
//             }
//         }
//         while(tempA!=tempB){
//             tempA=tempA->next;
//             tempB=tempB->next;
//         }
//         return tempA;
//     }
// };

//good  method
// class Solution {//t.c=O(n) s.c=O(1)
// public:
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//         ListNode* ptrA=headA;
//         ListNode* ptrB=headB;
//         while(ptrA!=ptrB){
//             if(ptrA==NULL) ptrA=headB;
//             else ptrA=ptrA->next;

//             if(ptrB==NULL) ptrB=headA;
//             else ptrB=ptrB->next;
//         }
//         return ptrA;
//     }
// };

//another method slight diff

// class Solution {
// public:
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//          ListNode * tempA = headA;
//         ListNode * tempB = headB;
//         int lenA=0;
//         while(tempA!=NULL) {
//             lenA++;
//             tempA=tempA->next;
//          }
      
//         int lenB=0;
//         while(tempB!=NULL){
//             lenB++;
//             tempB=tempB->next;
//         }
//         tempA=headA;
//         tempB=headB;
//         if(lenA>lenB){
//             int diff=lenA-lenB;
//             for(int i=1;i<=diff;i++){
//                 tempA=tempA->next;
//             }
//             while(tempA!=tempB){
//             tempA=tempA->next;
//             tempB=tempB->next;
//         }
//         return tempA;
//         }
//         else{
//             int diff=lenB-lenA;
//             for(int i=1;i<=diff;i++){
//                 tempB=tempB->next;
//             }
//             while(tempA!=tempB){
//             tempA=tempA->next;
//             tempB=tempB->next;
//         }
//         return tempA;
//         }
        
//     }
// };





// Floyd’s Cycle Detection Algorithm (slow & fast pointers).
// 141. Linked List Cycle

// Given head, the head of a linked list, determine if the linked list has a cycle in it.
// There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. 
// Internally, pos is used to denote the index of the node that tail's next pointer is connected to. Note that pos is not passed as a parameter.
// Return true if there is a cycle in the linked list. Otherwise, return false.

//  Input: head = [3,2,0,-4], pos = 1
// Output: true
// Explanation: There is a cycle in the linked list, where the tail connects to the 1st node (0-indexed).

// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         ListNode * slow=head;
//         ListNode * fast=head;
//         while(fast!=NULL && fast->next !=NULL){
//             slow=slow->next;
//             fast=fast->next->next;
//             if(slow==fast) return true;
//         }
//         return false;
//     }
// };







// 142. Linked List Cycle II
//NOTE: IT CAN WORK FOR IF FAST WILL MOVE FROM 3 POINTER ALSO INSTEAD OF 2 POINTERS etc..

// Given the head of a linked list, return the node where the cycle begins. If there is no cycle, return null.

// There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to (0-indexed). It is -1 if there is no cycle. Note that pos is not passed as a parameter.

// Do not modify the linked list.
// Example 1:

// Input: head = [3,2,0,-4], pos = 1
// Output: tail connects to node index 1
// Explanation: There is a cycle in the linked list, where tail connects to the second node.

// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) {
//          ListNode * slow=head;
//         ListNode * fast=head;
//         bool flag=false;
//         while(fast!=NULL && fast->next !=NULL){
//             slow=slow->next;
//             fast=fast->next->next;
//             if(slow==fast) {
//                 flag=true;
//                 break;
//             }
//         }
//         if(flag==false) return NULL;
//         else{
//             ListNode* temp =head;
//             while(temp!=slow){
//                  slow=slow->next;
//                 temp=temp->next;
//             }
//         }
//         return slow;//return temp;
//     }
// };







