//144. Binary Tree Preorder Traversal

// Given the root of a binary tree, return the preorder traversal of its nodes' values.

// Example 1:

// Input: root = [1,null,2,3]

// Output: [1,2,3]

// PREORDER TRAVERSAL(ITERATIVE)

// class Solution {
// public:
//     vector<int> preorderTraversal(TreeNode* root) {    
//     vector<int> ans;
//         stack<TreeNode*> st;
//         if(root!=NULL) st.push(root);
//         while(st.size()>0){
//             TreeNode* temp = st.top();
//             st.pop();
//             ans.push_back(temp->val);
//             if(temp->right) st.push(temp->right);
//             if(temp->left) st.push(temp->left);
//         }
//         return ans;
//     }
// };



// //alt


// // class Solution {
// // public:
// //     void preOrder(TreeNode* root,vector<int> &ans){
// //         if(root==NULL) return;
// //         ans.push_back(root->val);
// //         preOrder(root->left,ans);
// //         preOrder(root->right,ans);
// //     }
// //     vector<int> preorderTraversal(TreeNode* root) {
// //         vector<int> ans;
// //         preOrder(root,ans);
// //         return ans;
// //     }
// // };




//POSTORDER TRAVERSAL(ITERATIVE)

// class Solution {
// public:
//     vector<int> postorderTraversal(TreeNode* root) {
//      vector<int> ans;
//         stack<TreeNode*> st;
//         if(root!=NULL) st.push(root);
//         while(st.size()>0){
//             TreeNode* temp = st.top();
//             st.pop();
//             ans.push_back(temp->val);
//             if(temp->left) st.push(temp->left);
//             if(temp->right) st.push(temp->right);
//         }
//         reverse(ans.begin(),ans.end());
//         return ans;
//     }
// };



// // class Solution {
// // public:
// //     void postOrder(TreeNode* root,vector<int> &ans){
// //         if(root==NULL) return;
// //         postOrder(root->left,ans);
// //         postOrder(root->right,ans);
// //         ans.push_back(root->val);
// //     }
// //     vector<int> postorderTraversal(TreeNode* root) {
        
// //         vector<int> ans;
// //         postOrder(root,ans);
// //         return ans;
// //     }
// // };


// INORDER TRAVERSAL(ITERATIVE)



// class Solution {
// public:
//     vector<int> inorderTraversal(TreeNode* root) {
//         vector<int> ans;
//         stack<TreeNode*> st;
//         TreeNode* node =root;
//         while(st.size()>0 || node){
//             if(node){
//                 st.push(node);
//                 node=node->left;
//             }else{
//                 TreeNode* temp =st.top();
//                 st.pop();
//                 ans.push_back(temp->val);
//                 node =temp->right;
//             }
//         }
//         return ans;
//     }
// };


// //alternative

// // class Solution {
// // public:
// //     void inOrder(TreeNode* root,vector<int> &ans){
// //         if(root==NULL) return;
// //         inOrder(root->left,ans);
// //         ans.push_back(root->val);
// //         inOrder(root->right,ans);
// //     }
// //     vector<int> inorderTraversal(TreeNode* root) {
// //         vector<int> ans;
// //         inOrder(root,ans);
// //         return ans;
// //     }
// // };


//VIEWS OF TREES

//BOUNDARY TRAVERSAL
#include <iostream>
#include <vector>
#include <queue>
#include <climits>
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

Node* construct(int arr[],int n){
    queue<Node*> q;
    Node* root = new Node(arr[0]);
    q.push(root);
    int i=1;
    int j=2;
    while(q.size()>0 && i<n){
        Node* temp =q.front();
        q.pop();
        Node* l;
        Node* r;
        if(arr[i]!=INT_MIN) l = new Node(arr[i]);
        else l=NULL;
        if(j!=n && arr[j]!=INT_MIN) r = new Node(arr[j]);
        else r=NULL;

        temp->left = l;
        temp->right = r;

        if(l!=NULL) q.push(l);
        if(r!=NULL) q.push(r);
        
        i+=2;
        j+=2;
    }
    return root;
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

void leftBoundary(Node* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) return;
    cout<<root->val<<" ";
    leftBoundary(root->left);
    if(root->left==NULL) leftBoundary(root->right);
}
void bottomBoundary(Node* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) cout<<root->val<<" ";
    bottomBoundary(root->left);
    bottomBoundary(root->right);
}

void rightBoundary(Node* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) return;
    rightBoundary(root->right);
    if(root->right==NULL) rightBoundary(root->left);
    cout<<root->val<<" ";//call ke baad wala kaam for reversing it
}

void boundary(Node* root){
     leftBoundary(root);
    bottomBoundary(root);
    rightBoundary(root->right);
}

int main(){
    int arr[]={1, 
    2, 3, 
    4, 5, INT_MIN, 6, 
    7, INT_MIN, 8, INT_MIN, 9, 10, INT_MIN, 
    11, INT_MIN, 12, INT_MIN, 13, INT_MIN, 14, 
    15, 16,INT_MIN,  17,INT_MIN, INT_MIN, 18, INT_MIN, 
    19, INT_MIN, INT_MIN, INT_MIN, 20, 21, 22, 23, 
    INT_MIN, 24, 25, 26, 27, INT_MIN, INT_MIN,28,INT_MIN,INT_MIN,
};
    int n = sizeof(arr)/sizeof(arr[0]);
    Node* root  = construct(arr,n);
   boundary(root);
    // levelOrder(root);
   
}



