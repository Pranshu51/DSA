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





// 114. Flatten Binary Tree to Linked List

// Given the root of a binary tree, flatten the tree into a "linked list":

// The "linked list" should use the same TreeNode class where the right child pointer points to the next node in the list and the left child pointer is always null.
// The "linked list" should be in the same order as a pre-order traversal of the binary tree.
 
// Example 1:
// Input: root = [1,2,5,3,4,null,6]
// Output: [1,null,2,null,3,null,4,null,5,null,6]


// class Solution {
// public:
//     vector<TreeNode*> preorderTraversal(TreeNode* root) {
//         vector<TreeNode*> ans;
//         stack<TreeNode*> st;
//         if (root != NULL) st.push(root);
//         while (st.size() > 0) {
//             TreeNode* temp = st.top();
//             st.pop();
//             ans.push_back(temp);
//             if (temp->right != NULL) st.push(temp->right);
//             if (temp->left != NULL) st.push(temp->left);
//         }
//         return ans;
//     }

//     void flatten(TreeNode* root) {
//         vector<TreeNode*> ans = preorderTraversal(root);
//         int n = ans.size();
//         for (int i = 0; i < n - 1; i++) {
//             ans[i]->right = ans[i + 1];
//             ans[i]->left = NULL;
//         }
//     }
// };


//or
// class Solution {
// private:
//     void helperPreorder(TreeNode* root, vector<TreeNode*>& nodes) {
//         if (root == NULL) return;
        
//         nodes.push_back(root);              // Root
//         helperPreorder(root->left, nodes);  // Left
//         helperPreorder(root->right, nodes); // Right
//     }

// public:
//     void flatten(TreeNode* root) {
//         vector<TreeNode*> nodes;
//         helperPreorder(root, nodes);
        
//         int n = nodes.size();
//         for (int i = 0; i < n - 1; i++) {
//             nodes[i]->left = NULL;
//             nodes[i]->right = nodes[i + 1];
//         }
//     }
// };