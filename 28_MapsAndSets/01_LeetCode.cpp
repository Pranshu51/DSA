
// 2442. Count Number of Distinct Integers After Reverse Operations

// You are given an array nums consisting of positive integers.
// You have to take each integer in the array, reverse its digits, and add it to the end of the array. You should apply this operation to the original integers in nums.
// Return the number of distinct integers in the final array.

// Example 1:

// Input: nums = [1,13,10,12,31]
// Output: 6
// Explanation: After including the reverse of each number, the resulting array is [1,13,10,12,31,1,31,1,21,13].
// The reversed integers that were added to the end of the array are underlined. Note that for the integer 10, after reversing it, it becomes 01 which is just 1.
// The number of distinct integers in this array is 6 (The numbers 1, 10, 12, 13, 21, and 31).


// class Solution {
// public:
//     int reverse(int n){
//         int r=0;
//         while(n>0){
//             r*=10;
//             r+=(n%10);
//             n/=10;
//         }   
//         return r;
//     }
//     int countDistinctIntegers(vector<int>& nums) {
//         int n =nums.size();
//         for(int i =0;i<n;i++){
//             int rev = reverse(nums[i]);
//             nums.push_back(rev);
//         }
//         unordered_set<int> s;
//         for(int i =0;i<nums.size();i++){
//             s.insert(nums[i]);
//         }
//         return s.size();
//     }
// };


//or

// class Solution {
// public:
//     int reverse(int n){
//         int r=0;
//         while(n>0){
//             r*=10;
//             r+=(n%10);
//             n/=10;
//         }   
//         return r;
//     }
//     int countDistinctIntegers(vector<int>& nums) {
//         int n =nums.size();
//         unordered_set<int> s;
//         for(int i =0;i<n;i++){
//             int rev = reverse(nums[i]);
//             s.insert(nums[i]);
//             s.insert(rev);
//         }
        
//         return s.size();
//     }
// };


// 2744. Find Maximum Number of String Pairs

// You are given a 0-indexed array words consisting of distinct strings.
// The string words[i] can be paired with the string words[j] if:
// The string words[i] is equal to the reversed string of words[j].
// 0 <= i < j < words.length.
// Return the maximum number of pairs that can be formed from the array words.

// Note that each string can belong in at most one pair.

// Example 1:

// Input: words = ["cd","ac","dc","ca","zz"]
// Output: 2
// Explanation: In this example, we can form 2 pair of strings in the following way:
// - We pair the 0th string with the 2nd string, as the reversed string of word[0] is "dc" and is equal to words[2].
// - We pair the 1st string with the 3rd string, as the reversed string of word[1] is "ca" and is equal to words[3].
// It can be proven that 2 is the maximum number of pairs that can be formed.

// Not a good way as ony works in easy way

// class Solution {
// public:
//     int maximumNumberOfStringPairs(vector<string>& words) {
//         int n = words.size();
//         int count =0;
//         for(int i=0;i<n-1;i++){
//             string rev = words[i];
//             reverse(rev.begin(),rev.end());
//             for(int j=i+1;j<n;j++){
//                 if(rev==words[j]) count++;
//             }
//         }
//         return count;
//     }
// };


//or
// class Solution {
// public:
//     int maximumNumberOfStringPairs(vector<string>& words) {
//         int n = words.size();
//         int count =0;
//         unordered_set<string> s;
//         for(int i=0;i<n;i++){
//             s.insert(words[i]);
//             }
//             for(int i=0;i<n;i++){
//                 string rev = words[i];
//                 reverse(rev.begin(),rev.end());
//                 if(words[i]==rev) continue;
//                 if(s.find(rev)!=s.end()){
//                     count++;
//                     s.erase(words[i]);
//                 }
//             }
//             return count;
//     }
// };

//or
// class Solution {
// public:
//     int maximumNumberOfStringPairs(vector<string>& words) {
//         int n = words.size();
//         int count =0;
//         unordered_set<string> s;
//         for(int i=0;i<n;i++){
//             string rev = words[i];
//             reverse(rev.begin(),rev.end());
//             if(s.find(rev)!=s.end())
//                 count++; 
//             else s.insert(words[i]);
    
//         }
//             return count;
//     }
// };

// 242. Valid Anagram

// Given two strings s and t, return true if t is an anagram of s, and false otherwise.

 

// Example 1:

// Input: s = "anagram", t = "nagaram"

// Output: true

// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         if(s.length()!=t.length()) return false;
//         unordered_map<char,int> map1;
//         unordered_map<char,int> map2;
//         for(int i=0;i<s.size();i++){
//             map1[s[i]]++;
//         }
//         for(int i=0;i<t.size();i++){
//             map2[t[i]]++;
//         }
//         for(auto x:map1){
//             char ch1=x.first;
//             int freq1=x.second;
//             if(map2.find(ch1)!=map2.end()){
//                 int freq2 = map2[ch1];
//                 if(freq1!=freq2) return false;
//             }else return false;
//         }
//         return true;
//     }
// };