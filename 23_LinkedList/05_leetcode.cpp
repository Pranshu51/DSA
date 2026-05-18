// 725. Split Linked List in Parts

// Given the head of a singly linked list and an integer k, split the linked list into k consecutive linked list parts.
// The length of each part should be as equal as possible: no two parts should have a size differing by more than one. This may lead to some parts being null.
// The parts should be in the order of occurrence in the input list, and parts occurring earlier should always have a size greater than or equal to parts occurring later.
// Return an array of the k parts.

// Example 1:


// class Solution {
// public:
//     vector<ListNode*> splitListToParts(ListNode* head, int k) {
//         ListNode* temp =head;
//         int n=0;
//         while(temp){
//             temp=temp->next;
//             n++;
//         }
//         vector<ListNode*> ans;
//         int size=n/k;
//         int rem = n%k;
//         temp =head;
//         while(temp!=NULL){
//             ListNode* c =new ListNode(100);
//             ListNode* tempC =c;
//             int s= size;
//             if(rem>0) s++;
//             rem--;
//             for(int i=1;i<=s;i++){
//                 tempC->next=temp;
//                 temp=temp->next;
//                 tempC=tempC->next;
//             }
//             tempC->next=NULL;
//             ans.push_back(c->next);
//         }
//         if(ans.size()<k){
//             int extra=k-ans.size();
//             for(int i=0;i<extra;i++){
//                 ans.push_back(NULL);
//             }
//         }
//         return ans;
//     }
// };









// 2058. Find the Minimum and Maximum Number of Nodes Between Critical Points

// A critical point in a linked list is defined as either a local maxima or a local minima.
// A node is a local maxima if the current node has a value strictly greater than the previous node and the next node.
// A node is a local minima if the current node has a value strictly smaller than the previous node and the next node.
// Note that a node can only be a local maxima/minima if there exists both a previous node and a next node.
// Given a linked list head, return an array of length 2 containing [minDistance, maxDistance] where minDistance is the minimum distance between any two distinct critical points and maxDistance is the maximum distance between any two distinct critical points. If there are fewer than two critical points, return [-1, -1].

// Example 1:
// Input: head = [3,1]
// Output: [-1,-1]
// Explanation: There are no critical points in [3,1].


// class Solution {
// public:
//     vector<int> nodesBetweenCriticalPoints(ListNode* head) {
//         int fidx=-1;
//         int sidx=-1;
//         int idx = 1;
//         ListNode* a =head;
//         ListNode* b =head->next;
//         ListNode* c =head->next->next;
//         while(c){
//             if(b->val < a->val && b->val < c->val || b->val > a->val && b->val > c->val){
//                 if(fidx==-1) fidx=idx;
//                 else sidx=idx;
//             }
//             a=a->next;
//             b=b->next;
//             c=c->next;
//             idx++;
//         }
//         if(sidx == -1) return {-1,-1};
//         int maxd= sidx -fidx;
//         int mind =INT_MAX;
//           fidx=-1;
//          sidx=-1;
//         idx = 1;
//          a =head;
//          b =head->next;
//         c =head->next->next;
//         while(c){
//             if(b->val < a->val && b->val < c->val || b->val > a->val && b->val > c->val){
//                 fidx=sidx;
//                 sidx=idx;
//                 if(fidx!=-1){
//                 int d = sidx-fidx;
//                 mind=min(mind,d);
//                 }
//             }
//             a=a->next;
//             b=b->next;
//             c=c->next;
//             idx++;
//         }
//         return {mind,maxd};
//     }
// };

// //Alternate method in one loop
// class Solution {
// public:
//     vector<int> nodesBetweenCriticalPoints(ListNode* head) {
//         int fidx=-1;//firstidx
//         int sidx=-1;//secondidx
//         int idx = 1;//idx
//         int stidx =-1;//startingidx
//         int eidx = -1;//endingidx
//         int mind =INT_MAX;
//         ListNode* a =head;
//         ListNode* b =head->next;
//         ListNode* c =head->next->next;
//         while(c){
//             if(b->val < a->val && b->val < c->val || b->val > a->val && b->val > c->val){
//                 //maxd
//                 if(fidx==-1) fidx=idx;
//                 else sidx=idx;
//                 //mind
//                 stidx=eidx;
//                 eidx=idx;
//                 if(sidx!=-1){
//                     int d=eidx-stidx;
//                     mind=min(mind,d);
//                 }
//             }
//             a=a->next;
//             b=b->next;
//             c=c->next;
//             idx++;
//         }
//         if(sidx == -1) return {-1,-1};
//         int maxd= sidx -fidx;
//         return {mind,maxd};
//     }
// };









// 2074. Reverse Nodes in Even Length Groups

// You are given the head of a linked list.

// The nodes in the linked list are sequentially assigned to non-empty groups whose lengths form the sequence of the natural numbers (1, 2, 3, 4, ...). The length of a group is the number of nodes assigned to it. In other words,
// The 1st node is assigned to the first group.
// The 2nd and the 3rd nodes are assigned to the second group.
// The 4th, 5th, and 6th nodes are assigned to the third group, and so on.
// Note that the length of the last group may be less than or equal to 1 + the length of the second to last group.

// Reverse the nodes in each group with an even length, and return the head of the modified linked list.

 

// Example 1:
// Input: head = [5,2,6,3,9,1,7,3,8,4]
// Output: [5,6,2,3,9,1,4,8,3,7]
// Explanation:
// - The length of the first group is 1, which is odd, hence no reversal occurs.
// - The length of the second group is 2, which is even, hence the nodes are reversed.
// - The length of the third group is 3, which is odd, hence no reversal occurs.
// - The length of the last group is 4, which is even, hence the nodes are reversed.




// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
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
//     ListNode* reverseEvenLengthGroups(ListNode* head) {
//         ListNode* temp = head;
//         int gap=1;
//         while(temp!=NULL && temp->next!=NULL){
//             int remLen=0;
//             ListNode* t =temp->next;
//             for(int i=1;i<=gap+1 && t!=NULL;i++){
//                 t=t->next;
//                 remLen++;
//             }
//             if(remLen<gap+1) gap=remLen-1;
//             if(gap%2!=0) reverseBetween(temp,2,2+gap);
//             gap++;
//             for(int i=1;temp!=NULL && i<=gap;i++){
//                 temp=temp->next;
//             }
//         }
//         return head;
//     }
// };


//Alternative methood

// class Solution {
// public:
//     // Your custom reverse function
//     ListNode* reverseList(ListNode* head) {
//         ListNode* prev = NULL;
//         ListNode* curr = head;
//         while (curr != NULL) {
//             ListNode* nextNode = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = nextNode;
//         }
//         return prev;
//     }

//     ListNode* reverseEvenLengthGroups(ListNode* head) {
//         ListNode* prevGroupEnd = new ListNode(0); // Dummy node to connect segments easily
//         prevGroupEnd->next = head;
//         ListNode* dummyHead = prevGroupEnd; // To keep track of the starting head
        
//         int ct = 1; 
//         ListNode* temp = head;

//         while (temp) {
//             ListNode* c = temp; // c points to the start of the current group
//             ListNode* tempC = c;
//             int actualLen = 0;

//             // Your loop structure: traverse up to 'ct' elements
//             for (int i = 1; i <= ct && temp; i++) {
//                 tempC = temp;
//                 temp = temp->next;
//                 actualLen++;
//             }
//             // Now, tempC is at the end of the current group, 
//             // and temp has advanced to the start of the next group.

//             // Only reverse if the actual number of nodes found is even
//             if (actualLen % 2 == 0) {
//                 tempC->next = NULL; // Isolate the current group
                
//                 ListNode* d = reverseList(c); // d is the new head of the reversed group
                
//                 prevGroupEnd->next = d; // Connect previous group's end to the new reversed head
//                 c->next = temp;         // Connect the end of reversed group (which is 'c') to the next group
//                 prevGroupEnd = c;       // Update prevGroupEnd for the next iteration
//             } else {
//                 // If odd, no reversal. Just link and shift the tracking pointer
//                 prevGroupEnd->next = c;
//                 prevGroupEnd = tempC;
//             }

//             ct++; // Increment group size limit
//         }

//         ListNode* result = dummyHead->next;
//         delete dummyHead; 
//         return result;
//     }
// };









// 138. Copy List with Random Pointer

// A linked list of length n is given such that each node contains an additional random pointer, which could point to any node in the list, or null.
// Construct a deep copy of the list. The deep copy should consist of exactly n brand new nodes, where each new node has its value set to the value of its corresponding original node. Both the next and random pointer of the new nodes should point to new nodes in the copied list such that the pointers in the original list and copied list represent the same list state. None of the pointers in the new list should point to nodes in the original list.
// For example, if there are two nodes X and Y in the original list, where X.random --> Y, then for the corresponding two nodes x and y in the copied list, x.random --> y.
// Return the head of the copied linked list.
// The linked list is represented in the input/output as a list of n nodes. Each node is represented as a pair of [val, random_index] where:
// val: an integer representing Node.val
// random_index: the index of the node (range from 0 to n-1) that the random pointer points to, or null if it does not point to any node.
// Your code will only be given the head of the original linked list.

 

// Example 1:
// Input: head = [[7,null],[13,0],[11,4],[10,2],[1,0]]
// Output: [[7,null],[13,0],[11,4],[10,2],[1,0]]


// /*
// // Definition for a Node.
// class Node {
// public:
//     int val;
//     Node* next;
//     Node* random;
// };
// */

// class Solution {
// public:
//     Node* copyRandomList(Node* head) {
//         //step-1. deep copy without random just make straight connections
//         Node* temp =head;
//         Node* dummy =new Node(0);
//         Node* tempC= dummy;
//         while(temp){
//             Node* a =new Node(temp->val);
//             tempC->next =a;
//             tempC=tempC->next;
//             temp=temp->next;
//         }
//         Node* duplicate = dummy->next;

//         //step-2 Alternate connections
//         Node* a=head;
//         Node* b=duplicate;
//         dummy = new Node(10);
//         Node* tempD= dummy;
//         while(a){
//             tempD->next=a;
//             a=a->next;
//             tempD=tempD->next;

//             tempD->next=b;
//             b=b->next;
//             tempD=tempD->next;
//         }
//         dummy=dummy->next;
//         //step-3 assigning duplicate pointers of duplicate
//         Node* t1 =dummy;
//         while(t1){
//             Node* t2=t1->next;
//             if(t1->random) t2->random=t1->random->next;
//             t1 =t1->next->next;
//         }
//         //step-4 Removing the connections(separating)
//         Node* d1 = new Node(10);
//         Node* d2 = new Node(10);
//          t1 = d1;
//         Node* t2 = d2;
//         Node* t= dummy;
//         while(t){
//             t1->next= t;
//             t=t->next;
//             t1=t1->next;

//             t2->next= t;
//             t=t->next;
//             t2=t2->next;
//         }
//         t1->next =NULL;
//         t2->next =NULL;
//         d1=d1->next;
//         d2=d2->next;
//         return d2;
//     }
// };




