
// 2094. Finding 3-Digit Even Numbers

// You are given an integer array digits, where each element is a digit. The array may contain duplicates.

// You need to find all the unique integers that follow the given requirements:

// The integer consists of the concatenation of three elements from digits in any arbitrary order.
// The integer does not have leading zeros.
// The integer is even.
// For example, if the given digits were [1, 2, 3], integers 132 and 312 follow the requirements.

// Return a sorted array of the unique integers.

// Example 1:

// Input: digits = [2,1,3,0]
// Output: [102,120,130,132,210,230,302,310,312,320]
// Explanation: All the possible integers that follow the requirements are in the output array. 
// Notice that there are no odd integers or integers with leading zeros.

// class Solution {
// public:
//     vector<int> findEvenNumbers(vector<int>& digits) {
//         int n = digits.size();
//         vector<int> ans;
//         unordered_map<int,int> m;
//         for(int i=0;i<n;i++){
//             m[digits[i]]++;
//         }
//         for(int i=100;i<=999;i+=2){
//             int x = i;
//             int a = x%10;//ones place digit
//             x/=10;
//             int b = x%10;//tens place digit
//             x/=10;
//             int c = x;
//             if(m.find(a)!=m.end()){
//                 m[a]--;
//                 if(m[a]==0) m.erase(a);
//                 if(m.find(b)!=m.end()){
//                     m[b]--;
//                     if(m[b]==0) m.erase(b);
//                     if(m.find(c)!=m.end())
//                         ans.push_back(i);
//                     m[b]++;
//                 }
//                 m[a]++;
//             }
//         }
//         return ans;
//     }
// };