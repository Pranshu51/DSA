//QUEUE INTRODUCITON

//FIFO - FIRST IN FIRST OUT
//Pop is done from the front and push is done from the back/rear

//stack vs queue
//STACK - LIFO - LAST IN FIRST OUT
// st-> push and pop is done from the same end (top)
//QUEUE - FIFO - FIRST IN FIRST OUT
// q-> push is done from the rear and pop is done from the front
//st->


#include<iostream>
#include<queue>
#include<stack>
using namespace std;

// void reverseStack(queue<int>& q){
//     stack<int> st;
//     while(!q.empty()){//while(q.size()>0)//t.c->O(n),s.c->O(n)
//         st.push(q.front());
//         q.pop();
//     }
//     while(!st.empty()){
//         q.push(st.top());
//         st.pop();
//     }
// }

// void display(queue<int>& q){
//     int n = q.size();
//     for(int i=1;i<=n;i++){
//         int x = q.front();
//         cout<<x<<" ";
//         q.pop();
//         q.push(x);
//     }
//     cout<<endl;
// }

// int main(){
//     //push//pop //front->top  //size    //back
//     queue<int> q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);
//     cout<<q.front()<<endl;
//     // q.pop();
//     // cout<<q.back();//access the last element
//     // cout<<q.size()<<endl;
//     display(q);
//     reverseStack(q);
//     display(q);
// }

//Remove all the elements present in the queue present at even position in queue.consider 0 based indexing

// void removeEven(queue<int>& q){
//     int n = q.size();
//     // for(int i=0;i<n;i++){
//     //     int x = q.front();
//     //     q.pop();
//     //     if(i%2==0){
//     //         continue;
//     //     }
//     //     q.push(x);
//     // }
//     //or
//      for(int i=0;i<n;i++){
//         if(i%2==0){
//          q.pop();
//         }else{
//         int x = q.front();
//         q.pop();
//         q.push(x);
//         }
        
//     }
// }

// void display(queue<int>& q){
//     int n = q.size();
//     for(int i=1;i<=n;i++){
//         int x = q.front();
//         cout<<x<<" ";
//         q.pop();
//         q.push(x);
//     }
//     cout<<endl;
// }

// int main(){
//     queue<int> q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);
//     display(q);
//     removeEven(q);
//     display(q);
// }






//IMPLEMENT push(),pop(),size(),back(),front() ,empty(),display() function with with array



// #include <vector>
// using namespace std;

// class Queue {
// public:
//     int f;          // front index
//     int b;          // back index
//     // int arr[];     // queue array
//     vector<int> arr; // using vector for dynamic array
//     int capacity;

//     // Constructor
//     Queue(int val) {
//         f = 0;
//         b = 0;
//         vector<int> v(val); // initialize vector with capacity
//         arr = v;
//         capacity = val;
//     }

//     // PUSH FUNCTION
//     void push(int val) {
//         if (b == arr.size()) {
//             cout << "Queue is FULL!" << endl;
//             return;
//         }

//         arr[b] = val;
//         b++;
//     }

//     // POP FUNCTION
//     void pop() {
//         if (f == b) {//or (f-b==0 )
//             cout << "Queue is EMPTY!" << endl;
//             return;
//         }

//         f++;
//     }

//     // FRONT FUNCTION
//     int front() {
//         if (f == b) {
//             cout << "Queue is EMPTY!" << endl;
//             return -1;
//         }

//         return arr[f];
//     }

//     // BACK FUNCTION
//     int back() {
//         if (f == b) {
//             cout << "Queue is EMPTY!" << endl;
//             return -1;
//         }

//         return arr[b - 1];
//     }

//     // SIZE FUNCTION
//     int size() {
//         return b - f;
//     }

//     // EMPTY FUNCTION
//     bool empty() {
//         return (f == b);
//     }

//     // DISPLAY FUNCTION
//     void display() {
//         if (f == b) {
//             cout << "Queue is EMPTY!" << endl;
//             return;
//         }

//         for (int i = f; i < b; i++) {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }
// };

// int main() {

//     Queue q(5);

//     // push elements
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);

//     cout << "Queue elements: ";
//     q.display();

//     // front and back
//     cout << "Front element: " << q.front() << endl;
//     cout << "Back element: " << q.back() << endl;

//     // size
//     cout << "Size of queue: " << q.size() << endl;

//     // pop
//     q.pop();

//     cout << "After pop: ";
//     q.display();

//     // empty check
//     if (q.empty()) {
//         cout << "Queue is EMPTY" << endl;
//     } else {
//         cout << "Queue is NOT EMPTY" << endl;
//     }

//     return 0;
// }


//PROBLEMS IN ARRAY IMPLEMENTATION OF QUEUE

// we are wasting the arrray as when we are doing pop() we just move the front pointer forward and we are not reusing the space of the popped element. So after some time we will run out of space even if there are few elements in the queue. 
// To solve this problem we can use circular array //circular queue or we can use linked list implementation of queue.

//IMPLEMENTATION OF QUEUE USING LINKED LIST




// #include <iostream>
// using namespace std;

// // Node class
// class Node {
// public:
//     int val;
//     Node* next;

//     Node(int val) {
//         this->val = val;
//         next = NULL;
//     }
// };

// // Queue class using Linked List
// class Queue {
// public:
//     Node* head;
//     Node* tail;
//     int size;

//     // Constructor
//     Queue() {
//         head = tail = NULL;
//         size = 0;
//     }

//     // PUSH FUNCTION
//     void push(int val) {

//         Node* temp = new Node(val);

//         // If queue is empty
//         if (size == 0) {
//             head = tail = temp;
//         }
//         else {
//             tail->next = temp;
//             tail = temp;
//         }

//         size++;
//     }

//     // POP FUNCTION
//     void pop() {

//         if (size == 0) {
//             cout << "Queue is EMPTY!" << endl;
//             return;
//         }

//         Node* temp = head;
//         head = head->next;

//         delete temp;

//         size--;

//         // If queue becomes empty
//         if (size == 0) {
//             tail = NULL;
//         }
//     }

//     // FRONT FUNCTION
//     int front() {

//         if (size == 0) {
//             cout << "Queue is EMPTY!" << endl;
//             return -1;
//         }

//         return head->val;
//     }

//     // BACK FUNCTION
//     int back() {

//         if (size == 0) {
//             cout << "Queue is EMPTY!" << endl;
//             return -1;
//         }

//         return tail->val;
//     }

//     // SIZE FUNCTION
//     int getSize() {
//         return size;
//     }

//     // EMPTY FUNCTION
//     bool empty() {
//         return size == 0;
//     }

//     // DISPLAY FUNCTION
//     void display() {

//         if (size == 0) {
//             cout << "Queue is EMPTY!" << endl;
//             return;
//         }

//         Node* temp = head;

//         while (temp != NULL) {
//             cout << temp->val << " ";
//             temp = temp->next;
//         }

//         cout << endl;
//     }
// };

// int main() {

//     Queue q;

//     // Push elements
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);

//     cout << "Queue elements: ";
//     q.display();

//     // Front and Back
//     cout << "Front element: " << q.front() << endl;
//     cout << "Back element: " << q.back() << endl;

//     // Size
//     cout << "Size of queue: " << q.getSize() << endl;

//     // Pop
//     q.pop();

//     cout << "After pop: ";
//     q.display();

//     // Empty check
//     if (q.empty()) {
//         cout << "Queue is EMPTY" << endl;
//     }
//     else {
//         cout << "Queue is NOT EMPTY" << endl;
//     }

//     return 0;
// }




//ADVANTAGE OF LINKEDLIST OVER ARRAY IMPLEMENTATION

//UNLIMITED SIZE

// 1. Dynamic Size: Linked list implementation allows for dynamic sizing, meaning the queue can grow or shrink as needed during runtime. In contrast, array implementation has a fixed size, leading to potential waste of space or overflow issues.
// 2. Efficient Memory Usage: In linked list implementation, memory is allocated only when an element is added to the queue. This results in more efficient memory usage compared to array implementation where memory is allocated upfront regardless of the actual number of elements in the queue.
// 3. No Wastage of Space: Unlike array implementation where space is wasted when elements are removed from the front, linked list implementation reuses the memory of removed nodes, preventing wastage of space.
// 4. Simpler Implementation: The linked list implementation of a queue is generally simpler to implement and understand compared to the array implementation, which requires managing indices and handling wrap-around scenarios in case of a circular queue.


//DISADVANTAGE OF LINKEDLIST OVER ARRAY IMPLEMENTATION

// 1. Higher Memory Overhead: Each node in a linked list requires additional memory for storing the pointer to the next node, which can lead to higher memory overhead compared to array implementation where elements are stored contiguously.
// 2. Slower Access Time: Accessing elements in a linked list is slower than accessing elements in an array due to the need to traverse the list from the head to the desired position, resulting in O(n) time complexity for access, while array implementation allows for O(1) time complexity for access.
// 3. Cache Performance: Arrays have better cache performance due to their contiguous memory allocation, while linked lists may suffer from cache misses due to their non-contiguous memory allocation, leading to slower performance in certain scenarios. 



//DOUBLY ENDED QUEUE
//we can push and pop from both the ends

// #include <iostream>
// using namespace std;

// // Node class for doubly linked list
// class Node {
// public:
//     int val;
//     Node* next;
//     Node* prev;  // extra pointer for doubly linked list

//     Node(int val) {
//         this->val = val;
//         next = NULL;
//         prev = NULL;  // initialize prev to NULL
//     }
// };

// // Deque class using Doubly Linked List
// class Deque {
// public:
//     Node* head;
//     Node* tail;
//     int size;

//     // Constructor
//     Deque() {
//         head = tail = NULL;
//         size = 0;
//     }

//     // ADD FRONT
//     void addFront(int val) {
//         Node* temp = new Node(val);
        
//         if (size == 0) {
//             head = tail = temp;
//         } else {
//             temp->next = head;
//             head->prev = temp;
//             head = temp;
//         }
//         size++;
//     }

//     // ADD REAR (same as pushBack from hint)
//     void addRear(int val) {
//         Node* temp = new Node(val);
        
//         if (size == 0) {
//             head = tail = temp;
//         } else {
//             tail->next = temp;
//             temp->prev = tail;
//             tail = temp;
//         }
//         size++;
//     }

//     // GET FRONT
//     int getFront() {
//         if (size == 0) {
//             cout << "Deque is EMPTY!" << endl;
//             return -1;
//         }
//         return head->val;
//     }

//     // GET REAR
//     int getRear() {
//         if (size == 0) {
//             cout << "Deque is EMPTY!" << endl;
//             return -1;
//         }
//         return tail->val;
//     }

//     // DELETE FRONT (same as pop from queue)
//     void deleteFront() {
//         if (size == 0) {
//             cout << "Deque is EMPTY!" << endl;
//             return;
//         }
        
//         Node* temp = head;
        
//         if (size == 1) {
//             head = tail = NULL;
//         } else {
//             head = head->next;
//             head->prev = NULL;
//         }
        
//         delete temp;
//         size--;
//     }

//     // DELETE REAR
//     void deleteRear() {
//         if (size == 0) {
//             cout << "Deque is EMPTY!" << endl;
//             return;
//         }
        
//         Node* temp = tail;
        
//         if (size == 1) {
//             head = tail = NULL;
//         } else {
//             tail = tail->prev;
//             tail->next = NULL;
//         }
        
//         delete temp;
//         size--;
//     }

//     // SIZE FUNCTION
//     int getSize() {
//         return size;
//     }

//     // EMPTY FUNCTION
//     bool empty() {
//         return size == 0;
//     }

//     // DISPLAY FUNCTION (forward)
//     void display() {
//         if (size == 0) {
//             cout << "Deque is EMPTY!" << endl;
//             return;
//         }
        
//         Node* temp = head;
//         cout << "Forward: ";
//         while (temp != NULL) {
//             cout << temp->val << " ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }

//     // DISPLAY REVERSE (to demonstrate prev pointers work)
//     void displayReverse() {
//         if (size == 0) {
//             cout << "Deque is EMPTY!" << endl;
//             return;
//         }
        
//         Node* temp = tail;
//         cout << "Reverse: ";
//         while (temp != NULL) {
//             cout << temp->val << " ";
//             temp = temp->prev;
//         }
//         cout << endl;
//     }
// };

// int main() {
//     Deque dq;

//     // Test addRear
//     cout << "Adding 10, 20, 30 to rear:" << endl;
//     dq.addRear(10);
//     dq.addRear(20);
//     dq.addRear(30);
//     dq.display();

//     // Test addFront
//     cout << "\nAdding 5, 1 to front:" << endl;
//     dq.addFront(5);
//     dq.addFront(1);
//     dq.display();

//     // Test getFront and getRear
//     cout << "\nFront element: " << dq.getFront() << endl;
//     cout << "Rear element: " << dq.getRear() << endl;
//     cout << "Size: " << dq.getSize() << endl;

//     // Test deleteFront
//     cout << "\nAfter deleteFront: ";
//     dq.deleteFront();
//     dq.display();

//     // Test deleteRear
//     cout << "After deleteRear: ";
//     dq.deleteRear();
//     dq.display();

//     // Test reverse display (proves doubly linked)
//     cout << "\nReverse display: ";
//     dq.displayReverse();

//     // Continue deleting
//     cout << "\nDeleting all elements:" << endl;
//     dq.deleteFront();
//     dq.deleteFront();
//     dq.deleteFront();
//     dq.display();

//     // Test empty
//     if (dq.empty()) {
//         cout << "Deque is EMPTY" << endl;
//     }

//     return 0;
// }


//stl bhi h iske
//like dq.push_back(10);,dq.push_front(5);,dq.pop_back();,dq.pop_front();,dq.front();,dq.back();,dq.size();,dq.empty();,dq.clear();,etc.



//CIRCULAR QUEUE