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
class Node{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void display(Node *head)
{
    Node *temp = head;
    while(temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
void displayRec(Node* head){
    if(head==NULL) return ;
    cout << head->val << " ";
    displayRec(head->next);
}
void displayRev(Node* tail){
    if(tail==NULL) return ;
    cout << tail->val << " ";
    displayRev(tail->prev);
}



int  main(){
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);

    // connection
    a->next = b;
    // a->prev = NULL; // no need already null
    b->prev = a;
    b->next = c;
    c->prev = b;
    // c->next = NULL;// no need already null

    // print
   
    // display(a);
    displayRec(a);
    cout << endl;
    displayRev(c);
    
     return 0;
}
