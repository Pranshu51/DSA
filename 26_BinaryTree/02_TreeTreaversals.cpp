//.PREORDERDER TRAVERSAL

#include <iostream>
#include <vector>
#include <queue>
using namespace std;


class Node{//This is a tree node
public:    
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};

void preorder(Node* root){
    if(root==NULL) return;//base case
    cout<<root->val<<" ";//root
    preorder(root->left);//left
    preorder(root->right);//right
}

void inorder(Node* root){
    if(root==NULL) return;//base case
    inorder(root->left);//left
    cout<<root->val<<" ";//root
    inorder(root->right);//right
}

void postorder(Node* root){
    if(root==NULL) return;//base case
    postorder(root->left);//left
    postorder(root->right);//right
    cout<<root->val<<" ";//root
}

void nthLevel(Node* root,int curr,int level){
    if(root==NULL) return;//base case
    if(curr==level){
        cout<<root->val<<" ";//root
        return;
    }
    nthLevel(root->left,curr+1,level);//left
    nthLevel(root->right,curr+1,level);//right
}

void nthLevelRev(Node* root,int curr,int level){
    if(root==NULL) return;//base case
    if(curr==level){
        cout<<root->val<<" ";//root
        return;
    }
    nthLevelRev(root->right,curr+1,level);//right
    nthLevelRev(root->left,curr+1,level);//left
}

int level(Node* root){
    if(root==NULL) return 0;//base case
    return 1 + max(level(root->left),level(root->right));
}

void levelOrder(Node* root){
    int n=level(root);
    for(int i=0;i<n;i++){
        nthLevel(root,0,i);
        cout<<endl;
    }
}


//BREADTH FIRST SEARCH
void levelOrderQueue(Node* root){//BFS
    queue<Node*> q;
    q.push(root);
    while(q.size()>0){
        Node* temp=q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left !=NULL) q.push(temp->left);
        if(temp->right !=NULL) q.push(temp->right);
    }
    cout<<endl;
}

void levelOrderQueueRev(Node* root){
    queue<Node*> q;
    q.push(root);
    while(q.size()>0){
        Node* temp=q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->right !=NULL) q.push(temp->right);
        if(temp->left !=NULL) q.push(temp->left);
    }
    cout<<endl;
}

int main(){
    Node* a =new Node(1);
    Node* b =new Node(2);
    Node* c =new Node(3);
    Node* d =new Node(4);
    Node* e =new Node(5);
    Node* f =new Node(6);
    Node* g =new Node(7);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    // preorder(a);
    // cout<<endl;
    // inorder(a);
    // cout<<endl;
    // postorder(a);
    // cout<<endl;
    // nthLevel(a,0,2);//also start it with 1
    cout<<endl;
    // levelOrder(a);
    levelOrderQueue(a);
    levelOrderQueueRev(a);
}





//LEVEL ORDER TRAVERSAL USING QUEUE(BFS)
  