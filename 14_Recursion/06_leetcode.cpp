// 39. Combination Sum

// Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target. You may return the combinations in any order.
// The same number may be chosen from candidates an unlimited number of times. Two combinations are unique if the frequency of at least one of the chosen numbers is different.
// The test cases are generated such that the number of unique combinations that sum up to target is less than 150 combinations for the given input.

// Example 1:

// Input: candidates = [2,3,6,7], target = 7
// Output: [[2,2,3],[7]]
// Explanation:
// 2 and 3 are candidates, and 2 + 2 + 3 = 7. Note that 2 can be used multiple times.
// 7 is a candidate, and 7 = 7.
// These are the only two combinations.

// class Solution {
// public:
//     void combination(vector<int>& candidates,vector<int> ans,int target,int idx,vector<vector<int>> &finalAns){
//         if(target==0){
//             finalAns.push_back(ans);
//             return;
//         }
//         if(target<0) return;
//         for(int i=idx;i<candidates.size();i++){
//             ans.push_back(candidates[i]);
//             combination(candidates,ans, target-candidates[i],i,finalAns);
//             ans.pop_back();
//         }
//      }

//     vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
//         vector<int> ans;
//         vector<vector<int>> finalAns;
//         combination(candidates,ans, target,0,finalAns);
//         return finalAns;
//     }
// };






// 22. Generate Parentheses
// Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.
// Example 1:
// Input: n = 3
// Output: ["((()))","(()())","(())()","()(())","()()()"]




// class Solution {
// public:
//  void genParenthesis(string temp,int n,vector<string> &ans,int opening,int closing){
//     if(closing==n){
//         ans.push_back(temp);
//         return;
//     }
//     if(opening<n) genParenthesis(temp+"(",n,ans,opening+1,closing );
//     if(closing<opening) genParenthesis(temp+")",n,ans,opening,closing+1 );
//  }
//     vector<string> generateParenthesis(int n) {
//         vector<string> ans;
//         genParenthesis("",n,ans,0,0);
//         return ans;
//     }
// };




// 779. K-th Symbol in Grammar

// We build a table of n rows (1-indexed). We start by writing 0 in the 1st row. Now in every subsequent row, we look at the previous row and replace each occurrence of 0 with 01, and each occurrence of 1 with 10.
// For example, for n = 3, the 1st row is 0, the 2nd row is 01, and the 3rd row is 0110.
// Given two integer n and k, return the kth (1-indexed) symbol in the nth row of a table of n rows.

// Example 1:

// Input: n = 1, k = 1
// Output: 0
// Explanation: row 1: 0


// class Solution {
// public:
//     int kthGrammar(int n, int k) {
//         if(n==1) return 0;
//         if(k%2==0){//flip
//             int prevAns = kthGrammar(n-1,k/2);
//             if(prevAns==0) return 1;
//             else return 0;
//         }
//         else{//same ,k/2+1
//           int prevAns = kthGrammar(n-1,k/2+1);
//           return prevAns;
//         }
//     }
// };








// 38. Count and Say

// The count-and-say sequence is a sequence of digit strings defined by the recursive formula:
// countAndSay(1) = "1"
// countAndSay(n) is the run-length encoding of countAndSay(n - 1).
// Run-length encoding (RLE) is a string compression method that works by replacing consecutive identical characters (repeated 2 or more times) with the concatenation of the character and the number marking the count of the characters (length of the run). For example, to compress the string "3322251" we replace "33" with "23", replace "222" with "32", replace "5" with "15" and replace "1" with "11". Thus the compressed string becomes "23321511".
// Given a positive integer n, return the nth element of the count-and-say sequence.

// Example 1:
// Input: n = 4
// Output: "1211"
// Explanation:

// countAndSay(1) = "1"
// countAndSay(2) = RLE of "1" = "11"
// countAndSay(3) = RLE of "11" = "21"
// countAndSay(4) = RLE of "21" = "1211"



// class Solution {
// public:
//     string countAndSay(int n) {
//         if(n==1) return "1";
//         string str= countAndSay(n-1);
//         // string ans="";
//         // int count=1;
//     //     for(int i=0;i<b.size()-1;i++){
//     //         if(b[i]==b[i+1]) count++;
//     //         else{
//     //             ans+=to_string(count)+b[i];
//     //             count=1;
//     //         }
//     //     }
//     //     int size = b.size();
//     //     ans+=to_string(count)+b[size-1];
//     //     return ans;
//         string ans="";
//         char ch=str[0];
//         int freq=1;
//     for(int i=1;i<str.size();i++){
//         char dh=str[i];
//         if(ch==dh) freq++;
//         else{
//             ans+=to_string(freq)+ch;
//             freq=1;
//             ch=dh;
//         }
//     }
//     ans+=to_string(freq)+ch;
//     return ans;

//     }
// };





// 60. Permutation Sequence

// The set [1, 2, 3, ..., n] contains a total of n! unique permutations.

// By listing and labeling all of the permutations in order, we get the following sequence for n = 3:

// "123"
// "132"
// "213"
// "231"
// "312"
// "321"
// Given n and k, return the kth permutation sequence.

 

// Example 1:

// Input: n = 3, k = 3
// Output: "213"






// class Solution {
// public:
//     string helper(string str,int k,string ans){
//         int n=str.length();
//         if(n==0) return ans;
//         long long fact=1;
//         for(int i=1;i<n;i++){
//             fact*=i;
//         }
//         int idx= k/fact;
//         if(k%fact==0) idx--;
//         char ch= str[idx];
//         string left= str.substr(0,idx);
//         string right= str.substr(idx+1);
//         int q=1;
//         if(k%fact==0) q=fact;
//         else q=k%fact;
//         return helper(left+right,q,ans+ch);
//     }
//     string getPermutation(int n, int k) {
//         string str="";
//         for(int i=1;i<=n;i++){
//             str+=to_string(i);
//         }
//         return helper(str,k,"");
//     }
// };