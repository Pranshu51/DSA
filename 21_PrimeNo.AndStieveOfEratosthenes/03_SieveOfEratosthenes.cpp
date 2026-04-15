//Sieve of Eratosthenes
//it means to find all prime number from 1 to n
//we make a grid of size n and mark all the number as prime and then we start from 2 and mark all the multiple of 2 as non prime and then we move to 3 and mark all the multiple of 3 as non prime and so on
//time complexity is O(n log log n) ~ O(n) and space complexity is O(n)
//n/2+n/3+...n/sqrt(n)=>O(n log (log n)) ~ O(n)





// 204. Count Primes

// Given an integer n, return the number of prime numbers that are strictly less than n.
 
// Example 1:
// Input: n = 10
// Output: 4
// Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.



// class Solution {
// public:
// void fillSieve( vector<bool>& sieve){
//     int n=sieve.size()-1;
//     for(int i=2;i<=sqrt(n);i++){
//         for(int j=i*2;j<=n;j+=i){
//             sieve[j]=0;
//         }
//     }
// }
//     int countPrimes(int n) {
//         if(n<=2) return 0;
//         n=n-1;
//         int count=0;
//         vector<bool> sieve(n+1,1);//1 means Prime and 0 means not prime
//         fillSieve(sieve);
//         sieve[0]=0;
//         sieve[1]=0;
//         for(int i=2;i<=n;i++){
//             if(sieve[i]==1) count++;
//         }
//         return count;
//     }
// };





// 2521. Distinct Prime Factors of Product of Array
// Given an array of positive integers nums, return the number of distinct prime factors in the product of the elements of nums.
// Note that:
// A number greater than 1 is called prime if it is divisible by only 1 and itself.
// An integer val1 is a factor of another integer val2 if val2 / val1 is an integer.

// Example 1:
// Input: nums = [2,4,3,7,10,6]
// Output: 4
// Explanation:
// The product of all the elements in nums is: 2 * 4 * 3 * 7 * 10 * 6 = 10080 = 25 * 32 * 5 * 7.
// There are 4 distinct prime factors so we return 4.



// class Solution {
// public:
//     void fillSieve(vector<int>& sieve){
//         int n=sieve.size()-1;
//         for(int i=2;i<=sqrt(n);i++){
//             for(int j=i*2;j<=n;j+=i){
//                 sieve[j]=0;
//             }
//         }
//     }
//     int distinctPrimeFactors(vector<int>& nums) {
//         int n=nums.size();
//         int mx=-1;
//         for(int i=0;i<n;i++){
//             mx=max(mx,nums[i]);
//         }
//         vector<int> sieve(mx+1,1);
//         if(mx+1>0) sieve[0]=0;
//         if(mx+1>1) sieve[1]=0;
//         fillSieve(sieve);
//         vector<int> prime;
//         for(int i=0;i<=mx;i++){
//             if(sieve[i]==1) prime.push_back(i);
//         }
//         vector<int> taken(prime.size(),0);
//         for(int i=0;i<nums.size();i++){
//             for(int j=0;j<prime.size();j++){
//                 if(prime[j]>nums[i]) break;
//                 if(nums[i]%prime[j]==0) taken[j]=1;
//             }
//         }
//         int count=0;
//         for(int i=0;i<taken.size();i++){
//             if(taken[i]==1) count++;
//         }
//         return count;
//     }
// };