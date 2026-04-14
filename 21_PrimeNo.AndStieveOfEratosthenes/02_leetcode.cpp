

// 2614. Prime In Diagonal

// You are given a 0-indexed two-dimensional integer array nums.
// Return the largest prime number that lies on at least one of the diagonals of nums. In case, no prime is present on any of the diagonals, return 0.
// Note that:

// An integer is prime if it is greater than 1 and has no positive integer divisors other than 1 and itself
// An integer val is on one of the diagonals of nums if there exists an integer i for which nums[i][i] = val or an i for which nums[i][nums.length - i - 1] = val.
// In the above diagram, one diagonal is [1,5,9] and another diagonal is [3,5,7].
// Example 1:
// Input: nums = [[1,2,3],[5,6,7],[9,10,11]]
// Output: 11
// Explanation: The numbers 1, 3, 6, 9, and 11 are the only numbers present on at least one of the diagonals. Since 11 is the largest prime, we return 11.

// class Solution {
// public://t.c=>O(n root n)
//     bool isPrime(int n){
//         if(n==1) return false;
//         for(int i=2;i<=sqrt(n);i++){
//             if(n%i==0) return false;
//         }
//         return true;
//     }
//     int diagonalPrime(vector<vector<int>>& nums) {
//         int n=nums.size();//rows
//         int maxPrime=0;
//         for(int i=0;i<n;i++){
//             if(isPrime(nums[i][i])){
//                 maxPrime=max(maxPrime,nums[i][i]);
//             }
//             if(isPrime(nums[i][n-i-1])){
//                 maxPrime=max(maxPrime,nums[i][n-i-1]);
//             }
//         }
//         return maxPrime;
//     }
// };





// 507. Perfect Number

// A perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the number itself. A divisor of an integer x is an integer that can divide x evenly.
// Given an integer n, return true if n is a perfect number, otherwise return false.
// Example 1:
// Input: num = 28
// Output: true
// Explanation: 28 = 1 + 2 + 4 + 7 + 14
// 1, 2, 4, 7, and 14 are all divisors of 28.



//  class Solution {
// public:
//     bool checkPerfectNumber(int num) {
//         int sum=0;
//         for(int i=1;i<sqrt(num);i++){
//             if(num%i==0) sum+=i;
//         }
//         for(int i=sqrt(num);i>1;i--){
//             if(num%i==0) sum+=num/i;
//         }
//         return (sum==num);//same as sum==n return true else return false
//     }
// };


//m-2

// class Solution {
// public:
//     bool checkPerfectNumber(int num) {
//         int sum=0;
//         for(int i=1;i<sqrt(num);i++){
//             if(num%i==0) sum+=i;
//         }
//         for(int i=sqrt(num);i>=1;i--){
//             if(num%i==0) sum+=num/i;
//         }
//         sum-=num;
//         return (sum==num);//same as sum==n return true else return false
//     }
// };







// 2507. Smallest Value After Replacing With Sum of Prime Factors

// You are given a positive integer n.
// Continuously replace n with the sum of its prime factors.
// Note that if a prime factor divides n multiple times, it should be included in the sum as many times as it divides n.
// Return the smallest value n will take on.

// Example 1:
// Input: n = 15
// Output: 5
// Explanation: Initially, n = 15.
// 15 = 3 * 5, so replace n with 3 + 5 = 8.
// 8 = 2 * 2 * 2, so replace n with 2 + 2 + 2 = 6.
// 6 = 2 * 3, so replace n with 2 + 3 = 5.
// 5 is the smallest value n will take on.


// class Solution {
// public:
//     bool isPrime(int n){
//         if(n==1) return false;
//         for(int i=2;i<=sqrt(n);i++){
//             if(n%i==0) return false;
//         }
//         return true;
//     }
//     int smallestValue(int n) {
//         if(isPrime(n)) return n;
//         int sum=0;
//         for(int i =1;i<sqrt(n);i++){
//             if(n%i==0 && isPrime(i)){
//                 int m=n;
//                 while(m%i==0){
//                    sum+=i;
//                     m/=i;
//                 }
//             }
//         }
//         for(int i =sqrt(n);i>=1;i--){
//             if(n%i==0 && isPrime(n/i)){
//                 int m=n;
//                 while(m%(n/i)==0){//O(logm)
//                    sum+=(n/i);
//                     m/=(n/i);
//                 }
//             }
//         }
//         if(n==4) return 4;
//         return smallestValue(sum);
//     }
// };




//Sieve of Eratosthenes
//it means to find all prime number from 1 to n
//we make a grid of size n and mark all the number as prime and then we start from 2 and mark all the multiple of 2 as non prime and then we move to 3 and mark all the multiple of 3 as non prime and so on
//time complexity is O(n) and space complexity is O(n)
//n/2+n/3+...n/sqrt(n)=>O(n)





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

