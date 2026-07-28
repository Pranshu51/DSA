// 560. Subarray Sum Equals K

// Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.
// A subarray is a contiguous non-empty sequence of elements within an array.

// Example 1:

// Input: nums = [1,1,1], k = 2
// Output: 2
// Example 2:

// Input: nums = [1,2,3], k = 3
// Output: 2


// class Solution {
// public:
//     int subarraySum(vector<int>& arr, int k) {
//         int n =arr.size();
//         vector<int> pre(n,0);
//         pre[0] =arr[0];
//         for(int i=1;i<n;i++){
//             pre[i]=arr[i] + pre[i-1];
//         }
//         unordered_map<int,int> mp;
//         int count=0;
//         for(int i=0;i<n;i++){
//             if(pre[i]==k) count++;
//             int rem = pre[i]-k;
//             if(mp.find(rem)!=mp.end()) count+=mp[rem];
//             mp[pre[i]]++;
//         }
//         return count;
//     }
// };


// 2385. Amount of Time for Binary Tree to Be Infected

// You are given the root of a binary tree with unique values, and an integer start. At minute 0, an infection starts from the node with value start.

// Each minute, a node becomes infected if:

// The node is currently uninfected.
// The node is adjacent to an infected node.
// Return the number of minutes needed for the entire tree to be infected.

// Example 1:
// Input: root = [1,5,3,null,4,10,6,9,2], start = 3
// Output: 4
// Explanation: The following nodes are infected during:
// - Minute 0: Node 3
// - Minute 1: Nodes 1, 10 and 6
// - Minute 2: Node 5
// - Minute 3: Node 4
// - Minute 4: Nodes 9 and 2
// It takes 4 minutes for the whole tree to be infected so we return 4.



// class Solution {
// public: 
//     void markParent(TreeNode* root,unordered_map<TreeNode*,TreeNode*>& parent){
//         if(root==NULL) return;
//         if(root->left) parent[root->left] = root;
//         if(root->right) parent[root->right] = root;
//         markParent(root->left,parent);
//         markParent(root->right,parent);
//     }
//     TreeNode* first = NULL;
//     void find(TreeNode* root, int start){
//         if(root==NULL) return;
//         if(root->val==start) first = root;
//         find(root->left,start);
//         find(root->right,start);
//     }
//     int amountOfTime(TreeNode* root, int start) {
//          find(root,start);
//          unordered_map<TreeNode*,TreeNode*> parent;
//          markParent(root,parent);
//          unordered_set<TreeNode*> s;
//          s.insert(first);
//          queue<pair<TreeNode*,int>> q;//Node,level
//          q.push({first,0});//here level is 0
//          int maxLevel =0;
//          while(q.size()>0){
//             pair<TreeNode*,int> p=q.front();
//             q.pop();
//             int level = p.second;
//             maxLevel = max(level,maxLevel);
//             TreeNode* temp = p.first;
//             if(temp->left){
//                 if(s.find(temp->left)==s.end()){
//                     q.push({temp->left,level+1});
//                     s.insert(temp->left);
//                 }
//             }
//             if(temp->right){
//                 if(s.find(temp->right)==s.end()){
//                     q.push({temp->right,level+1});
//                     s.insert(temp->right);
//                 }
//             }
//             if(parent.find(temp)!=parent.end()){
//                 if(s.find(parent[temp])==s.end()){
//                     q.push({parent[temp],level+1});
//                     s.insert(parent[temp]);
//                 }
//             }
//          }
//          return maxLevel;
//     }
// }; 




// 49. Group Anagrams

// Given an array of strings strs, group the anagrams together. You can return the answer in any order. 

// Example 1:

// Input: strs = ["eat","tea","tan","ate","nat","bat"]

// Output: [["bat"],["nat","tan"],["ate","eat","tea"]]

// Explanation:

// There is no string in strs that can be rearranged to form "bat".
// The strings "nat" and "tan" are anagrams as they can be rearranged to form each other.
// The strings "ate", "eat", and "tea" are anagrams as they can be rearranged to form each other.
// class Solution {
// public:
//     vector<vector<string>> groupAnagrams(vector<string>& arr) {
//         vector<vector<string>> ans;
//         unordered_map <string,vector<string>> mp;
//          for(string str : arr){
//             string lexo = str;
//             sort(lexo.begin(),lexo.end());
//             if(mp.find(lexo)==mp.end()){
//                 vector<string> v;
//                 v.push_back(str);
//                 mp[lexo] = v;
//             }else{
//                 mp[lexo].push_back(str);
//             }
//          }
//          for(auto x : mp){
//             vector<string> v = x.second;
//             ans.push_back(v);
//          }
//          return ans;
//     }
// };

// //little tweak

// class Solution {
// public:
//     vector<vector<string>> groupAnagrams(vector<string>& arr) {
//         vector<vector<string>> ans;
//         unordered_map <string,vector<string>> mp;
//          for(string str : arr){
//             string lexo = str;
//             sort(lexo.begin(),lexo.end());
//             if(mp.find(lexo)==mp.end()){
//                 vector<string> v;
//                 v.push_back(str);
//                 mp[lexo] = v;
//             }else{
//                 mp[lexo].push_back(str);
//             }
//          }
//          for(auto x : mp){
//             ans.push_back(x.second);
//          }
//          return ans;
//     }
// };