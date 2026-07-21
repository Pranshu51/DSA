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