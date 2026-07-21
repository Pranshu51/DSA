// 700. Search in a Binary Search Tree

// Find the node in the BST that the node's value equals val and return the subtree rooted with that node. If such a node does not exist, return null.

// Example 1:
// Input: root = [4,2,7,1,3], val = 2
// Output: [2,1,3]

// class Solution {
// public:
//     TreeNode* searchBST(TreeNode* root, int val) {
//         if(root==NULL || root->val==val)  return root;
//         else if(root->val>val) return searchBST(root->left,val);
//         else  return searchBST(root->right,val);
//     }
// };

// //or
// class Solution {
// public:
//     TreeNode* searchBST(TreeNode* root, int val) {
//         if(root==NULL)  return NULL;
//         else if(root->val==val) return root;
//         else if(root->val>val) return searchBST(root->left,val);
//         else  return searchBST(root->right,val);
//     }
// };



// 701. Insert into a Binary Search Tree

// You are given the root node of a binary search tree (BST) and a value to insert into the tree. Return the root node of the BST after the insertion. It is guaranteed that the new value does not exist in the original BST.
// Notice that there may exist multiple valid ways for the insertion, as long as the tree remains a BST after insertion. You can return any of them.

// Example 1:
 
// class Solution {
// public:
//     TreeNode* insertIntoBST(TreeNode* root, int val) {
//         if(root==NULL) return new TreeNode(val);
//         else if(root->val>val){
//             if(root->left==NULL) root->left =new TreeNode(val); //or TreeNode* temp = new TreeNode(val); root->left=temp; 
//             else  insertIntoBST(root->left,val);
//         }
//         else if(root->val<val){
//             if(root->right==NULL) root->right =new TreeNode(val); //or TreeNode* temp = new TreeNode(val); root->right=temp;
//             else  insertIntoBST(root->right,val);
//         }
//         return root;
//     }
// };

//or

// class Solution {
// public:
//     void insert(TreeNode*& root, int val){
//         if(root==NULL){
//              root =new TreeNode(val);
//              return;
//         }
//         else if(root->val>val){
//             if(root->left==NULL) root->left =new TreeNode(val); 
//             else  insertIntoBST(root->left,val);
//         }
//         else if(root->val<val){
//             if(root->right==NULL) root->right =new TreeNode(val); 
//             else  insertIntoBST(root->right,val);
//         }
//     }
//     TreeNode* insertIntoBST(TreeNode* root, int val) {
//         insert(root,val);
//         return root;
//     }
// };



// 235. Lowest Common Ancestor of a Binary Search Tree

// Given a binary search tree (BST), find the lowest common ancestor (LCA) node of two given nodes in the BST.
// According to the definition of LCA on Wikipedia: “The lowest common ancestor is defined between two nodes p and q as the lowest node in T that has both p and q as descendants (where we allow a node to be a descendant of itself).”

 

// Example 1:
// Input: root = [6,2,8,0,4,7,9,null,null,3,5], p = 2, q = 8
// Output: 6
// Explanation: The LCA of nodes 2 and 8 is 6.

// class Solution {
// public:
//     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//         if(root->val==p->val|| root->val==q->val) return root;
//         else if(root->val>p->val && root->val<q->val) return root;
//         else if(root->val<p->val && root->val>q->val) return root;
//         else if(root->val<p->val && root->val<q->val) return lowestCommonAncestor(root->right,p,q);
//         return lowestCommonAncestor(root->left,p,q);

//     }
// };


//or
// class Solution {
// public:
//     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//         if(root->val<p->val && root->val<q->val) return lowestCommonAncestor(root->right,p,q);
//         else if(root->val>p->val && root->val>q->val) return lowestCommonAncestor(root->left,p,q);
//         else return root;
//     }
// };



// 98. Validate Binary Search Tree

// Given the root of a binary tree, determine if it is a valid binary search tree (BST).
// A valid BST is defined as follows:
// The left subtree of a node contains only nodes with keys strictly less than the node's key.
// The right subtree of a node contains only nodes with keys strictly greater than the node's key.
// Both the left and right subtrees must also be binary search trees.
 
// Example 1:
// Input: root = [2,1,3]
// Output: true

//max method (Not that much good as it is not optimized and we are traversing the tree multiple times)

// class Solution {
// public:
//     long long maxTree(TreeNode* root){
//         if(root==NULL) return LLONG_MIN;
//         else return max((long long)(root->val),max(maxTree(root->left),maxTree(root->right)));
//     }
//     long long minTree(TreeNode* root){
//         if(root==NULL) return LLONG_MAX;
//         else return min((long long)(root->val),min(minTree(root->left),minTree(root->right)));
//     }
//     bool isValidBST(TreeNode* root) {
//         if(root==NULL) return true;
//         if((long long)(root->val) <= maxTree(root->left)) return false;
//         if((long long)(root->val) >= minTree(root->right)) return false;
//         return isValidBST(root->left) && isValidBST(root->right);
//     }
// };

//or

// 98. Validate Binary Search Tree

// Given the root of a binary tree, determine if it is a valid binary search tree (BST).
// A valid BST is defined as follows:
// The left subtree of a node contains only nodes with keys strictly less than the node's key.
// The right subtree of a node contains only nodes with keys strictly greater than the node's key.
// Both the left and right subtrees must also be binary search trees.
 

// Example 1:
// Input: root = [2,1,3]
// Output: true


// class Solution {
// public:
//     void inorder(TreeNode* root, vector<int> &ans){
//         if(root==NULL) return;
//         inorder(root->left,ans);
//         ans.push_back(root->val);
//         inorder(root->right,ans);
//     }   
//     bool isValidBST(TreeNode* root) {
//         vector<int> ans;
//         inorder(root,ans);
//         for(int i=1;i<ans.size();i++){
//             if(ans[i]<=ans[i-1]) return false;
//         }
//         return true;
        
//     }
// };

//or
// class Solution {
// public:
    
//     void inorder(TreeNode* root,TreeNode* &prev, bool& flag){
//         if(root==NULL) return;
//         inorder(root->left,prev,flag);
//         if(prev!=NULL){
//             if(root->val<=prev->val){
//                 flag=false;
//                 return;
//             }
//         }
//         prev=root;
//         inorder(root->right,prev,flag);
//     }   
//     bool isValidBST(TreeNode* root) {
//         TreeNode* prev =NULL;
//         bool flag =true;
//         inorder(root,prev,flag);     
//         return flag;
        
//     }
// };



// 1038. Binary Search Tree to Greater Sum Tree

// Given the root of a Binary Search Tree (BST), convert it to a Greater Tree such that every key of the original BST is changed to the original key plus the sum of all keys greater than the original key in BST.

// As a reminder, a binary search tree is a tree that satisfies these constraints:

// The left subtree of a node contains only nodes with keys less than the node's key.
// The right subtree of a node contains only nodes with keys greater than the node's key.
// Both the left and right subtrees must also be binary search trees.
 

// Example 1
// Input: root = [4,1,6,0,2,5,7,null,null,null,3,null,null,null,8]
// Output: [30,36,21,36,35,26,15,null,null,null,33,null,null,null,8]

// class Solution {
// public:
//     int sum=0;
//     void reverseInorder(TreeNode* root){
//         if(root==NULL) return;
//         reverseInorder(root->right);
//         root->val+=sum;
//         sum=root->val;
//         reverseInorder(root->left);
//     }
//     TreeNode* bstToGst(TreeNode* root) {
//         reverseInorder(root);
//         return root;
//     }
// };