// in BST->Searching -> O(logn)

// WHAT AND WHY PRIORITY QUEUE/HEAPS?
// If we want data strtucture in which we can access the maximum or minimum element in O(1) time and insertion and deletion in O(logn) time then we use heaps.
//its a kind of  stack having maximum or minimum element on the top


//T.C => 
// top() => O(1)
// push(x) => O(logn)
// pop() => O(logn)


//BASIC MAX HEAP IMPLEMENTATION
#include <iostream>
#include <queue>
using namespace std;


//cpp me by default max heap hota h
//java me by default min heap hota h
// int main(){
//     // Create a max heap
//     priority_queue<int> pq;

//     // Insert elements
//     pq.push(10);
//     pq.push(20);
//     pq.push(15);

//     // Access the maximum element
//     cout << "Top element: " << pq.top() << endl;//hum access top ko hi kar skte h aur delete bhi top ko hi kar skte h

//     // Remove the maximum element
//     pq.pop();

//     // Access the new maximum element
//     cout << "Top element after pop: " << pq.top() << endl;

//     return 0;
// } 

// Min heap implementation
// int main(){
//     //create a  min heap
//     priority_queue<int, vector<int>, greater<int>> pq;
//     pq.push(10);
//     pq.push(-6);
//     pq.push(-10);
//     cout<<pq.top()<<endl;//-10
//     pq.pop();//-10 pop
//     cout<<pq.top();//-6

// }


//Two types of HEAPS:
// 1.Max Heap(Default in C++) => In max heap, the value of each node is greater than or equal to the values of its children. The maximum element is at the root.
// 2.Min Heap => In min heap, the value of each node is less than or equal to the values of its children. The minimum element is at the root.



//Priority Queue STL

// #include <queue>

// max heap-> priority_queue<int> pq; //by default max heap hota h
// min heap-> priority_queue<int, vector<int>, greater<int>> pq; //min heap banane ke liye ye syntax use karte h



//PROBLEM IDENTIFICATION

//kth smallest,largest , top k frequent elements,closest k
// 2. at any point min, and max elements are required
//3.sorting(heap)

//QUE=> FIND THE KTH SMALLEST ELEMENT IN THE ARRAY
//Method 1: Builtin Sort the array and return the kth (arr[k-1])element. T.C => O(nlogn) S.C => O(logn) for sorting
//Method 2: selection sort T.C=> O(k*n) S.C=O(1)
//Method 3:Quick Select T.c=>O(n)
//Method 4:Using head T.c=>O(nlogk) S.C=>O(k)

//NOTE: agr kth largest dia h to maxheap , aur kth smallest dia h to min heap use karenge



// int main(){
//     int arr[] = {10,20,-4,5,18,24,1,-7,56};
//     int k=4;
//     int n = sizeof(arr)/sizeof(arr[0]);
//     priority_queue<int> pq;
//     for(int i=0;i<n;i++){
//         pq.push(arr[i]);//t.c=>O(logk)
//         if(pq.size() > k){
//             pq.pop();//t.c=>O(logk)
//         }
//     }
//     cout << "The " << k << "th smallest element is: " << pq.top() << endl;

// }//T.C => O(nlogk) S.C(Auxillary space) => O(k)else S.C= O(n)

// Que=> Find the Kth largest element in the array

// int main(){
//     int arr[] = {10,20,-4,5,18,24,1,-7,56};
//     int k=2;
//     int n = sizeof(arr)/sizeof(arr[0]);
//     priority_queue<int, vector<int>, greater<int>> pq;
//     for(int i=0;i<n;i++){
//         pq.push(arr[i]);//t.c=>O(logk)
//         if(pq.size() > k){
//             pq.pop();//t.c=>O(logk)
//         }
//     }
//     cout << "The " << k << "th largest element is: " << pq.top() << endl;

// }//T.C => O(nlogk) S.C(Auxillary space) => O(k)else S.C= O(n)



// 215. Kth Largest Element in an Array

// Given an integer array nums and an integer k, return the kth largest element in the array.

// Note that it is the kth largest element in the sorted order, not the kth distinct element.

// Can you solve it without sorting?

 

// Example 1:

// Input: nums = [3,2,1,5,6,4], k = 2
// Output: 5
// class Solution {
// public:
//     int findKthLargest(vector<int>& nums, int k) {
//         int n = nums.size();
//         priority_queue<int, vector<int>, greater<int>> pq;
//         for(int i=0;i<n;i++){
//             pq.push(nums[i]);//t.c=>O(logk)
//             if(pq.size() > k){
//                 pq.pop();//t.c=>O(logk)
//             }
//         }
//         return pq.top();//t.c=>O(n*logk) s.c =O(k)
//     }
// };


//or bad method
// class Solution {
// public:
//     int findKthLargest(vector<int>& nums, int k) {
//         sort(nums.begin(),nums.end());
//         return nums[nums.size()-k];
//     }
// };



// QUE=> Sort a nearly sorted (or K sorted) array
// k sorted ka mtlb h wo element apne se max k position pe hoga sorted array me either right or left


// int main(){
//     int arr[] = {2, 6, 3, 12, 56, 8, 10, 15};
//     priority_queue<int,vector<int>, greater<int>> pq;
//     int k =3;
//     int n = sizeof(arr)/sizeof(arr[0]);  
//     vector<int> ans;
//     for(int i=0;i<n;i++){
//         pq.push(arr[i]);
//         if(pq.size() > k){
//             ans.push_back(pq.top());
//             pq.pop();
//         }
//     }
//     while(pq.size()>0){
//         ans.push_back(pq.top());
//         pq.pop();
//     }
//     // Print the sorted array
//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<" ";
//     }
// }

//or

// int main(){
//     int arr[] = {2, 6, 3, 12, 56, 8, 10, 15};
//     priority_queue<int,vector<int>, greater<int>> pq;
//     int k =3;
//     int n = sizeof(arr)/sizeof(arr[0]);  
//     int idx=0;
//     for(int i=0;i<n;i++){
//         pq.push(arr[i]);
//         if(pq.size() > k){
//             arr[idx++] = pq.top();
//             pq.pop();
//         }
//     }
//     while(pq.size()>0){
//         arr[idx++] = pq.top();
//         pq.pop();
//     }
//     // Print the sorted array
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }



// //QUE=> TOP K FREQUENT ELEMENTS

// 347. Top K Frequent Elements

// Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.

// Example 1:

// Input: nums = [1,1,1,2,2,3], k = 2

// Output: [1,2]

// class Solution {
// public:
//     typedef pair<int,int> pi;
//     vector<int> topKFrequent(vector<int>& nums, int k) {
//         unordered_map<int,int> mp;
//         for(auto x: nums){
//             mp[x]++;
//         }
//         priority_queue<pi, vector<pi>, greater<pi>> pq;
//         for(auto x: mp){
//             pq.push({x.second,x.first});
//             if(pq.size()>k) pq.pop();
//         }
//         vector<int> ans;
//         while(pq.size()>0){
//             ans.push_back(pq.top().second);
//             pq.pop();
//         }
//         return ans;
//     }
// };