//WHAT IS TREE
//Non linear data structure
// =========================
// TREE TERMINOLOGY (DSA)
// =========================

// Tree:
// A hierarchical data structure consisting of nodes connected by edges.

//Generic tree : as many nodes possible(multiple children)

// Node:
// An individual element in a tree.

// Root Node:
// The topmost node of a tree having no parent.

// Parent Node:
// A node that has one or more children.

// Child Node:
// A node directly connected below another node.

// Sibling Nodes:
// Nodes having the same parent.

// Leaf Node (External Node):
// A node with no children.

// Internal Node:
// A node having at least one child.

// Ancestor:
// Any node on the path from the root to a given node.

// Descendant:
// Any node reachable by moving downward from a given node.

// Edge:
// The connection between two nodes.

// Path:
// A sequence of nodes connected by edges.

// Path Length:
// The number of edges in a path.

// Degree of a Node:
// The number of children a node has.

// Degree of a Tree:
// The maximum degree of any node in the tree.

// Depth of a Node:
// The number of edges from the root to that node.

// Level of a Node:
// Depth + 1 (Root is usually at Level 1).

// Height of a Node:
// The number of edges on the longest path from the node to a leaf.

// Height of a Tree:
// The height of the root node or the maximum depth of any node.

// Subtree:
// A tree formed by a node and all its descendants.

// Forest:
// A collection of disjoint trees.


// Left Child:
// The child located on the left side of a parent node.

// Right Child:
// The child located on the right side of a parent node.

// Full Binary Tree:
// Every node has either 0 or 2 children.

// Perfect Binary Tree:
// All internal nodes have 2 children and all leaves are at the same level.

// Complete Binary Tree:
// All levels are completely filled except possibly the last, which is filled from left to right.

// Balanced Binary Tree:
// A tree where height difference between left and right subtrees is limited.

// Degenerate Tree:
// A tree where every parent has only one child, resembling a linked list.

// Skewed Tree:
// A tree where all nodes lean to one side (left or right).

// Strict Binary Tree:
// A binary tree where every non-leaf node has exactly two children.

// Binary Search Tree (BST):
// A binary tree where left child < parent < right child.

// AVL Tree:
// A self-balancing BST with balance factor between -1 and 1.

// Red-Black Tree:
// A self-balancing BST using node colors and balancing rules.

// Heap:
// A complete binary tree satisfying heap property.

// Min Heap:
// Parent node value is smaller than its children.

// Max Heap:
// Parent node value is larger than its children.

// Trie:
// A tree used for storing strings efficiently.

// N-ary Tree:
// A tree where a node can have at most N children.

// Ordered Tree:
// A tree where the order of children matters.

// Unordered Tree:
// A tree where the order of children does not matter.

// Traversal:
// The process of visiting all nodes in a tree.

// Preorder Traversal:
// Root → Left → Right

// Inorder Traversal:
// Left → Root → Right

// Postorder Traversal:
// Left → Right → Root

// Level Order Traversal:
// Visit nodes level by level from top to bottom.

// Breadth First Search (BFS):
// Tree traversal using a queue level by level.

// Depth First Search (DFS):
// Tree traversal exploring depth before breadth.

// Lowest Common Ancestor (LCA):
// The deepest common ancestor of two nodes.

// Diameter of Tree:
// The longest path between any two nodes.

// Width of Tree:
// The maximum number of nodes at any level.

// Boundary Nodes:
// Nodes visible while traversing the boundary of the tree.

// Balance Factor:
// Height(Left Subtree) - Height(Right Subtree).

// Null Node:
// A node reference that points to nothing.

// Threaded Binary Tree:
// A binary tree where null pointers are replaced with traversal links.

// Euler Tour:
// A traversal that visits every edge exactly twice.

// Centroid:
// A node whose removal divides the tree into smaller balanced components.

// Centroid Decomposition:
// A technique that recursively decomposes a tree using centroids.

// Heavy Child:
// The child having the largest subtree size.

// Light Child:
// Any child that is not a heavy child.

// Heavy-Light Decomposition:
// A technique to break a tree into heavy and light paths.

// Articulation Point (Tree Context):
// A node whose removal disconnects the graph/tree structure.

// Rooted Tree:
// A tree with a designated root node.

// Unrooted Tree:
// A tree without a specified root.

// Labeled Tree:
// A tree whose nodes contain labels/values.

// Ordered Binary Tree:
// A binary tree where left and right child positions are distinguished.


//IMPORTANT PROPERTIES IN IN A TREE
//Traversing in a tree is done by BFS AND DFS algorithm.
//2.It has no llo pno circuit 
//3.it has no self loop




//TYPES OF TREES
// =========================
// COMMON TREE TYPES (DSA)
// =========================

// General Tree:
// A tree where a node can have any number of children.

// Binary Tree:
// A tree where each node has at most two children.

// Full Binary Tree:
// Every node has either 0 or 2 children.

// Perfect Binary Tree:
// All internal nodes have 2 children and all leaves are at the same level.

// Complete Binary Tree:
// All levels are completely filled except possibly the last, which is filled from left to right.

// Balanced Binary Tree:
// A tree whose height remains approximately logarithmic to the number of nodes.

// Degenerate Tree:
// A tree where every parent has only one child, like a linked list.

// Skewed Tree:
// A tree where all nodes are on the left side or right side.

// Binary Search Tree (BST):
// A binary tree where left subtree values are smaller and right subtree values are larger than the root.

// AVL Tree:
// A self-balancing BST with height difference of at most 1 between subtrees.

// Red-Black Tree:
// A self-balancing BST that uses coloring rules to maintain balance.

// Heap:
// A complete binary tree that follows the heap property.

// Min Heap:
// A heap where the parent is smaller than its children.

// Max Heap:
// A heap where the parent is larger than its children.

// Trie (Prefix Tree):
// A tree used for efficient storage and searching of strings.

// Segment Tree:
// A tree used for efficient range queries and updates.

// Fenwick Tree (Binary Indexed Tree):
// A tree-like structure used for prefix sum queries and updates.

// N-ary Tree:
// A tree where each node can have at most N children.






// Binary Tree:(0,1,2=>upto 2 child nodes)
// A tree where each node has at most two children.
//Every node has a value, and its left child address and right child address




//APPLLICAITON
// =========================
// APPLICATIONS OF TREES
// =========================

// 1. File System Organization:
//    Trees are used to represent folders and files in operating systems.

// 2. Database Indexing:
//    B-Trees and B+ Trees are used for fast searching, insertion, and deletion in databases.

// 3. Expression Evaluation:
//    Expression Trees are used by compilers to evaluate mathematical expressions.

// 4. Searching and Sorting:
//    Binary Search Trees (BSTs) provide efficient searching, insertion, and deletion operations.

// 5. Priority Scheduling:
//    Heaps are used in CPU scheduling, task management, and priority queues.

// 6. String Processing:
//    Tries are used for autocomplete, spell checking, dictionaries, and search engines.


#include<iostream>
#include<algorithm>
#include<climits>
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

// void display(Node* root){
//     if(root==NULL) return;
//     cout<<root->val<<" ";
//     display(root->left);
//     display(root->right);
// }

// int sum(Node* root){
//     if(root==NULL) return 0;
//     return root->val+sum(root->left)+sum(root->right);
// }

// int product(Node* root){
//     if(root==NULL) return 1;
//     return root->val*product(root->left)*product(root->right);
// }

// int size(Node* root){
//     if(root==NULL) return 0;
//     return 1+size(root->left)+size(root->right);
// }

// int max(Node* root){
//     if(root==NULL) return INT_MIN;
//     return max(root->val,max(max(root->left),max(root->right)));
// }

// int min(Node* root){
//     if(root==NULL) return INT_MAX;
//     return min(root->val,min(min(root->left),min(root->right)));
// }

// int levels(Node* root){
//     if(root==NULL) return 0;
//     return 1+max(levels(root->left),levels(root->right));
// } 



// int main(){
//     Node* a =new Node(1);
//     Node* b =new Node(2);
//     Node* c =new Node(3);
//     Node* d =new Node(4);
//     Node* e =new Node(5);
//     Node* f =new Node(6);
//     Node* g =new Node(7);
//     a->left=b;
//     a->right=c;
//     b->left=d;
//     b->right=e;
//     c->left=f;
//     c->right=g;
//     display(a);
//     cout<<endl;
//     cout<<sum(a)<<endl;
//     cout<<size(a)<<endl;
//     cout<<max(a)<<endl;
// }



//TYPES OF BINARY TREES
//1.FULL BINARY TREE(0 or 2 child nodes)
//2.PERFECT BINARY TREE(all internal nodes have 2 children and all leaves are at the same level except leaf nodes )
//3.COMPLETE BINARY TREE(all levels are completely filled except possibly the last, which is filled from left to right)
//4.BALANCED BINARY TREE(a tree where height(levels) difference between left and right subtrees is atmost 1)
//5.DEGENERATE TREE(a tree where every parent has only one child or 0 children, resembling a linked list)
//6.SKEWED TREE(a tree where all nodes lean to one side (left or right))