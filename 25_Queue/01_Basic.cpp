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

