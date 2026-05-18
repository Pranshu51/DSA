//Stack=>Provides us discipline ->use operations in a specific order ->operation t.c is O(1) and space is O(n)
//LIFO - Last In First Out
//Declaration of stack
// stack<int> st; //stack of integers
// stack<string> st; //stack of strings
// stack<char> st; //stack of characters etc..
//Operations - push, pop, top, empty,size
//st.push(val)-add val to the top of the stack
//st.pop()-remove the top element from the stack
//st.top()-return the top element of the stack
//st.empty()-return true if the stack is empty, otherwise false
//st.size()-return the number of elements in the stack

//we can only insert and delete from the top of the stack
//Applications of stack
//1. Expression evaluation - infix, postfix, prefix
//2. Backtracking - undo operation, browser history
//3. Function call stack - recursion
//4. Depth First Search (DFS) - graph traversal
//5. Balancing symbols - parentheses, brackets, braces


//BASIC STL (standard template library) stack operations

#include <iostream>
#include <stack>
using namespace std;

// int main(){
//     stack<int> st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);
//     // // printing in reverse order -> emptying the stack
//     // // while(st.size()>0){
//     // //      cout<<st.top()<<" ";
//     // //      st.pop();
//     // // }

//     // we will use extra stack
//     stack<int> temp;
//     // while(st.size()>0){
//     //     cout<<st.top()<<" ";
//     //     int x = st.top();
//     //     st.pop();
//     //     temp.push(x);
//     // }
//     while(st.size()>0){
//         cout<<st.top()<<" ";
//         temp.push(st.top());
//         st.pop();
//     }
//     cout<<endl;
//     //putting elements back to original stack
//     while(temp.size()>0){
//         cout<<temp.top()<<" ";
//         st.push(temp.top());
//         temp.pop();
//     }
// }


//REVERSE A STACK USING THIRD STACK

void print(stack<int> st){
    stack<int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    //putting elements back to original stack
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl;
}
// int main(){
//     stack<int> st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);
//     print(st);
//     stack<int> temp;
//     while(st.size()>0){
//         temp.push(st.top());
//         st.pop();
//     }
//     //now temp has the reversed order of elements
//     //putting back to original stack
//     stack<int> gt;
//     while(temp.size()>0){
//         gt.push(temp.top());
//         temp.pop();
//     }
//     //now st is reversed
//     while(gt.size()>0){
//         st.push(gt.top());
//         gt.pop();
//     }
//         print(st);

// }



//PUSH ELEMENT AT THE BOTTOM OF THE STACK using third stack



// void pushAtBottom(stack<int> &st,int x){//&st is important
//     stack<int> temp;
//     while(st.size()>0){
//         temp.push(st.top());
//         st.pop();
//     }
//  st.push(x); //pushing x at the bottom of the stack

//     //now temp has the reversed order of elements
//     //putting back to original stack
//     while(temp.size()>0){
//         st.push(temp.top());
//         temp.pop();
//     }
// }

// void pushAtAnyIndex(stack<int> &st,int x,int idx){
//     stack<int> temp;
//     while(st.size()>idx){
//         temp.push(st.top());
//         st.pop();
//     }
//     st.push(x); //pushing x at the bottom of the stack
//     while(temp.size()>0){
//         st.push(temp.top());
//         temp.pop();
//     }
// }

// void displayRevUsingRecursion(stack<int> &st){
//     if(st.size()==0) return;
//     cout<<st.top()<<" ";
//     int x= st.top();
//     st.pop();
//     displayRevUsingRecursion(st);
//     st.push(x);
// }

// void displayUsingRecursion(stack<int> &st){
//     if(st.size()==0) return;
//     int x= st.top();
//     st.pop();
//     displayUsingRecursion(st);
//     cout<<x<<" ";
//     st.push(x);
// }

// void pushAtBottomUsingRecursion(stack<int> &st,int x){
//     if(st.size()==0){
//         st.push(x);
//         return;
//     }
//     int y= st.top();
//     st.pop();
//     pushAtBottomUsingRecursion(st,x);
//     st.push(y);
// }
// void reverseUsingRecursion(stack<int> &st){
//     if(st.size()==1) return;
//     int x= st.top();
//     st.pop();
//     reverseUsingRecursion(st);
//     pushAtBottom(st,x);
// }
// int main(){
//     stack<int> st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);
//     // print(st);
//     // int x=50; //element to be pushed at the bottom
//     // pushAtBottom(st,x);
//     //now st is reversed
//     // pushAtAnyIndex(st,60,2);
//     //  displayRevUsingRecursion(st);
//     displayUsingRecursion(st);
//     cout<<endl;
//     // pushAtBottomUsingRecursion(st,5);
//     reverseUsingRecursion(st);
//      displayUsingRecursion(st);

//     // print(st);

// }


//OVERFLOW
//if we try to push an element into a stack that is already full, it results in an overflow condition. 

//UNDERFLOW
//if we try to pop an element from a stack that is already empty, it results in an underflow condition.
//two functions give this when stack is empty and you tring to pop and st.top() is called on empty stack


//ARRAY/VECTOR IMPLEMENTATION OF STACK

// class Stack{
// public:
//     int arr[5];
//     int idx =-1;
//     void push(int val){
//         idx++;
//         // if(idx==5){
//         //     cout<<"Stack overflow"<<endl;
//         //     return;
//         // }
//         arr[idx]= val;
//     }  
//     void pop(){
//         if(idx==-1){
//             cout<<"Stack underflow"<<endl;
//             return;
//         }
//         idx--;
//     } 
//     int top(){
//         if(idx==-1){
//             cout<<"Stack is empty"<<endl;
//             return -1; //returning -1 to indicate stack is empty
//         }
//         return arr[idx];
//     } 
//     int size(){
//         return idx+1;
//     }
//  void display(){
//         for(int i=0;i<=idx;i++){
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }
// };


// int main(){
//     Stack st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     cout<<st.top()<<endl;
//     st.pop();
//     cout<<st.top()<<endl;
//     cout<<st.size()<<endl;
// }


//VECTOR IMPLEMENTATION OF STACK
#include <vector>//NO OVERFLOW CONDITION IN VECTOR IMPLEMENTATION OF STACK
// class Stack{
// public:
//     vector<int> v;
//     void push(int val){
//         v.push_back(val);
//     }  
//     void pop(){
//         if(v.size()==0){
//             cout<<"Stack underflow"<<endl;
//             return;
//         }
//         v.pop_back();
//     } 
//     int top(){
//         if(v.size()==0){
//             cout<<"Stack is empty"<<endl;
//             return -1; //returning -1 to indicate stack is empty
//         }
//         return v[v.size()-1];
//     } 
//     int size(){
//         return v.size();
//     }
//     void display(){
//         for(int i=0;i<=v.size()-1;i++){
//             cout<<v[i]<<" ";
//         }
//         cout<<endl;
//     }
// };

// int main(){
//     Stack st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     cout<<st.top()<<endl;
//     st.pop();
//     cout<<st.top()<<endl;
//     cout<<st.size()<<endl;
//     st.display();
// }


//LINKED LIST IMPLEMENTATION OF STACK
//UNLIMITED SIZE
//if stack size is limited use  ARRAY 

struct Node {
    int val;
    Node* next;
    
    // Constructor to easily create new nodes
    Node(int data) {
        val = data;
        next = NULL; // or nullptr
    }
};


class Stack{
public:
    Node* head;
    int size;
    Stack(){
        head =NULL;
        size=0;
    }
    void push(int val){
        Node* temp =new Node(val);
        temp->next=head;
        head=temp;
        size++;
    }
    void pop(){
        if(head == NULL){
            cout<<"Stack underflow"<<endl;
            return;
        }
        head = head->next;
        size--;
    } 
    int top(){
        if(head == NULL){
            cout<<"Stack is empty"<<endl;
            return -1; //returning -1 to indicate stack is empty
        }
        return head->val;
    } 
    
 void display(){
        Node* current = head;
        while(current != NULL){
            cout<<current->val<<" ";
            current = current->next;
        }
        cout<<endl;
    }
    void print(Node* temp){
        if(temp == NULL) return;
        print(temp->next);
        cout<<temp->val<<" ";

    }
    void displayUsingRecursion(){
        Node* temp= head;
        print(temp);
        cout<<endl;
    }
};

int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    cout<<st.size<<endl;
    // st.display();
    st.displayUsingRecursion();
}