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


class Node {
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;//bina value ke bhi constructor me intitialize kar skte h
    }
};
// void display(Node* head) {
//     Node* temp = head; // Start from the head of the list
//     while (temp != NULL) { // Traverse until we reach the end of the list
//         cout << temp->val << " "; // Print the value of the current node
//         temp = temp->next; // Move to the next node
//     }
//     cout << endl; // Print a newline after displaying all values
// }
void display(Node* head) {
    while (head != NULL) { 
        cout << head->val << " "; 
        head = head->next; 
    }
    cout << endl; 
}


// int size(Node* head){
//     int count = 0;
//     Node* temp = head; // Start from the head of the list
//     while (temp != NULL) { // Traverse until we reach the end of the list
//         count++; // Increment the count for each node
//         temp = temp->next; // Move to the next node
//     }
//     return count; // Return the total count of nodes in the list
// }

void displayRecursive(Node* head) {
    if (head == NULL) return; // Base case: if the current node is NULL, return 
    
    cout << head->val << " "; // Print the value of the current node
    displayRecursive(head->next); // Recursive call to display the next node
}

int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);

    //creating a linked list
    a->next = b; // a's next points to b
    b->next = c; // b's next points to c
    c->next = d; // c's next points to d
    // d->next = NULL; // NO NEED ->d's next points to NULL, indicating the end of the
    cout<<a->next->val<<endl;// Accessing b's value through a's next pointer

    // Traversing the linked list and printing values
    display(a);
//    cout<<size(a);
   displayRecursive(a);
    //make a function of display above and call it here
//      Node* temp = a; // Start from the head of the list
//     while(temp != NULL){
//         cout << temp->val << " "; // Print the current node's value
//         temp = temp->next; // Move to the next node
//     }
//     cout << endl;
   

    return 0;
}