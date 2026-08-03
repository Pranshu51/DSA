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
//rearranging the heap to maintain the min-heap property
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



//MAX HEAP IMPLEMENTATION


// class MaxHeap {
// public:
//     int arr[100]; // array to store heap elements

//     int idx;

//     MaxHeap() {
//         idx = 1; // initialize index to 1 for 1-based indexing
//     }

//     int top() {
//         return arr[1]; // return the root element of the heap
//     }

//     void push(int x) {
//         arr[idx] = x; // insert new element at the end

//         int i = idx;
//         idx++;

//         // Heapify Up
//         while (i != 1) {
//             int parent = i / 2;

//             // For Max Heap, parent should be greater than child
//             if (arr[parent] < arr[i]) {
//                 swap(arr[parent], arr[i]);
//                 i = parent;
//             }
//             else {
//                 break;
//             }
//         }
//     }

//     int size() {
//         return idx - 1; // return number of elements
//     }

//     void pop() {
//         idx--;

//         // Replace root with last element
//         arr[1] = arr[idx];

//         int i = 1;

//         // Heapify Down
//         while (true) {
//             int left = 2 * i;
//             int right = 2 * i + 1;

//             // No left child
//             if (left > idx - 1)
//                 break;

//             // Only left child exists
//             if (right > idx - 1) {
//                 if (arr[left] > arr[i]) {
//                     swap(arr[left], arr[i]);
//                     i = left;
//                 }
//                 break;
//             }

//             // Both children exist
//             // Choose the larger child
//             if (arr[left] > arr[right]) {

//                 if (arr[left] > arr[i]) {
//                     swap(arr[left], arr[i]);
//                     i = left;
//                 }
//                 else {
//                     break;
//                 }

//             }
//             else {

//                 if (arr[right] > arr[i]) {
//                     swap(arr[right], arr[i]);
//                     i = right;
//                 }
//                 else {
//                     break;
//                 }
//             }
//         }
//     }

//     void display() {
//         for (int i = 1; i < idx; i++) {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }
// };

// int main() {

//     MaxHeap pq;

//     pq.push(5);
//     pq.push(3);
//     pq.push(7);

//     cout << "Size of the heap: " << pq.size() << endl;

//     cout << "Top element of the heap: " << pq.top() << endl;

//     pq.display();

//     pq.pop();

//     cout << "Size of the heap after pop: " << pq.size() << endl;

//     pq.display();

//     return 0;
// }



//HEAP SORT
// #include <iostream>
// #include <algorithm>
// using namespace std;

// void heapify(int arr[], int n, int i) {

//     int largest = i;
//     int left = 2 * i + 1;
//     int right = 2 * i + 2;

//     // Check left child
//     if (left < n && arr[left] > arr[largest]) {
//         largest = left;
//     }

//     // Check right child
//     if (right < n && arr[right] > arr[largest]) {
//         largest = right;
//     }

//     // If largest is not the root
//     if (largest != i) {
//         swap(arr[i], arr[largest]);

//         // Heapify the affected subtree
//         heapify(arr, n, largest);
//     }
// }

// void heapSort(int arr[], int n) {

//     // Step 1: Build Max Heap
//     for (int i = n / 2 - 1; i >= 0; i--) {
//         heapify(arr, n, i);
//     }

//     // Step 2: Move maximum element to the end
//     for (int i = n - 1; i > 0; i--) {

//         swap(arr[0], arr[i]);

//         // Heapify remaining elements
//         heapify(arr, i, 0);
//     }
// }

// int main() {

//     int arr[] = {5, 3, 7, 2, 8, 1};

//     int n = sizeof(arr) / sizeof(arr[0]);

//     heapSort(arr, n);

//     cout << "Sorted array: ";

//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }



//MIN HEAP SORT

// #include <iostream>
// #include <algorithm>
// using namespace std;

// void heapify(int arr[], int n, int i) {

//     int smallest = i;

//     int left = 2 * i + 1;
//     int right = 2 * i + 2;

//     // Check left child
//     if (left < n && arr[left] < arr[smallest]) {
//         smallest = left;
//     }

//     // Check right child
//     if (right < n && arr[right] < arr[smallest]) {
//         smallest = right;
//     }

//     // If smallest is not the root
//     if (smallest != i) {

//         swap(arr[i], arr[smallest]);

//         // Heapify the affected subtree
//         heapify(arr, n, smallest);
//     }
// }

// void heapSort(int arr[], int n) {

//     // Step 1: Build Min Heap
//     for (int i = n / 2 - 1; i >= 0; i--) {
//         heapify(arr, n, i);
//     }

//     // Step 2: Move minimum element to the end
//     for (int i = n - 1; i > 0; i--) {

//         swap(arr[0], arr[i]);

//         // Heapify remaining elements
//         heapify(arr, i, 0);
//     }
// }

// int main() {

//     int arr[] = {5, 3, 7, 2, 8, 1};

//     int n = sizeof(arr) / sizeof(arr[0]);

//     heapSort(arr, n);

//     cout << "Sorted array: ";

//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }


// 1. Max Heap using priority_queue
// #include <iostream>
// #include <queue>
// using namespace std;

// int main() {

//     priority_queue<int> pq;

//     pq.push(5);
//     pq.push(3);
//     pq.push(7);
//     pq.push(2);
//     pq.push(8);

//     cout << "Top element: " << pq.top() << endl;

//     cout << "Elements: ";

//     while (!pq.empty()) {
//         cout << pq.top() << " ";
//         pq.pop();
//     }

//     return 0;
// }

// 2. Min Heap using priority_queue

// #include <iostream>
// #include <queue>
// #include <vector>
// #include <functional>
// using namespace std;

// int main() {

//     priority_queue<int, vector<int>, greater<int>> pq;

//     pq.push(5);
//     pq.push(3);
//     pq.push(7);
//     pq.push(2);
//     pq.push(8);

//     cout << "Top element: " << pq.top() << endl;

//     cout << "Elements: ";

//     while (!pq.empty()) {
//         cout << pq.top() << " ";
//         pq.pop();
//     }

//     return 0;
// }



// HEAPIFY ALGORITHM
//For even : leaf nodes are n/2
//For odd : leaf nodes are n/2+1


// void print(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }


// void heapify(int arr[],int n,int i){
//    //same pop rearrangement
//         while(true){
//             int left = 2*i;
//             int right = 2*i + 1;
//             if(left>=n) break; // if left child index is out of bounds, break
//             if(right>=n){
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
// }

// int main(){
//     int arr[] = {-1,10,2,14,11,1,4};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     print(arr,n);
//     for(int i=n/2;i>0;i--){
//         heapify(arr,n,i);
//     }
//     print(arr,n);
// }


//Convert BST to Max Heap

// #include <iostream>
// #include <vector>
// #include <queue>
// #include <algorithm>
// using namespace std;

// class Node {
// public:
//     int val;
//     Node* left;
//     Node* right;

//     Node(int val) {
//         this->val = val;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };

// void print(const vector<int>& arr) {
//     for (int val : arr) {
//         cout << val << " ";
//     }
//     cout << endl;
// }

// void inOrder(Node* root, vector<int>& arr) {
//     if (root == NULL) {
//         return;
//     }
//     inOrder(root->right, arr);
//     arr.push_back(root->val);
//     inOrder(root->left, arr);
// }

// void preOrder(Node* root, const vector<int>& arr, int& i) {
//     if (root == NULL) {
//         return;
//     }
//     root->val = arr[i++];
//     preOrder(root->left, arr, i);
//     preOrder(root->right, arr, i);
// }

// void levelOrder(Node* root) {
//     if (root == NULL) {
//         return;
//     }
//     vector<Node*> queue;
//     queue.push_back(root);
//     while (!queue.empty()) {
//         Node* current = queue.front();
//         queue.erase(queue.begin());
//         cout << current->val << " ";
//         if (current->left != NULL) {
//             queue.push_back(current->left);
//         }
//         if (current->right != NULL) {
//             queue.push_back(current->right);
//         }
//     }
//     cout << endl;
// }

// int main() {
//     Node* a = new Node(10);
//     Node* b = new Node(5);
//     Node* c = new Node(16);
//     Node* d = new Node(1);
//     Node* e = new Node(8);
//     Node* f = new Node(12);
//     Node* g = new Node(20);

//     a->left = b; 
//     a->right = c;
//     b->left = d; 
//     b->right = e;
//     c->left = f; 
//     c->right = g;
//     vector<int> arr;
//     inOrder(a,arr);
//     levelOrder(a);
//     int i =0;
//     preOrder(a,arr,i);
//     levelOrder(a);
//     return 0;
// }



// Check if given Binary Tree is MaxHeap or not
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};


int sizeOfTree(Node* root) {
    if (root == NULL) {
        return 0;
    }
    return 1 + sizeOfTree(root->left) + sizeOfTree(root->right);
}

bool isCBT(Node* root) {
    int size = sizeOfTree(root);
    int count = 0;
    if (root == NULL) {
        return true;
    }
    queue<Node*> queue;
    queue.push(root);
    while (count < size) {
        Node* current = queue.front();
        queue.pop();
        count++;
        if (current != NULL) {
            queue.push(current->left);
        }
        if (current!= NULL) {
            queue.push(current->right);
        }
    }
    if(queue.size()>0){
        Node*temp = queue.front();
        if(temp!=NULL) return false;
        queue.pop();
    }
    return true;
}


bool isMaxHeap(Node* root) {
    if (root == NULL) {
        return true;
    }
    if (root->left != NULL && root->val < root->left->val) {
        return false;
    }
    if (root->right != NULL && root->val < root->right->val) {
        return false;
    }
    return isMaxHeap(root->left) && isMaxHeap(root->right);
}


int main() {
    Node* a = new Node(20);
    Node* b = new Node(15);
    Node* c = new Node(10);
    Node* d = new Node(8);
    Node* e = new Node(11);
    Node* f = new Node(6);
    Node* g = NULL;

    a->left = b; 
    a->right = c;
    b->left = d; 
    b->right = e;
    c->left = f; 
    c->right = g;
    

    if(isCBT(a) && isMaxHeap(a)){
        cout<<"Yes it is a Max Heap"<<endl;
    }else{
        cout<<"No it is not a Max Heap"<<endl;
    }   
}




