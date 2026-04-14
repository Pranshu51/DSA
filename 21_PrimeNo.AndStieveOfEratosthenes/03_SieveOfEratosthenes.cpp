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