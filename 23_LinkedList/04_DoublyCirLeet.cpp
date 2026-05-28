// LIMITAION OF SINGLY LINKED LIST

// 1. No backward traversal: In a singly linked list, you can only traverse the list in one direction (forward). This means that you cannot easily access the previous node or traverse the list backward.
// 2. Inefficient insertion and deletion: In a singly linked list, inserting or deleting a node at a specific position can be inefficient because you need to traverse the list to find the correct position. This can lead to O(n) time complexity for these operations.
// 3. No direct access: In a singly linked list, you cannot directly access a node at a specific index. You need to traverse the list from the head node to reach the desired index, which can be inefficient for large lists.
// To overcome these limitations, we can use a doubly linked list. A doubly linked list allows for both forward and backward traversal, making it easier to access previous nodes and perform insertions and deletions more efficiently. Each node in a doubly linked list contains a reference to both the next and previous nodes, allowing for more flexible navigation through the list.
// here head and tail next and prev are null

//BENEFITS OF DOUBLY LINKED LIST
// 1. Bidirectional Traversal: A doubly linked list allows for traversal in both directions (forward and backward). This means you can easily access the previous node, which can be useful in certain applications where you need to navigate back and forth through the list.
// 2. Efficient Insertion and Deletion: In a doubly linked list, inserting or deleting a node at a specific position can be more efficient compared to a singly linked list. Since each node has a reference to both the next and previous nodes, you can easily update the pointers when inserting or deleting nodes without needing to traverse the entire list.
// 3. Direct Access: In a doubly linked list, you can directly access a node at a specific index by traversing the list from either the head or the tail, depending on which is closer. This can be more efficient than a singly linked list, where you can only traverse from the head.
//4.koi bhi node pe ho har ek node access kar skte h

#include <iostream>
using namespace std;
//DOUBLY LINKED LIST
// class Node{
// public:
//     int val;
//     Node *next;
//     Node *prev;

//     Node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//         this->prev = NULL;
//     }
// };

// void display(Node *head)
// {
//     Node *temp = head;
//     while(temp != NULL)
//     {
//         cout << temp->val << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }
// void displayRec(Node* head){
//     if(head==NULL) return ;
//     cout << head->val << " ";
//     displayRec(head->next);
// } 

// void displayReverse(Node* head){
//     if(head==NULL) return ;
//     displayReverse(head->next);
//     cout << head->val << " ";
// }
// void displayRev(Node* tail){
//     if(tail==NULL) return ;
//     cout << tail->val << " ";
//     displayRev(tail->prev);
// }



// int  main(){
//     Node *a = new Node(10);
//     Node *b = new Node(20);
//     Node *c = new Node(30);

//     // connection
//     a->next = b;
//     // a->prev = NULL; // no need already null
//     b->prev = a;
//     b->next = c;
//     c->prev = b;
//     // c->next = NULL;// no need already null

//     // print
   
//     // display(a);
//     displayRec(a);
//     cout << endl;
//     displayRev(c);
    
//      return 0;
// }






//dll operations

#include <iostream>
using namespace std;

// // Node class for Doubly Linked List
// class Node {
// public:
//     int val;
//     Node* next;
//     Node* prev;

//     Node(int val){
//         this->val = val;
//         this->next = NULL;
//         this->prev = NULL;
//     }
// };

// class DoublyLinkedList {
// public:
//     Node* head;
//     Node* tail;
//     int size;

//     DoublyLinkedList(){
//         head = NULL;
//         tail = NULL;
//         size = 0;
//     }

//     // Insert at Tail (O(1))
//     void insertAtTail(int val){
//         Node* temp = new Node(val);

//         if(size == 0){
//             head = tail = temp;
//         }
//         else{
//             tail->next = temp;
//             temp->prev = tail;
//             tail = temp;
//         }
//         size++;
//     }

//     // Insert at Head (O(1))
//     void insertAtHead(int val){
//         Node* temp = new Node(val);

//         if(size == 0){
//             head = tail = temp;
//         }
//         else{
//             temp->next = head;
//             head->prev = temp;
//             head = temp;
//         }
//         size++;
//     }

//     // Insert at Index
//     void insertAtIdx(int idx, int val){
//         if(idx < 0 || idx > size){
//             cout << "Invalid Index" << endl;
//         }
//         else if(idx == 0){
//             insertAtHead(val);
//         }
//         else if(idx == size){
//             insertAtTail(val);
//         }
//         else{
//             Node* t = new Node(val);
//             Node* temp = head;

//             for(int i = 0; i < idx-1; i++){
//                 temp = temp->next;
//             }

//             t->next = temp->next;
//             t->prev = temp; 
//             temp->next->prev = t;
//             temp->next = t;

//             size++;
//         }
//     }

//     // Get value at index
//     int getAtIdx(int idx){
//         if(idx < 0 || idx >= size){
//             cout << "Invalid Index" << endl;
//             return -1;
//         }

//         Node* temp = head;
//         for(int i = 0; i < idx; i++){
//             temp = temp->next;
//         }
//         return temp->val;
//     }

//     // Delete at Head
//     void deleteAtHead(){
//         if(size == 0){
//             cout << "List is empty" << endl;
//             return;
//         }
//         head=head->next;
//         if(head) head->prev = NULL;
//         else tail = NULL; // List became empty after deletion
//         size--;
//         // else if(size == 1){
//         //     head = tail = NULL;
//         //     size--;
//         // }
//         // else{
//         //     head = head->next;
//         //     head->prev = NULL;
//         //     size--;
//         // }
//     }

//     // Delete at Tail
//     void deleteAtTail(){
//         if(size == 0){
//             cout << "List is empty" << endl;
//         }
//         else if(size == 1){
//             deleteAtHead();
//         }
// secondapproach
        // Node* temp = tail->prev;
        // temp->next = NULL;
        // tail = temp;
        // size--;
        // 1 continue
//         // else if(size == 1){
//         //     head = tail = NULL;
//         //     size--;
//         // }
//         // else{
//         //     tail = tail->prev;
//         //     tail->next = NULL;
//         //     size--;
//         // }
//     }

//     // Delete at Index
//     void deleteAtIdx(int idx){
//         if(size == 0){
//             cout << "List is empty" << endl;
//         }
//         else if(idx < 0 || idx >= size){
//             cout << "Invalid Index" << endl;
//         }
//         else if(idx == 0){
//             deleteAtHead();
//         }
//         else if(idx == size-1){
//             deleteAtTail();
//         }
//         else{
//             Node* temp = head;

//             for(int i = 0; i < idx; i++){
//                 temp = temp->next;
//             }

//             temp->prev->next = temp->next;
//             temp->next->prev = temp->prev;

//             size--;
//         }
//     }

//     // Display forward
//     void display(){
//         Node* temp = head;
//         while(temp != NULL){
//             cout << temp->val << " ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }

//     // Display reverse
//     void displayReverse(){
//         Node* temp = tail;
//         while(temp != NULL){
//             cout << temp->val << " ";
//             temp = temp->prev;
//         }
//         cout << endl;
//     }
// };

// int main(){
//     DoublyLinkedList dll;

//     dll.insertAtTail(10);
//     dll.insertAtTail(20);
//     dll.insertAtTail(30);
//     dll.insertAtTail(40);

//     dll.insertAtHead(5);
//     dll.insertAtIdx(2, 15);

//     cout << "Forward: ";
//     dll.display();

//     cout << "Reverse: ";
//     dll.displayReverse();

//     dll.deleteAtHead();
//     dll.deleteAtTail();
//     dll.deleteAtIdx(2);

//     cout << "After deletion: ";
//     dll.display();

//     return 0;
//     //AGR PEECHE SE SIZE CHOTA H TOH PEECHE SE TRAVERSE KRO
// }



//  1. Circular Singly Linked List — insertAtTail
// class Node {
// public:
//     int val;
//     Node* next;

//     Node(int val){
//         this->val = val;
//         this->next = NULL;
//     }
// };

// class CircularSLL {
// public:
//     Node* head;
//     Node* tail;
//     int size;

//     CircularSLL(){
//         head = NULL;
//         tail = NULL;
//         size = 0;
//     }

//     // Insert at Tail
//     void insertAtTail(int val){
//         Node* temp = new Node(val);

//         // Case 1: Empty list
//         if(size == 0){
//             head = tail = temp;
//             tail->next = head;   // circular link
//         }
//         // Case 2: Non-empty list
//         else{
//             tail->next = temp;
//             tail = temp;
//             tail->next = head;   // maintain circular
//         }
//         size++;
//     }
// };







//  2. Circular Doubly Linked List — insertAtTail

// class Node {
// public:
//     int val;
//     Node* next;
//     Node* prev;

//     Node(int val){
//         this->val = val;
//         this->next = NULL;
//         this->prev = NULL;
//     }
// };

// class CircularDLL {
// public:
//     Node* head;
//     Node* tail;
//     int size;

//     CircularDLL(){
//         head = NULL;
//         tail = NULL;
//         size = 0;
//     }

//     // Insert at Tail
//     void insertAtTail(int val){
//         Node* temp = new Node(val);

//         // Case 1: Empty list
//         if(size == 0){
//             head = tail = temp;
//             head->next = head;
//             head->prev = head;
//         }
//         // Case 2: Non-empty list
//         else{
//             tail->next = temp;
//             temp->prev = tail;

//             temp->next = head;
//             head->prev = temp;

//             tail = temp;
//         }
//         size++;
//     }
// }; 