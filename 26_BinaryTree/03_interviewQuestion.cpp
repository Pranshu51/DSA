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
// class Node{//This is a tree node
// public:    
//     int val;
//     Node* left;
//     Node* right;
//     Node(int val){
//         this->val=val;
//         this->left=NULL;
//         this->right=NULL;
//     }
// };

// Node* construct(int arr[],int n){
//     queue<Node*> q;
//     Node* root = new Node(arr[0]);
//     q.push(root);
//     int i=1;
//     int j=2;
//     while(q.size()>0 && i<n){
//         Node* temp =q.front();
//         q.pop();
//         Node* l;
//         Node* r;
//         if(arr[i]!=INT_MIN) l = new Node(arr[i]);
//         else l=NULL;
//         if(j!=n && arr[j]!=INT_MIN) r = new Node(arr[j]);
//         else r=NULL;

//         temp->left = l;
//         temp->right = r;

//         if(l!=NULL) q.push(l);
//         if(r!=NULL) q.push(r);
        
//         i+=2;
//         j+=2;
//     }
//     return root;
// }

// void nthLevel(Node* root,int curr,int level){
//     if(root==NULL) return;//base case
//     if(curr==level){
//         cout<<root->val<<" ";//root
//         return;
//     }
//     nthLevel(root->left,curr+1,level);//left
//     nthLevel(root->right,curr+1,level);//right
// }

// int level(Node* root){
//     if(root==NULL) return 0;//base case
//     return 1 + max(level(root->left),level(root->right));
// }

// void levelOrder(Node* root){
//     int n=level(root);
//     for(int i=0;i<n;i++){
//         nthLevel(root,0,i);
//         cout<<endl;
//     }
// }

// void leftBoundary(Node* root){
//     if(root==NULL) return;
//     if(root->left==NULL && root->right==NULL) return;
//     cout<<root->val<<" ";
//     leftBoundary(root->left);
//     if(root->left==NULL) leftBoundary(root->right);
// }
// void bottomBoundary(Node* root){
//     if(root==NULL) return;
//     if(root->left==NULL && root->right==NULL) cout<<root->val<<" ";
//     bottomBoundary(root->left);
//     bottomBoundary(root->right);
// }

// void rightBoundary(Node* root){
//     if(root==NULL) return;
//     if(root->left==NULL && root->right==NULL) return;
//     rightBoundary(root->right);
//     if(root->right==NULL) rightBoundary(root->left);
//     cout<<root->val<<" ";//call ke baad wala kaam for reversing it
// }

// void boundary(Node* root){
//      leftBoundary(root);
//     bottomBoundary(root);
//     rightBoundary(root->right);
// }

// int main(){
//     int arr[]={1, 
//     2, 3, 
//     4, 5, INT_MIN, 6, 
//     7, INT_MIN, 8, INT_MIN, 9, 10, INT_MIN, 
//     11, INT_MIN, 12, INT_MIN, 13, INT_MIN, 14, 
//     15, 16,INT_MIN,  17,INT_MIN, INT_MIN, 18, INT_MIN, 
//     19, INT_MIN, INT_MIN, INT_MIN, 20, 21, 22, 23, 
//     INT_MIN, 24, 25, 26, 27, INT_MIN, INT_MIN,28,INT_MIN,INT_MIN,
// };
//     int n = sizeof(arr)/sizeof(arr[0]);
//     Node* root  = construct(arr,n);
//    boundary(root);
//     // levelOrder(root);
   
// }



// 199. Binary Tree Right Side View

// Given the root of a binary tree, imagine yourself standing on the right side of it, return the values of the nodes you can see ordered from top to bottom.


// Example 1:

// Input: root = [1,2,3,null,5,null,4]

// Output: [1,3,4]

// class Solution {
// public:
//     void rightViewHelper(TreeNode* root, int level, vector<int> &ans) {
//         if(root == NULL) return;
        
//         // If this is the first time we're visiting this depth level, 
//         // it must be the rightmost element because we visit right side first.
//         if(level == ans.size()) {
//             ans.push_back(root->val);
//         }
        
//         // Traverse right side first, then left side
//         rightViewHelper(root->right, level + 1, ans);
//         rightViewHelper(root->left, level + 1, ans);
//     }
    
//     vector<int> rightSideView(TreeNode* root) {
//         vector<int> ans;
//         rightViewHelper(root, 0, ans);
//         return ans;
//     }
// };




//alternate

// class Solution {
// public:
//     int level(TreeNode* root){
//         if(root==NULL) return 0;
//         return 1+max(level(root->left),level(root->right));
//     }
//     void levelTraversal(TreeNode* root,int curr,int target, vector<int> &ans){
//         if(root==NULL) return;
//         if(curr==target){
//             ans[curr]=root->val;
//             return;
//         }
//         levelTraversal(root->left,curr+1,target,ans);
//         levelTraversal(root->right,curr+1,target,ans);
//     }
//     void nthOrder(TreeNode* root,vector<int> &ans){
//         int n =ans.size();
//         for(int i=0;i<n;i++){
//             levelTraversal(root,0,i,ans);
//         }
//     }
//     vector<int> rightSideView(TreeNode* root) {
//         vector<int> ans(level(root),0);
//         nthOrder(root,ans);
//         return ans;
//     }
// };



//OR

// class Solution {
// public:
//     int level(TreeNode* root){
//         if(root==NULL) return 0;
//         return 1+max(level(root->left),level(root->right));
//     }
//     void preOrder(TreeNode* root, vector<int> &ans,int level){
//         if(root==NULL) return;
//         ans[level]=root->val;         
//         preOrder(root->left,ans,level+1);
//         preOrder(root->right,ans,level+1);
//     }
  
//     vector<int> rightSideView(TreeNode* root) {
//         vector<int> ans(level(root),0);
//         preOrder(root,ans,0);
//         return ans;
//     }
// };



// 113. Path Sum II

// Given the root of a binary tree and an integer targetSum, return all root-to-leaf paths where the sum of the node values in the path equals targetSum. Each path should be returned as a list of the node values, not node references.
// A root-to-leaf path is a path starting from the root and ending at any leaf node. A leaf is a node with no children.

// Example 1:
// Input: root = [5,4,8,11,null,13,4,7,2,null,null,5,1], targetSum = 22
// Output: [[5,4,11,2],[5,8,4,5]]
// Explanation: There are two paths whose sum equals targetSum:
// 5 + 4 + 11 + 2 = 22
// 5 + 8 + 4 + 5 = 22


// class Solution {
// public:
//     void helper(TreeNode* root,vector<int> v, vector<vector<int>> &ans,int targetSum){
//         if(root==NULL) return;
//         if(root->left==NULL && root->right==NULL){
//             if(root->val==targetSum){
//              v.push_back(root->val);
//             ans.push_back(v);
//             }
//             return;
//         }
//         v.push_back(root->val);
//         helper(root->left,v,ans,targetSum-(root->val));
//         helper(root->right,v,ans,targetSum-(root->val));
//     }
//     vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
//          vector<vector<int>> ans;
//          vector<int> v;
//          helper(root,v,ans,targetSum);
//          return ans;
//     }
// };