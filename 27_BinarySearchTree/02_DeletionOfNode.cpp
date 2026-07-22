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
