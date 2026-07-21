//What is  Binary Search Tree (BST)?
//every node in the left subtree of a node has a value less than the node's value, and every node in the right subtree has a value greater than the node's value. This property must hold true for all nodes in the tree.

//Can a BST have duplicate values?
//In a standard binary search tree (BST), duplicate values are typically not allowed. Each value in the tree must be unique to maintain the binary search property. However, some variations of BSTs may allow duplicates, but they usually have specific rules for handling them, such as placing duplicates in a specific subtree (e.g., always in the right subtree).    
//No, LST<ROOT->VAL<RST but some teachers says LST<=ROOT->VAL<RST.

//Advantages of Binary Search Tree (BST):
//1. Efficient Searching: BSTs allow for efficient searching of elements, with an average time complexity of O(log n) for balanced trees.
//2.Efficient Insertion and Deletion: Insertion and deletion operations can also be performed in O(log n) time on average for balanced BSTs.
//3. Ordered Structure: BSTs maintain an ordered structure, which allows for easy retrieval of elements in sorted order through in-order traversal.
//implemenation of other data structure like set, map, multiset, multimap, priority queue, etc. can be done using BST.


//DISADVANTAGES OF BINARY SEARCH TREE (BST):
//1. Unbalanced Trees: If the tree becomes unbalanced (e.g., due to sequential insertions), the time complexity for search, insertion, and deletion can degrade to O(n) in the worst case.
//2. Complexity of Implementation: Implementing a balanced BST (like AVL or Red-Black Tree) can be complex and requires additional logic to maintain balance during insertions and deletions.
//3. Memory Overhead: Each node in a BST requires additional memory for pointers to its children, which can lead to increased memory usage compared to other data structures like arrays or linked lists.
//4.lack of support for range queries
//5. Not Cache-Friendly: Due to the pointer-based structure of BSTs, they may not be as cache-friendly as contiguous data structures like arrays, leading to potential performance issues in certain scenarios.



//Applications of Binary Search Tree (BST):
// PHONEBOOK: A binary search tree can be used to implement a phonebook, where each contact's name is the key and the associated phone number is the value. The BST allows for efficient searching, insertion, and deletion of contacts based on their names.
// DICTIONARY: A binary search tree can be used to implement a dictionary, where each word is the key and its definition is the value. The BST allows for efficient searching, insertion, and deletion of words based on their alphabetical order.
// STOCK MARKET ANALYSIS: A binary search tree can be used to analyze stock market data, where each stock's ticker symbol is the key and its associated price is the value. The BST allows for efficient searching, insertion, and deletion of stocks based on their ticker symbols.



// Que=> You have 3 nodes with values 2, 1, and 3. How many unique BInary tree can be formed using these nodes?
// Ans=> 5 unique BSTs can be formed using the nodes with values 2, 1, and 3. The unique BSTs are:
// 1.      2
//        / \
//       1   3

// 2.      1
//          \
//           2
//            \
//             3
// 3.      1
//          \
//           2
//          /
//         3
// 4.      1
//        /
//       2
//      /
//     3
// 5.      1
//        /
//       2
//        \
//         3                        
// Possible combinations of BSTs with 3 nodes can be visualized as follows:
// 1.      3
//        / \
//       2   1

// 2.      3
//        / \
//       1   2

// 3.      2
//        / \
//       1   3


// same question but for BSTs, the unique BSTs that can be formed using the nodes with values 2, 1, and 3 are:
// 1.      2
//        / \
//       1   3
// 2.      1
//          \
//           2
//            \
//             3
// 3.      3
//        /
//       2
//      /
//     1
// 4.      1
//          \
//           3
//          /
//         2
// 5.      3
//        /
//       1
//        \
//         2        
        

//BST TIME COMPLEXITY:
//BEST CASE: O(log n) - This occurs when the tree is balanced, and the height of the tree is logarithmic with respect to the number of nodes. In this case, each comparison allows us to eliminate half of the remaining nodes, leading to a logarithmic time complexity.
//AVERAGE CASE: O(log n)/O(h) - On average, if the tree is reasonably balanced, the time complexity for search, insertion, and deletion operations is O(log n). This assumes that the tree is not skewed and that the nodes are distributed evenly across the levels of the tree.
//WORST CASE: O(n) - This occurs when the tree is highly unbalanced, resembling a linked list. In this case, the height of the tree can be equal to the number of nodes, and we may need to traverse all the nodes in the worst case, resulting in a linear time complexity.

//SPACE COMPLEXITY:
//same as T.C