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