// Heaps should be filled in complete binary tree fashion. All levels of the tree must be fully filled and if the last level is not complete, it should be filled from left to right.
// How to make heap:

// if its in Heap you should follow the below properties:
// 1. Complete Binary Tree: A heap is a complete binary tree, meaning all levels of the tree are fully filled except possibly for the last level, which is filled from left to right.
// 2. Heap Property: In a max heap, for any given node, the value of that node is greater than or equal to the values of its children. In a min heap, the value of the node is less than or equal to the values of its children.

//IMPLEMENTING A MINHEAP BY ARRAY REPRESENTATION
//1.we will never fill arr[0] because we will use 1 based indexing for easy calculation of parent and child nodes.
//for a node at index i, its parent node will be at index i/2, left child will be at index 2*i and right child will be at index 2*i + 1.
//every time inserting a new element in the heap, we will insert it at the end of the array and then perform "heapify up" operation to maintain the heap property.

#include <iostream>
#include <algorithm>
using namespace std;

// class MinHeap {
// public:    
//     int arr[100]; // array to store heap elements

//     int idx;
//     MinHeap(){
//         idx = 1; // initialize index to 1 for 1-based indexing
//     }
//     int top() {
//         return arr[1]; // return the root element of the heap
//     }
//     void push(int x){
//         arr[idx] = x;
//         int i = idx;
//         idx++;
//         while(i!=1){
//             int parent =i/2;
//             if(arr[parent] > arr[i]){
//                 swap(arr[parent],arr[i]);
//                 i = parent;
//             }
//             else break;
//         }
//     }

//     int size(){
//         return idx-1; // return the number of elements in the heap
//     }

//     void pop(){
//         idx--;
//         arr[1]=arr[idx]; // replace root with last element
//         int i = 1;
//         while(true){
//             int left = 2*i;
//             int right = 2*i + 1;
//             if(left>idx-1) break; // if left child index is out of bounds, break
//             if(right>idx-1){
//                 if(arr[left]<arr[i]){
//                     swap(arr[left],arr[i]);
//                     i = left;
//                 }
//                 break;
//             }
//             if(arr[left]<arr[right] ){
//                 if(arr[left]<arr[i]){
//                 swap(arr[left],arr[i]);
//                 i = left;
//                 }else break;
//             }else{
//                 if(arr[right]<arr[i]){
//                     swap(arr[right],arr[i]);
//                     i = right;
//                 }else break;
//             }
//         }
//     }

//     void display(){
//         for(int i=1;i<idx;i++){
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }

// };

// int main(){
//     MinHeap pq ;
//     pq.push(5);
//     pq.push(3);
//     pq.push(7);
//     cout << "Size of the heap: " << pq.size() << endl;
//     cout << "Top element of the heap: " << pq.top() << endl;
//     pq.display();
//     pq.pop();
//     cout << "Size of the heap after pop: " << pq.size() << endl;
//     pq.display();

// }


