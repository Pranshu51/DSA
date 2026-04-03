#include<iostream>
#include<vector>
using namespace std;



// 1. Write a program to calculate the sum of odd numbers between a and b (both inclusive) using 
// recursion.


//1.Iterative approach

// int main(){
//     int a,b;
//     cout<<"Enter two numbers : ";
//     cin>>a>>b;
//     int sum = 0;
//     for(int i=a;i<=b;i++){
//         if(i%2!=0) sum+=i;
//     }
//     cout<<"Sum of odd numbers between "<<a<<" and "<<b<<" is "<<sum<<endl;
//      return 0;
// }


//2. Recursive approach

// int findSum(int current, int lastNumber){
//     if(current>lastNumber) return 0;
//     if(current%2!=0) return current+findSum(current+1, lastNumber);
//      return findSum(current+1, lastNumber);
// }

// int main(){
//     int current, lastNumber;
//     cout<<"Enter two numbers : ";
//     cin>>current>>lastNumber;
//     cout<<"Sum of odd numbers between "<<current<<" and "<<lastNumber<<" is "<<findSum(current, lastNumber)<<endl;
//     return 0;
// }



//2.Calculate the number of ways in which a person can climb n stairs if he can take exactly 1, 2 or 3 
// steps at each level.
// int findWays(int n){
//     if(n<0) return 0;
//     if(n==0) return 1;
//     return findWays(n-1)+findWays(n-2)+findWays(n-3);
// }

// int main(){
//     int n ;
//     cout<<"Enter the number of stairs : ";
//     cin>>n;
//     cout<<"Number of ways to climb "<<n<<" stairs is "<<findWays(n)<<endl;
//      return 0;
// }



// Given a positive integer, return true if it is a power of 2.
// int pow(int n){
//     if(n==1 ) return 1;
//     if(n%2==0) return pow(n/2);
//     return false;
// }
// int main(){
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;
//     if(pow(n))
//         cout<<"The number is a power of 2."<<endl;
//     else
//         cout<<"The number is not a power of 2."<<endl;
//     return 0;
// }









//ASS-2



//Que1.Print all the elements of an array in reverse order.

// void printReverseOrder(vector<int> &arr,int currentIndex,int n){
//     if(currentIndex==n){
//         return;
//     }
//     printReverseOrder(arr,currentIndex+1,n);
//     cout<<arr[currentIndex]<<" ";
// }



// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     printReverseOrder(arr,0,n);
// }


//Que 2.Print index of a given element in an array. If not present, print -1.


// int printIndex(vector<int> &arr, int currIndex,int n,int target){
//     if(currIndex==n){
//         return -1;
//     }
//     if(arr[currIndex]==target){
//         return currIndex;
//     }
//     return printIndex(arr,currIndex+1,n,target);
// }

// int main(){
//     int n,target;
//     cout<<"Enter the size of array: ";
//     cin>>n;
//     cout<<"Enter the target element: ";
//     cin>>target;
//     vector<int> arr(n);
//     cout<<"Enter the elements of array: ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//    cout<< printIndex(arr,0,n,target);
// }




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
//         string b= countAndSay(n-1);
//         string ans="";
//         int count=1;
//         for(int i=0;i<b.size()-1;i++){
//             if(b[i]==b[i+1]) count++;
//             else{
//                 ans+=to_string(count)+b[i];
//                 count=1;
//             }
//         }
//         int size = b.size();
//         ans+=to_string(count)+b[size-1];
//         return ans;
//     }
    
// };


//OR
// string countAndSay(int n) {
// if(n == 1) {
// return "1";
//     }
//     string ans = "";
//     string smallAns = countAndSay(n-1);
// for(int i = 0; i < smallAns.size();) {
//         int count = 1;
//         int j = i+1;
// while(j < smallAns.size() && smallAns[i] == smallAns[j]) 
//    {
//             j++;
//             count++;
//         }
//         ans = ans + to_string(count) + smallAns[i];
//         i = j;
//     }
// return ans;
// }




// Given an array of integers, print a sum triangle using recursion from it such that the first level 
// has all array elements. After that, at each level the number of elements is one less than the 
// previous
// level and elements at the level will be the sum of consecutive two elements in the previous 
// level.
// So, if sample input is [5, 4, 3, 2, 1], sample output will be:
// [5, 4, 3, 2, 1]
// [9, 7, 5, 3]
// [16, 12, 8]
// [28, 20]
// [48]





// void sumTriangle(vector<int> &arr, int n) {
//     if(n == 0) return;
//     vector<int> temp(n-1);
//     for(int i = 0; i < n; ++i) {
//         cout << arr[i] << " ";
//     if(i != 0) {
//             temp[i-1] = arr[i-1] + arr[i];
//         }
//     }
//     cout << endl;
//     sumTriangle(temp, n-1);
// }
// int main() {
//     int n;
//     cin >> n;
//     vector<int> arr(n);
// for(int i = 0; i < n; ++i) {
//         cin >> arr[i];
//     }
//     sumTriangle(arr, n);
//     return 0;
// }