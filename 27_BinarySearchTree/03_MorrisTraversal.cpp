//IN/PRE/POST = RECURSIVE/ITERATIVE  T.C=O(N)  S.C=O(N)  (RECURSION STACK SPACE)


// MORRIS TRAVERSAL = INORDER TRAVERSAL


// ==>Iterative Inorder Traversal => S.c=O(1)  T.C=O(N)  (NO STACK SPACE)


/*
 *           Morris Traversal Tree
 *           --------------------
 *
 *                   (10)
 *                  /    \
 *                 /      \
 *               (5)      (15)
 *              /   \     /   \
 *            (3)   (8) (12)  (20)
 *                  /     \
 *                (6)     (13)
 *
 */


 //
 
// 94. Binary Tree Inorder Traversal Using  Morris Traversal

// Given the root of a binary tree, return the inorder traversal of its nodes' values.

 

// Example 1:

// Input: root = [1,null,2,3]
// Output: [1,3,2]


//  class Solution {
// public:
//     vector<int> inorderTraversal(TreeNode* root) {
//         vector<int> ans;
//         TreeNode* curr = root;
        
//         while (curr != NULL) {
//             if (curr->left != NULL) {
//                 TreeNode* pred = curr->left;
                
//                 while (pred->right != NULL && pred->right != curr) {
//                     pred = pred->right;
//                 }
                
//                 if (pred->right == NULL) { // Link
//                     pred->right = curr;
//                     curr = curr->left;
//                 } else { // pred->right == curr : Unlink
//                     pred->right = NULL;
//                     ans.push_back(curr->val);
//                     curr = curr->right;
//                 }
//             } else {
//                 ans.push_back(curr->val);
//                 curr = curr->right;
//             }            
//         }
//         return ans;
//     }
// };