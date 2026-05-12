// 83. Remove Duplicates from Sorted List

// Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.
// Example 1:
// Input: head = [1,1,2,3,3]
// Output: [1,2,3]

// class Solution {
// public:
//     ListNode* deleteDuplicates(ListNode* head) {
//         if(head==NULL || head->next==NULL) return head;
//         ListNode* a =head;
//         ListNode* b=head;
//         while(b!=NULL){
//             while(b!=NULL && a->val==b->val){
//                 b=b->next;
//             }
//             a->next=b;
//             a=b;
//            if(b!=NULL) b=b->next;
//         }
//         return head;
//     }
// };





// 61. Rotate List

// Given the head of a linked list, rotate the list to the right by k places.
// Example 1:

// Input: head = [1,2,3,4,5], k = 2
// Output: [4,5,1,2,3]



// class Solution {
// public:
//     ListNode* rotateRight(ListNode* head, int k) {
//         if(head==NULL ||head->next==NULL || k==0) return head;
//         ListNode* tail=NULL;
//         ListNode* temp=head;
//         int len=0;
//         while(temp!=NULL){
//             if(temp->next==NULL) tail=temp;
//             len++;
//             temp=temp->next;
//         }
//         k=k%len;
//         temp=head;
//         for(int i=1;i<len-k;i++){
//             temp=temp->next;
//         }
//         tail->next=head;
//         head=temp->next;
//         temp->next=NULL;
//         return head;
//     }
    
// };





// 2326. Spiral Matrix IV

// You are given two integers m and n, which represent the dimensions of a matrix.
// You are also given the head of a linked list of integers\
// Generate an m x n matrix that contains the integers in the linked list presented in spiral order (clockwise), starting from the top-left of the matrix. If there are remaining empty spaces, fill them with -1.
// Return the generated matrix.

// Example 1:
// Input: m = 3, n = 5, head = [3,0,2,6,8,1,7,9,4,2,5,5,0]
// Output: [[3,0,2,6,8],[5,0,-1,-1,1],[5,2,4,9,7]]
// Explanation: The diagram above shows how the values are printed in the matrix.
// Note that the remaining spaces in the matrix are filled with -1.

// class Solution {
// public:
//     vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
         
//         vector<vector<int>> arr(m, vector<int>(n,-1));
   
//         int minr=0;
//         int minc=0;
//         int maxr=m-1;
//         int maxc=n-1;
//         ListNode* temp =head;
//         while(minr<=maxr && minc<=maxc){
//             //left to right
//             for(int j=minc;j<=maxc;j++){
//                 if(temp==NULL) return arr;
//                 arr[minr][j]=temp->val;
//                temp=temp->next;
//             }
//              minr++;
//              //top to bottom
//             for(int j=minr;j<=maxr;j++){
//                 if(temp==NULL) return arr;
//                 arr[j][maxc]=temp->val;
//                  temp=temp->next;

//             }
//               maxc--;
//             //right to left
//             for(int j=maxc;j>=minc;j--){
//                 if(temp==NULL) return arr;
//                 arr[maxr][j]=temp->val;
//                 temp=temp->next;
//             }
//               maxr--;
//             //botom to top
//             for(int j=maxr;j>=minr;j--){
//                 if(temp==NULL) return arr;
//                 arr[j][minc]=temp->val;
//                 temp=temp->next;
//             }
//                 minc++;
//         }
//         return arr;
//     }
// };







// 21. Merge Two Sorted Lists

// You are given the heads of two sorted linked lists list1 and list2.
// Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.
// Return the head of the merged linked list.

 
// Example 1:
// Input: list1 = [1,2,4], list2 = [1,3,4]
// Output: [1,1,2,3,4,4]

// class Solution {
// public:
//     ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
//         //SC O(m+n)
//         ListNode* tempA=a;
//         ListNode* tempB=b;
//         ListNode* c=new ListNode(100);
//         ListNode* tempC=c;
//         while(tempA!=NULL && tempB!=NULL){
//             if(tempA->val<=tempB->val){//A<B
//                 ListNode* t = new ListNode(tempA->val);
//                 tempC->next=t;
//                 tempC=t;
//                 tempA=tempA->next;
//             }else{//B<A
//                 ListNode* t = new ListNode(tempB->val);
//                 tempC->next=t;
//                 tempC=t;
//                 tempB=tempB->next;
//             }
//         }
//         if(tempA==NULL){
//             tempC->next=tempB;
//         }else{
//             tempC->next=tempA;
//         }
//         return c->next;
//     }
// };


//ALTERNATE METHOD


// class Solution {
// public:
//     ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
//         //SC O(1)
//         ListNode* tempA=a;
//         ListNode* tempB=b;
//         ListNode* c=new ListNode(100);
//         ListNode* tempC=c;
//         while(tempA!=NULL && tempB!=NULL){
//             if(tempA->val<=tempB->val){
//                 tempC->next=tempA;
//                 tempA=tempA->next;
//                 tempC=tempC->next;
//             }else{
//                 tempC->next=tempB;
//                 tempB=tempB->next;
//                 tempC=tempC->next;
//             }
//         }
//         if(tempA==NULL) tempC->next=tempB;
//         else tempC->next=tempA;
//         return c->next;
//     }
// };



// //BEST  METHOD
// class Solution {
// public:
//     ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
//         //SC O(1)
//         ListNode* c=new ListNode(100);
//         ListNode* temp=c;
//         while(a!=NULL && b!=NULL){
//             if(a->val<=b->val){
//                 temp->next=a;
//                 a=a->next;
//                 temp=temp->next;
//             }else{
//                 temp->next=b;
//                 b=b->next;
//                 temp=temp->next;
//             }
//         }
//         if(a==NULL) temp->next=b;
//         else temp->next=a;
//         return c->next;
//     }
// };





// 23. Merge k Sorted Lists(HARD)

// You are given an array of k linked-lists lists, each linked-list is sorted in ascending order.
// Merge all the linked-lists into one sorted linked-list and return it.

// Example 1:

// Input: lists = [[1,4,5],[1,3,4],[2,6]]
// Output: [1,1,2,3,4,4,5,6]
// Explanation: The linked-lists are:
// [
//   1->4->5,
//   1->3->4,
//   2->6
// ]
// merging them into one sorted linked list:
// 1->1->2->3->4->4->5->6

// class Solution {
// public:
//     ListNode* merge(ListNode* a,ListNode*b){
//         ListNode* c = new ListNode(100);
//         ListNode* temp = c;
//         while(a!=NULL && b!=NULL){
//             if(a->val<=b->val){
//                 temp->next = a;
//                 a=a->next;
//                 temp=temp->next;
//             }else{
//                 temp->next=b;
//                 b=b->next;
//                 temp=temp->next;
//             }
//         }
//         if(a==NULL) temp->next=b;
//         else temp->next=a;
//         return c->next;
//     }
//     ListNode* mergeKLists(vector<ListNode*>& arr) {
//         if(arr.size()==0) return NULL;
//         while(arr.size()>1){
//             ListNode* a= arr[arr.size()-1];
//             arr.pop_back();
//             ListNode* b= arr[arr.size()-1];
//             arr.pop_back();
//             ListNode* c= merge(a,b);
//             arr.push_back(c);
//         }
//         return arr[0];
//     }
// };//t.c=O(kn)


//better method

// class Solution {
// public:
//     ListNode* merge(ListNode* a,ListNode*b){
//         ListNode* c = new ListNode(100);
//         ListNode* temp = c;
//         while(a!=NULL && b!=NULL){
//             if(a->val<=b->val){
//                 temp->next = a;
//                 a=a->next;
//                 temp=temp->next;
//             }else{
//                 temp->next=b;
//                 b=b->next;
//                 temp=temp->next;
//             }
//         }
//         if(a==NULL) temp->next=b;
//         else temp->next=a;
//         return c->next;
//     }
//     ListNode* mergeKLists(vector<ListNode*>& arr) {//t.c nlogn before =O(Kn)
//         if(arr.size()==0) return NULL;
//         while(arr.size()>1){
//             ListNode* a= arr[0];//take two in one time before taking one by one
//             arr.erase(arr.begin()); //to pop from front
//             ListNode* b= arr[0];
//             arr.erase(arr.begin());
//             ListNode* c= merge(a,b);
//             arr.push_back(c);
//         }
//         return arr[0];
//     }
// };





// 148. Sort List

// Given the head of a linked list, return the list after sorting it in ascending order.

// Example 1:
// Input: head = [4,2,1,3]
// Output: [1,2,3,4]


// class Solution {
// public:
//     ListNode* merge(ListNode* a, ListNode* b){
//         ListNode* c =new ListNode(100);
//         ListNode* temp =c;
//         while(a!= NULL && b!=NULL){
//             if(a->val<=b->val){
//                 temp->next =a;
//                 a=a->next;
//                 temp=temp->next;
//             }else{
//                 temp->next =b;
//                 b=b->next;
//                 temp=temp->next;
//             }
//             if(a==NULL) temp->next=b;
//             else temp->next =a;
//         }
//         return c->next;
//     }
//     ListNode* sortList(ListNode* head) {
        //recursion base case
//         if(head==NULL || head->next==NULL) return head;
//         ListNode* slow=head;
//         ListNode* fast=head;
//         while(fast->next!=NULL && fast->next->next !=NULL){//TO GET LEFT MIDDLE
//             slow=slow->next;
//             fast=fast->next->next;
//         }
//         ListNode* a=head;
//         ListNode* b=slow->next;
//         slow->next=NULL;
//         a=sortList(a);
//         b=sortList(b);
//         ListNode* c = merge(a,b);
//         return c;
//     }
// };






// 86. Partition List

// Given the head of a linked list and a value x, partition it such that all nodes less than x come before nodes greater than or equal to x.
// You should preserve the original relative order of the nodes in each of the two partitions.

// Example 1:
// Input: head = [1,4,3,2,5,2], x = 3
// Output: [1,2,2,4,3,5]


// //not good little confusy
// class Solution {
// public:
//     ListNode* partition(ListNode* head, int x) {
//         ListNode* lo = new ListNode(100);
//         ListNode* hi = new ListNode(100);
//         ListNode* tl = lo;
//         ListNode* th = hi;
//         ListNode* temp = head;
//         while(temp !=NULL){
//             if(temp->val<x){
//                 tl->next =temp;
//                 temp=temp->next;
//                 tl=tl->next;
//             }else{
//                 th->next=temp;
//                 temp=temp->next;
//                 th=th->next;
//             }
//         }
//         hi=hi->next;
//         tl->next=hi;
//         th->next=NULL;
//         lo=lo->next;
//         return lo;
//     }
// };



// //good method
// class Solution {
// public:
//     ListNode* partition(ListNode* head, int x) {
//         ListNode* lo = new ListNode(100);
//         ListNode* hi = new ListNode(100);
//         ListNode* tl = lo;
//         ListNode* th = hi;
//         ListNode* temp = head;
//         while(temp !=NULL){
//             if(temp->val<x){
//                 tl->next =temp;
//                 temp=temp->next;
//                 tl=tl->next;
//             }else{
//                 th->next=temp;
//                 temp=temp->next;
//                 th=th->next;
//             }
//         }
//         tl->next=hi->next;
//         th->next=NULL;
//         return lo->next;
//     }
// };



// 328. Odd Even Linked List

// Given the head of a singly linked list, group all the nodes with odd indices together followed by the nodes with even indices, and return the reordered list.
// The first node is considered odd, and the second node is even, and so on.
// Note that the relative order inside both the even and odd groups should remain as it was in the input.
// You must solve the problem in O(1) extra space complexity and O(n) time complexity
// EXAMPLE 1:
// Input: head = [1,2,3,4,5]
// Output: [1,3,5,2,4]

// class Solution {
// public:
//     ListNode* oddEvenList(ListNode* head) {
//         ListNode* odd= new ListNode(100);    
//         ListNode* even= new ListNode(100);
//         ListNode* to = odd;//temp of odd
//         ListNode* te = even;
//         ListNode* temp = head;
//         int count =1;
//         while(temp!=NULL){
//             if(count%2 !=0){//for odd case
//                 to->next=temp;
//                 temp=temp->next;
//                 to=to->next;
//             }else{
//                 te->next=temp;
//                 temp=temp->next;
//                 te=te->next;
//             }
//             count++;
//         } 
//         to->next=even->next;
//         te->next =NULL;
//         return odd->next;   
//     }
// };


// //BETTER METHOD
// class Solution {
// public:
//     ListNode* oddEvenList(ListNode* head) {
//         if(head==NULL || head->next==NULL ) return head;
//        ListNode* odd =head;
//        ListNode* even =odd->next;
//        ListNode* evenHead= even;
//        // Use the even pointers to drive the loop 
//         // because 'even' is always ahead of 'odd'
//        while(even!=NULL && even->next!=NULL){
//         // Connect odd nodes
//         odd->next =even->next;
//         odd=odd->next;
//         // Connect even nodes
//         even->next=odd->next;
//         even=even->next;
//        } 
//        odd->next=evenHead;
//        return head;  
//     }
// };




// 206. Reverse Linked List

// Given the head of a singly linked list, reverse the list, and return the reversed list. 

// Example 1:

// Input: head = [1,2,3,4,5]
// Output: [5,4,3,2,1]

// //very bad method NEVER USE THIS T.C= O(n^2) S.C=O(1)

// class Solution {
// public:
// ListNode* getNodeAt(ListNode* head,int idx){
//     ListNode* temp =head;
//     for(int i=1;i<=idx;i++){
//         temp=temp->next;
//     }
//     return temp;
// }
//     ListNode* reverseList(ListNode* head) {
//         int n=0;
//         ListNode* temp =head;
//         while(temp){//temp!=NULL
//             temp=temp->next;
//             n++;
//         }
//         int i=0;
//         int j=n-1;
//         while(i<j){
//             ListNode* left = getNodeAt(head,i);
//             ListNode* right = getNodeAt(head,j);
//             int t = left->val;
//             left->val=right->val;
//             right->val=t;
//             i++;
//             j--;
//         }
//         return head;
//     }
// };


// //ITERATIVE METHOD T.C=O(n) S.C=O(1)

// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         ListNode* prev = NULL;
//         ListNode* Next = NULL;
//         ListNode* curr = head;
//         //or  ListNode* prev = NULL, *Next=head, *curr=head;
//         while(curr){
//             Next=curr->next;
//             curr->next=prev;
//             prev =curr;
//             curr=Next;
//         }
//         return prev;
//     }
// };


// //RECURSIVE METHOD T.C=O(n) S.C=O(n)


// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         if(head==NULL || head->next==NULL) return head;
//         ListNode* newHead = reverseList(head->next);
//         head->next->next=head;
//         head->next=NULL;
//         return newHead;
//     }
// };





// 234. Palindrome Linked List

// Given the head of a singly linked list, return true if it is a palindrome or false otherwise.


// Example 1:
// Input: head = [1,2,2,1]
// Output: true


// //very bad method T.C=O(n) S.C=O(n)

// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         ListNode* prev = NULL, *Next=head, *curr=head;
        
//         while(curr){
//             Next=curr->next;
//             curr->next=prev;
//             prev =curr;
//             curr=Next;
//         }
//         return prev;
//     }     
//     bool isPalindrome(ListNode* head) {
//         ListNode* c= new ListNode(10);
//         ListNode* temp =head;
//         ListNode* tc= c;
//         //DEEP COPY
//         while(temp!=NULL){
//             ListNode* node = new ListNode(temp->val);
//             tc->next = node;
//             temp=temp->next;
//             tc=tc->next;
//         }
//         c=c->next;
//         c=reverseList(c);
//         ListNode* a =head;
//         ListNode* b =c;
//         while(a!=NULL){
//             if(a->val!=b->val) return false;
//             a= a->next;
//             b=b->next;
//         }
//         return true;
//     }
// };




// //BEST METHOD T.C=O(n) S.C=O(1)

// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         ListNode* prev = NULL, *Next=head, *curr=head;
        
//         while(curr){
//             Next=curr->next;
//             curr->next=prev;
//             prev =curr;
//             curr=Next;
//         }
//         return prev;
//     }     
//     bool isPalindrome(ListNode* head) {
//         ListNode* slow= head;
//         ListNode* fast= head;
//         //findind left middle/middle
//       while(fast->next!=NULL && fast->next->next !=NULL){
//         slow=slow->next;
//         fast=fast->next->next;
//       }
//       ListNode* newHead = reverseList(slow->next);
//       ListNode* a =head;
//       ListNode* b =newHead;
//       while(b){
//         if(a->val!=b->val) return false;
//         a=a->next;
//         b=b->next;
//       }
//       return true;
//     }
// };



// 92. Reverse Linked List II

// Given the head of a singly linked list and two integers left and right where left <= right, reverse the nodes of the list from position left to position right, and return the reversed list.

// Example 1:

// Input: head = [1,2,3,4,5], left = 2, right = 4
// Output: [1,4,3,2,5]



// class Solution {
// public:
//  ListNode* reverseList(ListNode* head) {
//         if(head==NULL || head->next==NULL) return head;
//         ListNode* newHead = reverseList(head->next);
//         head->next->next=head;
//         head->next=NULL;
//         return newHead;
//     }
//     ListNode* reverseBetween(ListNode* head, int left, int right) {
//         if(left==right) return head;
//         ListNode* a= NULL;
//         ListNode* b= NULL;
//         ListNode* c= NULL;
//         ListNode* d= NULL;
//         ListNode* temp= head;
//         int n=1;
//         while(temp){
//             if(n==left-1) a=temp;
//             if(n==left) b=temp;
//             if(n==right) c=temp;
//             if(n==right+1) d=temp;
//             temp=temp->next;
//             n++;
//         }
//         if(a) a->next=NULL;
//         c->next=NULL;
//         c=reverseList(b);
//         if(a){
//         a->next=c;
//         b->next=d;
//         return head;
//         }else{
//             b->next= d;
//             return c;
//         }
//     }
// };








// 143. Reorder List

// You are given the head of a singly linked-list. The list can be represented as:

// L0 → L1 → … → Ln - 1 → Ln
// Reorder the list to be on the following form:

// L0 → Ln → L1 → Ln - 1 → L2 → Ln - 2 → …
// You may not modify the values in the list's nodes. Only nodes themselves may be changed.

// Example 1:
// Input: head = [1,2,3,4]
// Output: [1,4,2,3]




// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         ListNode* prev = NULL, *Next=head, *curr=head;
        
//         while(curr){
//             Next=curr->next;
//             curr->next=prev;
//             prev =curr;
//             curr=Next;
//         }
//         return prev;
//     }   
//     void reorderList(ListNode* head) {
//         ListNode* slow= head;
//         ListNode* fast= head;
//         //findind left middle/middle
//       while(fast->next!=NULL && fast->next->next !=NULL){
//         slow=slow->next;
//         fast=fast->next->next;
//       }
//       ListNode* b = reverseList(slow->next);
//       ListNode* a =head;
//       slow->next=NULL;
//       ListNode* c = new ListNode(0);
//       ListNode* tempC = c;
//       ListNode* tempA = a;
//       ListNode* tempB = b;
//         while(tempA && tempB){
//             tempC->next=tempA;
//             tempC=tempC->next;    
//             tempA=tempA->next; 

//             tempC->next=tempB;
//             tempC=tempC->next;    
//             tempB=tempB->next;    
//         }
//         tempC->next=tempA;
//         head = c->next;
//     }
// };