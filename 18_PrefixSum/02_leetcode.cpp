// 1480. Running Sum of 1d Array

// Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
// Return the running sum of nums.
// Example 1:

// Input: nums = [1,2,3,4]
// Output: [1,3,6,10]
// Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].


// class Solution {
// public:
//     vector<int> runningSum(vector<int>& nums) {
//         int n=nums.size();
//         // vector<int> sum;
//         // int runSum=0;
//         // for(int i=0;i<n;i++){
//         //     runSum+=nums[i];
//         //     sum.push_back(runSum);
//         // }
//         // return sum;

//         //m-2
//         // vector<int> run(n);
//         // run[0]=nums[0];
//         // for(int i=1;i<n;i++){
//         //     run[i]=nums[i]+run[i-1];
//         // }
//         // return run;

//         //m-3
//         for(int i=1;i<n;i++){
//             nums[i]+=nums[i-1];
//         }
//         return nums;
//     }
// };











// 238. Product of Array Except Self

// Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
// You must write an algorithm that runs in O(n) time and without using the division operation.

// Example 1:

// Input: nums = [1,2,3,4]
// Output: [24,12,8,6]

// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//         int n=nums.size();
//         vector<int> prefix(n);
//         int p=nums[0];
//         prefix[0] = 1;
//         for(int i =1;i<n;i++){
//             prefix[i] =p;
//             p*=nums[i];
//         }

//         p=nums[n-1];
//         for(int i =n-2;i>=0;i--){
//             prefix[i] *=p;
//             p*=nums[i];
//         }
//         return prefix;
//     }
// };


//m-3
    // int n=nums.size();
    //     vector<int> prefix(n);
    //     vector<int> suffix(n);
    //     int p=nums[0];
    //     prefix[0] = 1;
    //     for(int i =1;i<n;i++){
    //         prefix[i] =p;
    //         p*=nums[i];
    //     }

    //     p=nums[n-1];
    //     suffix[n-1] = 1;
    //     for(int i =n-2;i>=0;i--){
    //         suffix[i] =p;
    //         p*=nums[i];
    //     }
    //     for(int i=0;i<n;i++){
    //         prefix[i]=prefix[i] *suffix[i];
    //     }
    //     return prefix;

// m-2
//   int n=nums.size();
//         vector<int> prefix(n);
//         vector<int> suffix(n);
//         vector<int> ans(n);
//         int p=nums[0];
//         prefix[0] = 1;
//         for(int i =1;i<n;i++){
//             prefix[i] =p;
//             p*=nums[i];
//         }

//         p=nums[n-1];
//         suffix[n-1] = 1;
//         for(int i =n-2;i>=0;i--){
//             suffix[i] =p;
//             p*=nums[i];
//         }
//         for(int i=0;i<n;i++){
//             ans[i]=prefix[i] *suffix[i];
//         }
//         return ans;
        //m-1
        // int product=1;
        // int p2=1;
        // int noz=0;
        // for(int i=0;i<n;i++){
        //     if(nums[i]==0) noz++;
        //     product*=nums[i];
        //     if(nums[i] !=0) p2*=nums[i];
        // }
        // if (noz>1) p2=0;
        // for(int i=0;i<n;i++){
        //     if(nums[i]==0) nums[i] =p2;
        //     else nums[i]= product/nums[i];
        // }
        // return nums;




       
        


// 2483. Minimum Penalty for a Shop

// You are given the customer visit log of a shop represented by a 0-indexed string customers consisting only of characters 'N' and 'Y':
// if the ith character is 'Y', it means that customers come at the ith hour
// whereas 'N' indicates that no customers come at the ith hour.
// If the shop closes at the jth hour (0 <= j <= n), the penalty is calculated as follows:
// For every hour when the shop is open and no customers come, the penalty increases by 1.
// For every hour when the shop is closed and customers come, the penalty increases by 1.
// Return the earliest hour at which the shop must be closed to incur a minimum penalty.

// Note that if a shop closes at the jth hour, it means the shop is closed at the hour j.

 

// Example 1:

// Input: customers = "YYNY"
// Output: 2
// Explanation: 
// - Closing the shop at the 0th hour incurs in 1+1+0+1 = 3 penalty.
// - Closing the shop at the 1st hour incurs in 0+1+0+1 = 2 penalty.
// - Closing the shop at the 2nd hour incurs in 0+0+0+1 = 1 penalty.
// - Closing the shop at the 3rd hour incurs in 0+0+1+1 = 2 penalty.
// - Closing the shop at the 4th hour incurs in 0+0+1+0 = 1 penalty.
// Closing the shop at 2nd or 4th hour gives a minimum penalty. Since 2 is earlier, the optimal closing time is 2.        







// class Solution {
// public:
//     int bestClosingTime(string customers) {
//          int n=customers.size();
//         vector<int> pre(n+1);
//         vector<int> suf(n+1);
//         pre[0]=0;
//         for(int i=0;i<n;i++){
//             pre[i+1]=pre[i] + ((customers[i]=='N') ? 1 : 0);
//         }
//         suf[n]=0;
//         for(int i=n-1;i>=0;i--){
//             suf[i]=suf[i+1] + ((customers[i]=='Y') ? 1 : 0);
//         }
//         int minPenalty=n;//kuch bhi maan lia max panelty maan lia
//         //2 kaam honge pehla-pre aur suf add 2. min penalty
//         for(int i=0;i<=n;i++){
//             pre[i]+=suf[i];
//             int pen = pre[i];
//             minPenalty = min(minPenalty,pen);
//         }
//         for(int i=0;i<=n;i++){
//             if(pre[i]==minPenalty) return i;//hour return karna k elie
//         }
//         return n;
//     }
// };






//class Solution {
// public:
//     int bestClosingTime(string customers) {
//         int n=customers.size();
//         vector<int> pre(n+1);
//         vector<int> suf(n+1);
//         pre[0]=0;
//         for(int i=0;i<n;i++){
//             pre[i+1]=pre[i] + ((customers[i]=='N') ? 1 : 0);
//         }
//         suf[n]=0;
//         for(int i=n-1;i>=n;i++){
//             suf[i]=suf[i+1] + ((customers[i]=='Y') ? 1 : 0);
//         }
//         int minPenalty=n;//kuch bhi maan lia max panelty maan lia
//         //2 kaam honge pehla-pre aur suf add 2. min penalty
//         for(int i=0;i<=n;i++){
//             pre[i]+=suf[i];
//             int pen = pre[i];
//             minPenalty = min(minPenalty,pen);
//         }
//         for(int i=0;i<=n;i++){
//             if(pre[i]==minPenalty) return i;//hour return karna k elie
//         }
//         return n;
//     }
// };











// 1402. Reducing Dishes

// A chef has collected data on the satisfaction level of his n dishes. Chef can cook any dish in 1 unit of time.
// Like-time coefficient of a dish is defined as the time taken to cook that dish including previous dishes multiplied by its satisfaction level i.e. time[i] * satisfaction[i].
// Return the maximum sum of like-time coefficient that the chef can obtain after preparing some amount of dishes.
// Dishes can be prepared in any order and the chef can discard some dishes to get this maximum value.

// Example 1:

// Input: satisfaction = [-1,-8,0,5,-9]
// Output: 14
// Explanation: After Removing the second and last dish, the maximum total like-time coefficient will be equal to (-1*1 + 0*2 + 5*3 = 14).
// Each dish is prepared in one unit of time.




// class Solution {
// public:
//     int maxSatisfaction(vector<int>& satisfaction) {
//         int n=satisfaction.size();
//         sort(satisfaction.begin(),satisfaction.end());
//         int suf[n];
//         suf[n-1]=satisfaction[n-1];
//         for(int i=n-2;i>=0;i--){
//             suf[i] =suf[i+1] + satisfaction[i];
//         }
//         int idx=-1;
//         for(int i=0;i<n;i++){
//             if(suf[i]>=0){
//                 idx=i;
//                 break;
//             }
//         }
//      if(idx==-1) return 0;
//      int time=1;
//      int maxSum=0;
//      for(int i=idx;i<n;i++){
//         maxSum+=satisfaction[i]*time;
//         time++;
//      }
//     return maxSum;
//     }
// };


















// 2389. Longest Subsequence With Limited Sum

// You are given an integer array nums of length n, and an integer array queries of length m.
// Return an array answer of length m where answer[i] is the maximum size of a subsequence that you can take from nums such that the sum of its elements is less than or equal to queries[i].
// A subsequence is an array that can be derived from another array by deleting some or no elements without changing the order of the remaining elements.

// Example 1:

// Input: nums = [4,5,2,1], queries = [3,10,21]
// Output: [2,3,4]
// Explanation: We answer the queries as follows:
// - The subsequence [2,1] has a sum less than or equal to 3. It can be proven that 2 is the maximum size of such a subsequence, so answer[0] = 2.
// - The subsequence [4,5,1] has a sum less than or equal to 10. It can be proven that 3 is the maximum size of such a subsequence, so answer[1] = 3.
// - The subsequence [4,5,2,1] has a sum less than or equal to 21. It can be proven that 4 is the maximum size of such a subsequence, so answer[2] = 4.



// class Solution {
// public:
//     vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
//         int n=nums.size();
//         int m=queries.size();
//         sort(nums.begin(),nums.end());//t.c=O(nlogn) ,s.c=>O(logn)
//         vector<int> ans(m);
//         //running sum prefix
//         for(int i=1;i<n;i++){ //t.c=O(n)
//             nums[i]+=nums[i-1];
//         }
//        for(int i=0;i<m;i++){
//         int maxLen=0;
//         //Binary search
//         int lo=0;
//         int hi=n-1;
//         while(lo<=hi){
//             int mid=lo+(hi-lo)/2;
//             if(nums[mid]>queries[i]) hi=mid-1;
//             else{
//                 maxLen=mid+1;
//                 lo=mid+1;
//             }
//         }
//         ans[i]=maxLen;
//        }
//        return ans;//T.C=>O(n(m+logn)) ~=O((n+m)logn)
//     }
// };




// m-2
//   int m=queries.size();
//         sort(nums.begin(),nums.end());//t.c=O(nlogn) ,s.c=>O(logn)
//         vector<int> ans(m);
//         //running sum prefix
//         for(int i=1;i<n;i++){
//             nums[i]+=nums[i-1];
//         }
//         for(int i=0;i<m;i++){
//             int len=0;
//             for(int j=0;j<n;j++){
//                 if(nums[j]>queries[i]) break;
//                 len++;
//             }
//             ans[i]=len;
//         }
//         return ans;//T.C=>O(n(m+logn)) ~=O(n*m)





