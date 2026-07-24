
// 2094. Finding 3-Digit Even Numbers

// You are given an integer array digits, where each element is a digit. The array may contain duplicates.

// You need to find all the unique integers that follow the given requirements:

// The integer consists of the concatenation of three elements from digits in any arbitrary order.
// The integer does not have leading zeros.
// The integer is even.
// For example, if the given digits were [1, 2, 3], integers 132 and 312 follow the requirements.

// Return a sorted array of the unique integers.

// Example 1:

// Input: digits = [2,1,3,0]
// Output: [102,120,130,132,210,230,302,310,312,320]
// Explanation: All the possible integers that follow the requirements are in the output array. 
// Notice that there are no odd integers or integers with leading zeros.

// class Solution {
// public:
//     vector<int> findEvenNumbers(vector<int>& digits) {
//         int n = digits.size();
//         vector<int> ans;
//         unordered_map<int,int> m;
//         for(int i=0;i<n;i++){
//             m[digits[i]]++;
//         }
//         for(int i=100;i<=999;i+=2){
//             int x = i;
//             int a = x%10;//ones place digit
//             x/=10;
//             int b = x%10;//tens place digit
//             x/=10;
//             int c = x;
//             if(m.find(a)!=m.end()){
//                 m[a]--;
//                 if(m[a]==0) m.erase(a);
//                 if(m.find(b)!=m.end()){
//                     m[b]--;
//                     if(m[b]==0) m.erase(b);
//                     if(m.find(c)!=m.end())
//                         ans.push_back(i);
//                     m[b]++;
//                 }
//                 m[a]++;
//             }
//         }
//         return ans;
//     }
// };



// 1814. Count Nice Pairs in an Array

// You are given an array nums that consists of non-negative integers. Let us define rev(x) as the reverse of the non-negative integer x. For example, rev(123) = 321, and rev(120) = 21. A pair of indices (i, j) is nice if it satisfies all of the following conditions:

// 0 <= i < j < nums.length
// nums[i] + rev(nums[j]) == nums[j] + rev(nums[i])
// Return the number of nice pairs of indices. Since that number can be too large, return it modulo 109 + 7.

// Example 1:

// Input: nums = [42,11,1,97]
// Output: 2
// Explanation: The two pairs are:
//  - (0,3) : 42 + rev(97) = 42 + 79 = 121, 97 + rev(42) = 97 + 24 = 121.
//  - (1,2) : 11 + rev(1) = 11 + 1 = 12, 1 + rev(11) = 1 + 11 = 12.


//  class Solution {
// public:
//     int rev(int n){
//         int r=0;
//         while(n>0){
//             r *=10;
//             r += n%10;
//             n /=10;
//         }
//         return r;
//     }
//     int countNicePairs(vector<int>& nums) {
//         int count=0;
//         int n = nums.size();
//         for(int i =0;i<n;i++){
//             nums[i]=nums[i]-rev(nums[i]);
//         }
//         unordered_map<int,int> m;
//         for(int i =0;i<n;i++){
//            if(m.find(nums[i])!=m.end()){
//             count = count%1000000007;
//             count += m[nums[i]];
//             m[nums[i]]++;
//            }else  m[nums[i]]++;
//         }
//         return count%1000000007;
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


// class Solution {
// public:
//     Node* copyRandomList(Node* head) {
//         // if (!head) return nullptr;

//         // Step 1 -> create the deep copy without random pointer
//         Node* dummy = new Node(0);
//         Node* tempC = dummy;
//         Node* temp = head;
//         while (temp) {
//             Node* a = new Node(temp->val);
//             tempC->next = a;
//             tempC = tempC->next;
//             temp = temp->next;
//         }

//         Node* b = dummy->next;
//         Node* a = head;

//         // Step 2 : Make a map of <original,duplicate>
//         unordered_map<Node*, Node*> m;
//         Node* tempa = a;
//         Node* tempb = b;
//         while (tempa != NULL) {
//             m[tempa] = tempb;
//             tempa = tempa->next;
//             tempb = tempb->next;
//         }

//         for (auto x : m) {
//             Node* o = x.first;
//             Node* d = x.second;
//             if (o->random != NULL) { // kaam
//                 Node* oRandom = o->random;
//                 Node* dRandom = m[o->random];
//                 d->random = dRandom;
//             }
//         }

//         return b;
//     }
// };

// //or


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