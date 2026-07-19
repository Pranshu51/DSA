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

