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


