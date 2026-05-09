//Array Limitation:
// Array me contigous memory allcate karte h  O(1)
// vector solve karta h but space and time complexity is more than array
//need for new data structure
//LINKED LIST
//Idea of linking two non-contigous memory locations(nodes) using pointers
//unlimited size, dynamic memory allocation, ease of insertion and deletion

// Head
//   |
//   v
// +------+    +------+    +------+    +------+
// | 10 | *--->| 20 | *--->| 30 | *--->| 40 | *---> NULL
// +------+    +------+    +------+    +------+

// class Node{
//     int val;
//     Node* next;//similar like int* ptr to store ptr address of next node
// };

#include <iostream>
using namespace std;

// class Node {
// public:
//     int val;
//     Node* next;
// };

//bad way to create a linked list
// int main(){
//     Node a;
//     a.val = 10;
//     Node b;
//     b.val = 20;
//     Node c;
//     c.val = 30;
//     Node d;
//     d.val = 40;

//     //creating a linked list
//     a.next = &b; // a's next points to b
//     b.next = &c; // b's next points to c
//     c.next = &d; // c's next points to d
//     d.next = NULL; // d's next points to NULL, indicating the end of the
// }

//not good way to create a linked list

// class Node {
// public:
//     int val;
//     Node* next;
//     Node(int val){
//         this->val = val;
//         this->next = NULL;//bina value ke bhi constructor me intitialize kar skte h
//     }
// };


// int main(){
//     Node a(10);
//     Node b(20);
//     Node c(30);
//     Node d(40);

//     //creating a linked list
//     a.next = &b; // a's next points to b
//     b.next = &c; // b's next points to c
//     c.next = &d; // c's next points to d
//     d.next = NULL; // d's next points to NULL, indicating the end of the

//     // cout<<(a.next)->val<<endl;// cout<<(*(a.next)).val<<endl; // Accessing b's value through a's next pointer
//     // cout<<a.next->next->next->val<<endl;// Accessing d's value through a's next pointer

//     Node temp =a; // temp is a copy of a, not a pointer to a
//     // while(temp.next != NULL){
//     //     cout<<temp.val<<"->";
//     //     temp = *(temp.next); // Move to the next node by dereferencing the next pointer
//     //     //last eelemnt nhi chlega p ehle hi terminate ho jayega loop
//     // }

//     //Good way
//     while(1){
//         cout<<temp.val<<" ";
//         if(temp.next == NULL) break; // Check if we've reached the end of the list
//         temp = *(temp.next); // Move to the next node by dereferencing the next pointer
//         //last eelemnt nhi chlega p ehle hi terminate ho jayega loop
//     }
// }


//good way to create a linked list using dynamic memory allocation


// class Node {
// public:
//     int val;
//     Node* next;
//     Node(int val){
//         this->val = val;
//         this->next = NULL;//bina value ke bhi constructor me intitialize kar skte h
//     }
// };
// // void display(Node* head) {
// //     Node* temp = head; // Start from the head of the list
// //     while (temp != NULL) { // Traverse until we reach the end of the list
// //         cout << temp->val << " "; // Print the value of the current node
// //         temp = temp->next; // Move to the next node
// //     }
// //     cout << endl; // Print a newline after displaying all values
// // }
// void display(Node* head) {//T.C=O(n) S.C=O(1)
//     while (head != NULL) { 
//         cout << head->val << " "; 
//         head = head->next; 
//     }
//     cout << endl; 
// }


// int size(Node* head){
//     int count = 0;
//     Node* temp = head; // Start from the head of the list
//     while (temp != NULL) { // Traverse until we reach the end of the list
//         count++; // Increment the count for each node
//         temp = temp->next; // Move to the next node
//     }
//     return count; // Return the total count of nodes in the list
// }

// void displayRecursive(Node* head) {//t.c=O(n) s.c=O(n)
//     if (head == NULL) return; // Base case: if the current node is NULL, return 
    
//     cout << head->val << " "; // Print the value of the current node
//     displayRecursive(head->next); // Recursive call to display the next node
// }

// void displayInReverse(Node* head) {//t.c=O(n) s.c=O(n)
//     if (head == NULL) return; // Base case: if the current node is NULL, return 
    
//     displayInReverse(head->next); // Recursive call to display the next node
//     cout << head->val << " "; // Print the value of the current node after the recursive call
// }
//     void insertAtEndWithoutClass(Node* head, int val){
//         Node* t = new Node(val);
//         while(head->next != NULL) head =head-> next;
//         head->next =t;
//     }

// int main(){
//     Node* a = new Node(10);
//     Node* b = new Node(20);
//     Node* c = new Node(30);
//     Node* d = new Node(40);

//     //creating a linked list
//     a->next = b; // a's next points to b
//     b->next = c; // b's next points to c
//     c->next = d; // c's next points to d
//     // d->next = NULL; // NO NEED ->d's next points to NULL, indicating the end of the
//     cout<<a->next->val<<endl;// Accessing b's value through a's next pointer

//     // Traversing the linked list and printing values
//     insertAtEndWithoutClass(a, 80);

//     display(a);
// //    cout<<size(a);
// //    displayRecursive(a);
//     //make a function of display above and call it here
// //      Node* temp = a; // Start from the head of the list
// //     while(temp != NULL){
// //         cout << temp->val << " "; // Print the current node's value
// //         temp = temp->next; // Move to the next node
// //     }
// //     cout << endl;

// // displayInReverse(a);
   

//     return 0;
// }

//ITERATIVE SOLUTION IS THE BEST COMPARE TO RECURSIVE SOLUTION



//IMPLEMENTATION LINKED LIST USING CLASS

//InsertAtEnd method
// implement a method to insert a new node at the end of the linked list.

// CASE 1: size>0
// CASE 2: size=0


// class Node {
// public:
//     int val;
//     Node* next;
//     Node(int val){
//         this->val = val;
//         this->next =NULL;
//     }
// };

// class LinkedList {
// public:
//     Node* head;
//     Node* tail;
//     int size;
//     LinkedList(){
//         head = NULL;
//         tail =NULL;
//         size=0;
//     }
//     void inserAtTail(int val){//T.C=O(1)
//         Node* temp = new Node(val);
//         if(size==0) head = tail = temp;
//         else{
//             tail->next = temp;
//             tail =temp;
//         }
//         size++;
//     }
//      void inserAtHeaad(int val){//T.C=O(1)
//         Node* temp = new Node(val);
//         if(size==0) head = tail = temp;
//         else{
//             temp->next = head;
//             head = temp;
//         }
//         size++;
//     }
//     void insertAtIdx(int idx, int val){
//         if(idx<0 || idx>size) cout<<"Invalid Index"<< endl;
//         else if(idx==0) inserAtHeaad(val);
//         else if(idx==size) inserAtTail(val);
//         else{
//             Node* t = new Node(val);
//             Node* temp = head;
//             for(int i=1;i<idx-1;i++) temp = temp->next;
//             t->next = temp->next;
//             temp->next = t;
//              size++;
//         }
//     }
//     int getAtIdx(int idx){
//         if(idx<0 ||  idx>=size){
//             cout<<"Invalid Index"<<endl;
//             return -1;
//         }
//         else if(idx==0) return head->val;
//         else if(idx==size-1) return tail->val;
//         else{
//             Node* temp =head;
//             for(int i=1;i<idx;i++) temp=temp->next;
//             return temp->val;
//         }
//     }
//     void deleteAtHead(){
//         if (size==0){
//             cout<<"List is empty"<<endl;
//         }
//         else {
//             head=head->next;
//              size--;
//         }
//     }
//     void deleteAtTail(){
//         if(size==0){
//             cout<<"List is empty"<<endl;
//         }
//         else if(size==1){
//             head=tail=NULL;
//             size--;
//         }
//         else{
//             Node* temp = head;
//             while(temp->next != tail) temp = temp->next;
//             temp->next = NULL;
//             tail = temp;
//              size--;
//         }
//     }
//     void deleteAtIdx(int idx){
//         if(size==0) cout<<"List is empty"<<endl; 
//         else if(idx<0 || idx>=size) cout<<"Invalid Index"<<endl;
//         else if(idx==0) deleteAtHead();
//         else if(idx==size-1) deleteAtTail();
//         else{
//             Node* temp = head;
//             for(int i=1;i<idx;i++) temp = temp->next;
//             temp->next = temp->next->next;
//              size--;
//         }
//     }
//     void display(){
//         Node* temp = head;
//         while(temp != NULL){
//             cout<<temp->val<<" ";
//             temp = temp->next;
//         }
//             cout<<endl;
//     }
// };

// int main(){
//     LinkedList ll;
//     ll.inserAtTail(10);
//     ll.inserAtTail(20);
//     ll.inserAtTail(30);
//     ll.inserAtTail(40);
//     ll.inserAtHeaad(5);
//     ll.insertAtIdx(2, 15);
//     // cout<<ll.getAtIdx(20)<<endl;//2 index pe jo vaue h use return karna h
//      ll.display();
//     // ll.deleteAtHead();
//     ll.deleteAtTail();
//     ll.deleteAtIdx(2);
//     ll.display();

//     // cout<<ll.size;
// }


// //EVIDENT LIMITATION OF LINKED LIST 
// // AGR HEAD ELEMENT CHAHIYE YA TAIL TO T.C=O(1) HAI BUT INDEX PE ELEMENT CHAHIYE TO T.C=O(N) HAI
// //array me get karne ki t.c=O(1) HAI BUT INSERTION AND DELETION ME T.C=O(N) HAI



//DELETE A NODE WITHOUT TAIL
#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int data) {
        val = data;
        next = NULL;
    }
};

// Function to print the list (Lines 13-18 in your image)
void display(Node* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

// Updated Deletion Logic (Lines 19-29 in your image)
Node* deletenode(Node* head, Node* target) {
    // Case 1: If the node to be deleted is the head
    if (head == target) {
        head = head->next;
        return head;
    }

    // Case 2: If the node is somewhere else in the list
    Node* temp = head;
    while (temp->next != target) {
        temp = temp->next;
    }
    
    // Re-linking to skip the target node
    temp->next = temp->next->next;
    return head;
}

int main() {
    // Manual Node Creation (Lines 32-36)
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);

    // Linking (Lines 37+)
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    Node* head = a;

    cout << "Before deletion: ";
    display(head);

    // Example: Delete node 'd' (40) or 'a' (10)
    head = deletenode(head, d);

    cout << "After deletion:  ";
    display(head);

    return 0;
}