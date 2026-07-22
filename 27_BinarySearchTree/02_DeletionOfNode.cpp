// INORDER PREDECESSOR AND SUCCESSOR FOR A GIVEN KEY IN BST
//HOw to find inOrder predecessor :
//1.Go left once and then keep going right until you reach the end of the tree.
// code:

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};


//Inorder successor:
//1. Go right once and then keep going left until you reach the end of the tree.


//HOW TO DELETE A NODE IN BST:
//1. If the node is a leaf node, simply remove it from the tree.
//2.It has only one child(either the right or left)->easy.
//3.If it has 2 child nodes ->hard



// 450. Delete Node in a BST

// Given a root node reference of a BST and a key, delete the node with the given key in the BST. Return the root node reference (possibly updated) of the BST.
// Basically, the deletion can be divided into two stages:
// Search for a node to remove.
// If the node is found, delete the node.

// Example 1:
// Input: root = [5,3,6,2,4,null,7], key = 3
// Output: [5,4,6,2,null,null,7]
// Explanation: Given key to delete is 3. So we find the node with value 3 and delete it.
// One valid answer is [5,4,6,2,null,null,7], shown in the above BST.
// Please notice that another valid answer is [5,2,6,null,4,null,7] and it's also accepted.

// class Solution {
// public:
// //pred
//     TreeNode * iop(TreeNode * root){
//         TreeNode* pred =root->left;
//         while(pred->right!=NULL){
//             pred = pred->right;
//         }
//         return pred;
//     }
//     //succ
//     TreeNode * ios(TreeNode * root){
//         TreeNode* succ =root->right;
//         while(succ->left!=NULL){
//             succ = succ->left;
//         }
//         return succ;
//     }
//     TreeNode* deleteNode(TreeNode* root, int key) {
//         if(root==NULL) return NULL;
//         if(root->val==key){
//             //Case 1: NO Child
//             if(root->left==NULL && root->right==NULL) return NULL;

//             //case 2: 1 Child:
//             if(root->left==NULL || root->right==NULL){
//                 if(root->left!=NULL) return root->left;
//                 else return root->right;
//             } 

//             //Case 3: 2 Child:
//             if(root->left!=NULL && root->right!=NULL){
//                 //replcae it with root predecessor/successor
//                 //delete the pred/succ
//                 TreeNode * pred = iop(root);
//                 root->val = pred->val;
//                 root->left = deleteNode(root->left,pred->val);
//             }
//         }
//         else if(root->val>key){//go left
//             root->left = deleteNode(root->left,key);
//         }
//         else {//go right
//             root->right = deleteNode(root->right,key);
//         }
//         return root;
//     }
// };


//L-3

//669. Trim a Binary Search Tree

// Given the root of a binary search tree and the lowest and highest boundaries as low and high, trim the tree so that all its elements lies in [low, high]. Trimming the tree should not change the relative structure of the elements that will remain in the tree (i.e., any node's descendant should remain a descendant). It can be proven that there is a unique answer.
// Return the root of the trimmed binary search tree. Note that the root may change depending on the given bounds.
// Example 1:
// Input: root = [1,0,2], low = 1, high = 2
// Output: [1,null,2]


// class Solution {
// public:
//     void trim(TreeNode* root, int low, int high){
//         if(root==NULL) return;
//         while(root->left!=NULL){
//             if(root->left->val<low){
//                 root->left=root->left->right;
//             }
//             else if(root->left->val>high){
//                 root->left=root->left->left;
//             }else break;
//         }
//         while(root->right!=NULL){
//             if(root->right->val>high){
//                 root->right=root->right->left;
//             }
//             else if(root->right->val<low){
//                 root->right=root->right->right;
//             }else break;
//         }
//         trim(root->left,low,high);
//         trim(root->right,low,high);
//     }
//     TreeNode* trimBST(TreeNode* root, int low, int high) {
//         TreeNode* dummy = new TreeNode(INT_MAX);
//         dummy->left = root;
//         trim(dummy,low,high);
//         return dummy->left;
//     }
// };
