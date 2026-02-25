#include<iostream>
using namespace std;

// QUE=>Given a sorted array of n elements and a target ‘x’.  Find the last occurrence of ‘x’ in the array.  If 
// ‘x’ does not exist return -1.
// Input 1: arr[] = {1,2,3,3,4,4,4,5} , x = 4
// Output 1: 6

// int main(){
//     int arr[]={1,2,3,3,4,4,4,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int x=4;
//     int lo=0;
//     int hi=n-1;
//     while(lo<=hi){
//         int mid=lo+(hi-lo)/2;
//         if(arr[mid]==x){
//             if(arr[mid+1]==x) lo=mid+1;
//             else{
//                 cout<<mid;
//                 break;
//             }
//         }
//         else if(arr[mid]<x) lo=mid+1;
//         else hi=mid-1;
//     }
// }//6


//2.Given a sorted binary array, efficiently count the total number of 1’s in it.
// Input 1 : a = [0,0,0,0,1,1]
//Output 1: 2
#include <vector>

// int countOnes(vector<int>& arr) {
//     int n = arr.size();
//     int low = 0, high = n - 1;
//     int firstOneIndex = -1;

//     while (low <= high) {
//         int mid = low + (high - low) / 2;

//         if (arr[mid] == 1) {
//             // It's a 1, but is it the *first* 1? 
//             // Save index and check the left half.
//             firstOneIndex = mid;
//             high = mid - 1;
//         } else {
//             // It's a 0, so all 1s must be to the right.
//             low = mid + 1;
//         }
//     }

//     if (firstOneIndex == -1) return 0;
//     return n - firstOneIndex;
// }

// int main() {
//     vector<int> a = {0, 0, 0, 0, 1, 1,1};
//    cout << "Count of 1s: " << countOnes(a) << endl;
//     return 0;
// }


//USING FIRST AOCCURENCE METHOD
// int main(){
//     int arr[]={0,0,0,0,1,1,1,1};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int lo=0;
//     int hi=n-1;
//     int ans=-1;
//     while(lo<=hi){
//         int mid=lo+(hi-lo)/2;
//         if(arr[mid]==1){
//             if(arr[mid-1]==1) hi=mid-1;
//             else{
//                 ans=mid;
//                 break;
//             }
//         }
//         else if(arr[mid]<1) lo=mid+1;
//         else hi=mid-1;  
//     }
//     if(ans==-1) cout<<"0";
//     else cout<<"the count of 1 is: "<<n-ans;
// }


//QUEGiven a matrix having 0-1 only where each row is sorted in increasing order, find the row with the 
// maximum number of 1’s.
// Input matrix : 0 1 1 1
// 0 0 1 1
// 1 1 1 1  // this row has maximum 1s
// 0 0 0 0
// Output: 2

// int main(){
//     vector<vector<int>> matrix = {
//         {0, 1, 1, 1},
//         {0, 0, 1, 1},
//         {1, 1, 1, 1},
//         {0, 0, 0, 0}
//     };

//     int maxOnesRowIndex = -1;
//     int maxOnesCount = -1;
    
//     for (int i = 0; i < matrix.size(); i++) {
//         int count = 0;
//         for (int j = 0; j < matrix[i].size(); j++) {
//             if (matrix[i][j] == 1) count++;
//         }
//         if (count > maxOnesCount) {
//             maxOnesCount = count;
//             maxOnesRowIndex = i;
//         }
//     }
//     cout << "Row with maximum 1s: " << maxOnesRowIndex << endl;
// }


//2nd method using binary search
// int main(){
//      vector<vector<int>> matrix = {
//         {0, 1, 1, 1},
//         {1, 1, 1, 1},
//         {0, 0, 1, 0},
//         {0, 0, 0, 0}
//     };
//     int maxOnesRowIndex = -1;
//     int maxOnesCount = -1;
//     for(int i=0;i<matrix.size();i++){
//         int lo=0;
//         int hi=matrix[i].size()-1;
//         int count =0;
//         while(lo<=hi){
//             int mid=lo+(hi-lo)/2;
//             if(matrix[i][mid]==1){
//                 count=matrix[i].size()-mid;
//                 hi=mid-1;
//             }
//             else lo=mid+1;
//         }
//         if(count>maxOnesCount){
//             maxOnesCount=count;
//             maxOnesRowIndex=i;
//         }
//     }
//     cout<<"Row with maximum 1s: "<<maxOnesRowIndex<<endl;
// }

//QUE=>Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] 
// inclusive in sorted order.
// There is only one repeated number in nums, return this repeated number.
// Input 1: arr[] = {1,2,3,3,4}
// Output 1: 3
// Input 2: arr[] = {1,2,2,3,4,5}
// Output 2: 2

// int main() {
//     int arr[] = {1,2,3,3,4};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     int lo = 0;
//     int hi = n - 1;

//     while(lo <= hi){
//         int mid = lo + (hi - lo)/2;

//         // Check with previous element (only if mid > 0)
//         if(mid > 0 && arr[mid] == arr[mid-1]) {
//             cout << arr[mid];
//             break;
//         }

//         // Check with next element (only if mid < n-1)
//         if(mid < n-1 && arr[mid] == arr[mid+1]) {
//             cout << arr[mid];
//             break;
//         }

//         // If value is greater than expected position
//         if(arr[mid] > mid + 1)
//             hi = mid - 1;
//         else
//             lo = mid + 1;
//     }

//     return 0;
// }
//QUE=>Given a number ‘n’. Predict whether ‘n’ is a valid perfect square or not.
// Input 1: n = 36
// Output 1: yes
// Input 2: n = 45
// Output 2: no

// int main(){
//     int n = 0;

//     if(n < 0){
//         cout << "no";
//         return 0;
//     }

//     for(long long i = 0; i*i <= n; i++){
//         if(i*i == n){
//             cout << "yes";
//             return 0;
//         }
//     }

//     cout << "no";
// }


// int main(){
//     int n=37;
//     int lo=0;
//     int hi=n;
//     while(lo<=hi){
//         int mid=lo+(hi-lo)/2;
//         long long m=(long long)mid*mid;
//         if(m==n){
//             cout<<"yes";
//             return 0;
//         }
//         else if(m>n) hi=mid-1;
//         else lo=mid+1;
//     }
//     cout<<"no";
// }

//QUE =>
// Example 1:
// You have n coins and you want to build a staircase with these coins. The staircase consists of k 
// rows where the ith row has exactly i coins. The last row of the staircase may be incomplete.
// Given the integer n, return the number of complete rows of the staircase you will build.
// Input: n = 5
// Output: 2
// Explanation: Because the 3rd row is incomplete, we return 2.
// Example 2:
// Input: n = 8
// Output: 3
// Explanation: Because the 4th row is incomplete, we return 3.

//.LinearSearch
// int main(){
//     int n =5;
//     int i=1;
//     int res=0;
//     while(n>=i){
//         n=n-i;
//         res++;
//         i++;
//     }
//     cout<<res;
// }

//Binary Search
int main() {
    long long n = 5;
    long long lo = 0, hi = n, ans = 0;

    while (lo <= hi) {
        long long mid = lo + (hi - lo) / 2;
        long long coins = mid * (mid + 1) / 2;

        if (coins <= n) {       // mid is a valid number of complete rows
            ans = mid;
            lo = mid + 1;       // try to see if we can build more rows
        } else {
            hi = mid - 1;       // too many coins, reduce rows
        }
    }

    cout << ans;                // for n = 5, prints 2
}