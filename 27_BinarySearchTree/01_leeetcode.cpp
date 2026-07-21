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