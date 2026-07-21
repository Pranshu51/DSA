


// 543. Diameter of Binary Tree

// Given the root of a binary tree, return the length of the diameter of the tree.
// The diameter of a binary tree is the length of the longest path between any two nodes in a tree. This path may or may not pass through the root.
// The length of a path between two nodes is represented by the number of edges between them.
//  Example 1:
// Input: root = [1,2,3,4,5]
// Output: 3
// Explanation: 3 is the length of the path [4,2,1,3] or [5,2,1,3].

// //bad approach as we have made global varible


// class Solution {
// public:
//     int maxDia=0;
//     int level(TreeNode* root){
//         if(root==NULL) return 0;
//         return 1+ max(level(root->left),level(root->right));
//     }
//     int diameterOfBinaryTree(TreeNode* root) {
//         if(root==NULL) return 0;
//         int dia = level(root->left) +level(root->right);
//         maxDia=max(maxDia,dia);
//         diameterOfBinaryTree(root->left);
//         diameterOfBinaryTree(root->right);
//         return maxDia;

//     }
// };

// //very bad same as above

// class Solution {
// public:
//     int maxDia=0;
//     int helper(TreeNode* root){
//          if(root==NULL) return 0;
//         int dia = level(root->left) +level(root->right);
//         maxDia=max(maxDia,dia);
//         helper(root->left);
//         helper(root->right);
//         return maxDia;
//     }
//     int level(TreeNode* root){
//         if(root==NULL) return 0;
//         return 1+ max(level(root->left),level(root->right));
//     }
//     int diameterOfBinaryTree(TreeNode* root) {
//        maxDia=0;//reinitialized
//        return helper(root);

//     }
// };


// //GOOD METHOD ELIMINATION OF GLOBAL VARIABLE

// class Solution {
// public:
//     void helper(TreeNode* root,int &maxDia){
//          if(root==NULL) return;
//         int dia = level(root->left) +level(root->right);
//         maxDia=max(maxDia,dia);
//         helper(root->left,maxDia);
//         helper(root->right,maxDia);
//     }
//     int level(TreeNode* root){
//         if(root==NULL) return 0;
//         return 1+ max(level(root->left),level(root->right));
//     }
//     int diameterOfBinaryTree(TreeNode* root) {
//        int maxDia=0;
//      helper(root,maxDia);
//         return maxDia;

//     }
// };









//100. Same Tree

// Given the roots of two binary trees p and q, write a function to check if they are the same or not.
// Two binary trees are considered the same if they are structurally identical, and the nodes have the same value.

// Example 1:
// Input: p = [1,2,3], q = [1,2,3]
// Output: true

// class Solution {
// public:
//     bool isSameTree(TreeNode* p, TreeNode* q) {
//         if(p==NULL && q==NULL) return true;
//         if(p==NULL && q!=NULL) return false;
//         if(p!=NULL && q==NULL) return false;

//         if(p->val!=q->val) return false;
        
//         bool leftAns = isSameTree(p->left,q->left);
//         if(leftAns==false) return false;

//         bool rightAns = isSameTree(p->right,q->right);
//         if(rightAns==false) return false;

//         return true;
//     }
// };


// //little tweak

// class Solution {
// public:
//     bool isSameTree(TreeNode* p, TreeNode* q) {
//         if(p==NULL && q==NULL) return true;
//         if(p==NULL || q==NULL) return false;

//         if(p->val!=q->val) return false;

//         bool leftAns = isSameTree(p->left,q->left);
//         if(leftAns==false) return false;

//         bool rightAns = isSameTree(p->right,q->right);
//         if(rightAns==false) return false;

//         return true;
//     }
// };






// 226. Invert Binary Tree

// Given the root of a binary tree, invert the tree, and return its root.

// Example 1:

// Input: root = [4,2,7,1,3,6,9]
// Output: [4,7,2,9,6,3,1]



// class Solution {
// public:
//     void helper(TreeNode* root){
//         if(root==NULL) return;
//         TreeNode* temp = root->left;
//         root->left=root->right;
//         root->right=temp;
//         helper(root->left);//swapping hume har node ke lie karni h
//         helper(root->right);
//     }
//     TreeNode* invertTree(TreeNode* root) {
//         helper(root);
//         return root;
//     }
// };

// //in same function

// class Solution {
// public:
//     TreeNode* invertTree(TreeNode* root) {
//          if(root==NULL) return NULL;
//         TreeNode* temp = root->left;
//         root->left=root->right;
//         root->right=temp;
//         invertTree(root->left);//swapping hume har node ke lie karni h
//         invertTree(root->right);
//         return root;
//     }
// };



// 257. Binary Tree Paths

// Given the root of a binary tree, return all root-to-leaf paths in any order.

// A leaf is a node with no children.

//  Input: root = [1,2,3,null,5]
// Output: ["1->2->5","1->3"]

// Example 1:

// class Solution {
// public:
//     void helper(TreeNode* root,string s,vector<string> &ans){
//         if(root==NULL) return;
//         string a = to_string(root->val);
//         if(root->left==NULL && root->right==NULL){
//             s+=a;
//             ans.push_back(s);
//             return;
//         }
//         helper(root->left,s+a+"->",ans);
//         helper(root->right,s+a+"->",ans);
//     }
//     vector<string> binaryTreePaths(TreeNode* root) {
//         vector<string> ans;
//         helper(root,"",ans);
//         return ans;
//     }
// };





// 236. Lowest Common Ancestor of a Binary Tree

// Given a binary tree, find the lowest common ancestor (LCA) of two given nodes in the tree.
// According to the definition of LCA on Wikipedia: “The lowest common ancestor is defined between two nodes p and q as the lowest node in T that has both p and q as descendants (where we allow a node to be a descendant of itself).”

// Example 1:
// Input: root = [3,5,1,6,2,0,8,null,null,7,4], p = 5, q = 1
// Output: 3
// Explanation: The LCA of nodes 5 and 1 is 3.




// class Solution {
// public:
//     bool exists(TreeNode* root,TreeNode* target){
//         if(root==NULL) return false;
//         if(root==target) return true;
//         return exists(root->left,target) || exists(root->right,target);
//     }
//     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//         if(root==p || root==q) return root;
//         else if(exists(root->left,p) && exists(root->right,q)) return root;
//         else if(exists(root->left,q) && exists(root->right,p)) return root;
//         else if(exists(root->left,p) && exists(root->left,q)) return lowestCommonAncestor(root->left,p,q);
//         else return lowestCommonAncestor(root->right,p,q);
//     }
// };

//OR little small

// class Solution {
// public:
//     bool exists(TreeNode* root,TreeNode* target){
//         if(root==NULL) return false;
//         if(root==target) return true;
//         return exists(root->left,target) || exists(root->right,target);
//     }
//     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//         if(exists(root->left,p) && exists(root->left,q)) return lowestCommonAncestor(root->left,p,q);
//         else if(exists(root->right,p) && exists(root->right,q)) return lowestCommonAncestor(root->right,p,q);
//         return root;
//     }
// };







//LECTURE 2


// 144. Binary Tree Preorder Traversal

// Given the root of a binary tree, return the preorder traversal of its nodes' values.

 

// Example 1:

// Input: root = [1,null,2,3]

// Output: [1,2,3]





// class Solution {
// public:
//     void preOrder(TreeNode* root,vector<int> &ans){
//         if(root==NULL) return;
//         ans.push_back(root->val);
//         preOrder(root->left,ans);
//         preOrder(root->right,ans);
//     }
//     vector<int> preorderTraversal(TreeNode* root) {
//         vector<int> ans;
//         preOrder(root,ans);
//         return ans;
//     }
// };





// 94. Binary Tree Inorder Traversal

// Given the root of a binary tree, return the inorder traversal of its nodes' values.

 

// Example 1:

// Input: root = [1,null,2,3]

// Output: [1,3,2]

// class Solution {
// public:
//     void inOrder(TreeNode* root,vector<int> &ans){
//         if(root==NULL) return;
//         inOrder(root->left,ans);
//         ans.push_back(root->val);
//         inOrder(root->right,ans);
//     }
//     vector<int> inorderTraversal(TreeNode* root) {
//         vector<int> ans;
//         inOrder(root,ans);
//         return ans;
//     }
// };









// 145. Binary Tree Postorder Traversal

// Given the root of a binary tree, return the postorder traversal of its nodes' values.

 

// Example 1:

// Input: root = [1,null,2,3]

// Output: [3,2,1]


// class Solution {
// public:
//     void postOrder(TreeNode* root,vector<int> &ans){
//         if(root==NULL) return;
//         postOrder(root->left,ans);
//         postOrder(root->right,ans);
//         ans.push_back(root->val);
//     }
//     vector<int> postorderTraversal(TreeNode* root) {
//         vector<int> ans;
//         postOrder(root,ans);
//         return ans;
//     }
// };





// 102. Binary Tree Level Order Traversal

// Given the root of a binary tree, return the level order traversal of its nodes' values. (i.e., from left to right, level by level).

// Example 1:

// Input: root = [3,9,20,null,null,15,7]
// Output: [[3],[9,20],[15,7]]


// class Solution {
// public:
//     int level(TreeNode* root){
//         if(root==NULL) return 0;
//         return 1 + max(level(root->left),level(root->right));
//     }
//     void nthLevel(TreeNode* root,int current,int targetlevel,vector<int> &v){
//         if(root==NULL) return;
//         if(current==targetlevel){
//             v.push_back(root->val);
//             return;
//         }
//         nthLevel(root->left,current+1,targetlevel,v);
//         nthLevel(root->right,current+1,targetlevel,v);
//     }
//     void lOrder(TreeNode* root,vector<vector<int>> &ans){
//         int n =level(root);
//         for(int i=1;i<=n;i++){
//             vector<int> v;
//             nthLevel(root,1,i,v);
//             ans.push_back(v);
//             cout<<endl;
//         }
//     }
//     vector<vector<int>> levelOrder(TreeNode* root) {
//         vector<vector<int>> ans;
//         lOrder(root,ans);
//         return ans;
//     }
// };


//alternate


// class Solution {
// public:
//     int levels(TreeNode* root){
//         if(root==NULL) return 0;
//         return 1 + max(levels(root->left), levels(root->right));
//     }
    
//     void lOrder(TreeNode* root, vector<vector<int>>& ans, int level){
//         if(root==NULL) return;
//         ans[level].push_back(root->val);
//         lOrder(root->left, ans, level+1);
//         lOrder(root->right, ans, level+1);
//     }
    
//     vector<vector<int>> levelOrder(TreeNode* root) {
//         int n = levels(root);
//         vector<vector<int>> ans;
//         for(int i=1;i<=n;i++){
//             vector<int> v;
//             ans.push_back(v);
//         }
//         lOrder(root,ans,0);
//         return ans;
//     }
// };







// 103. Binary Tree Zigzag Level Order Traversal

// Given the root of a binary tree, return the zigzag level order traversal of its nodes' values. (i.e., from left to right, then right to left for the next level and alternate between).

// Example 1:
// Input: root = [3,9,20,null,null,15,7]
// Output: [[3],[20,9],[15,7]]


// class Solution {
// public:
//     int levels(TreeNode* root){
//         if(root==NULL) return 0;
//         return 1+ max(levels(root->left),levels(root->right));
//     }
//     void nthLevel(TreeNode* root,int curr,int target,vector<int> &v){
//         if(root==NULL) return;
//         if(curr==target){
//             v.push_back(root->val);
//             return;
//         }
//         if(target%2!=0){//odd
//         nthLevel(root->left,curr+1,target,v);
//         nthLevel(root->right,curr+1,target,v);
//         }else{//even
//         nthLevel(root->right,curr+1,target,v);
//         nthLevel(root->left,curr+1,target,v);
//         }
//     }
//     void ZigzagTraversal(TreeNode* root,vector<vector<int>> &ans){
//         int n=levels(root);
//         for(int i=1;i<=n;i++){
//             vector<int> v;
//             nthLevel(root,1,i,v);
//             ans.push_back(v);
//             cout<<endl;
//         }
//     }
//     vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
//         vector<vector<int>> ans;
//         ZigzagTraversal(root,ans);
//         return ans;
//     }
// };











// 107. Binary Tree Level Order Traversal II

// Given the root of a binary tree, return the bottom-up level order traversal of its nodes' values. (i.e., from left to right, level by level from leaf to root).

// Example 1:

// class Solution {
// public:
//     int level(TreeNode* root){
//         if(root== NULL) return 0;
//         return 1+max(level(root->left), level(root->right));
//     }
//     void nthOrder(TreeNode* root,int curr,int target,vector<int> &v){
//         if(root==NULL) return;
//         if(curr==target){
//             v.push_back(root->val);
//             return;
//         }
//         nthOrder(root->left,curr+1,target,v);
//         nthOrder(root->right,curr+1,target,v);
//     }
//     void levelTraversal(TreeNode* root,vector<vector<int>> &ans){
//         int n=level(root);
//         for(int i=n;i>=1;i--){
//             vector<int> v;
//             nthOrder(root,1,i,v);
//             ans.push_back(v);
//             cout<<endl;
//         }
//     }
//     vector<vector<int>> levelOrderBottom(TreeNode* root) {
//         vector<vector<int>> ans;
//         levelTraversal(root,ans);
//         return ans;
//     }
// };

// //alternate

// class Solution {
// public:
//     int level(TreeNode* root){
//         if(root==NULL) return 0;
//         return 1 + max(level(root->left),level(root->right));
//     }
//     void nthLevel(TreeNode* root,int current,int targetlevel,vector<int> &v){
//         if(root==NULL) return;
//         if(current==targetlevel){
//             v.push_back(root->val);
//             return;
//         }
//         nthLevel(root->left,current+1,targetlevel,v);
//         nthLevel(root->right,current+1,targetlevel,v);
//     }
//     void lOrder(TreeNode* root,vector<vector<int>> &ans){
//         int n =level(root);
//         for(int i=1;i<=n;i++){
//             vector<int> v;
//             nthLevel(root,1,i,v);
//             ans.push_back(v);
//             cout<<endl;
//         }
//     }
//     vector<vector<int>> levelOrderBottom(TreeNode* root) {
//         vector<vector<int>> ans;
//         lOrder(root,ans);
//         reverse(ans.begin(),ans.end());
//         return ans;
//     }
// };