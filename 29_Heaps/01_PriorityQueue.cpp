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
int main(){
    //create a  min heap
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(10);
    pq.push(-6);
    pq.push(-10);
    cout<<pq.top()<<endl;//-10
    pq.pop();//-10 pop
    cout<<pq.top();//-6

}


//Two types of HEAPS:
// 1.Max Heap(Default in C++) => In max heap, the value of each node is greater than or equal to the values of its children. The maximum element is at the root.
// 2.Min Heap => In min heap, the value of each node is less than or equal to the values of its children. The minimum element is at the root.



//Priority Queue STL

// #include <queue>

// max heap-> priority_queue<int> pq; //by default max heap hota h
// min heap-> priority_queue<int, vector<int>, greater<int>> pq; //min heap banane ke liye ye syntax use karte h