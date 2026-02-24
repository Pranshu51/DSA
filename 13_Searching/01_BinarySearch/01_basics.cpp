#include <iostream>
using namespace std;

// int main(){
//     int arr[]={1,2,3,5,10,15,20};
//     int target=3;
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int lo=0;
//     int hi=n-1;
//     int ans = -1;
//     while(lo<=hi){
//         int mid = (hi+lo)/2 or lo+(hi-lo)/2;
//         if(arr[mid]==target) {
//             ans=mid;
//             break;
//         }
//         else if(arr[mid]>target) hi=mid-1;
//         else lo=mid+1;
//     }
//     cout <<ans;
//     return 0;
// }


// 704. Binary Search
// Easy
// Topics
// premium lock icon
// Companies
// Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

// You must write an algorithm with O(log n) runtime complexity.
// Example 1:
// Input: nums = [-1,0,3,5,9,12], target = 9
// Output: 4
// Explanation: 9 exists in nums and its index is 4
// Example 2:
// Input: nums = [-1,0,3,5,9,12], target = 2
// Output: -1
// Explanation: 2 does not exist in nums so return -1

// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//         int lo=0;
//         int hi=nums.size()-1;
//         while(lo<=hi){
//             int mid=/*(lo+hi)/2;*/lo+(hi-lo)/2;
//             if(nums[mid]==target) return mid;
//             else if(nums[mid]<target) lo=mid+1;
//             else hi=mid-1;
//         }
//         return -1;
//     }
// };

//Que=> Lower Bound
//Given a sorted array and an inteer 'x' find the lower bound of the x.

//1.linear search 

// int main(){
//     int arr[]={1,2,3,5,10,15,24};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int x=4;
//     for(int i=0;i<n;i++){
//         if(arr[i]>x){
//             cout<<arr[i-1];
//             break;
//         }
//     }
// //3
// }

//2.Bianry Search
//1.

//     int main(){
//     int arr[]={1,2,3,5,10,15,20};
//     int target=3;
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int lo=0;
//     int hi=n-1;
//     bool flag = false;
//     while(lo<=hi){
//         int mid = /*(hi+lo)/2 or*/ lo+(hi-lo)/2;
//         if(arr[mid]==target) {
//             cout<<arr[mid-1];
//             flag = true;
//             break;
//         }
//         else if(arr[mid]>target) hi=mid-1;
//         else lo=mid+1;
//     }
//     if(flag==false){
//         cout<<arr[hi];
//     }
// }




//2.
// int main(){
//     int arr[]={1,2,3,5,10,15,24};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int x=4;
//     int lo=0;
//     int hi=n-1;
//     int ans=-1;
//     while(lo<=hi){
//         int mid=lo+(hi-lo)/2;
//         if(arr[mid]<=x){
//             ans=arr[mid];
//             lo=mid+1;
//         }
//         else hi=mid-1;
//     }
//     cout<<ans;//3
// }




//UPPER BOUND
    int main(){
    int arr[]={1,2,3,5,10,15,20};
    int target=3;
    int n = sizeof(arr)/sizeof(arr[0]);
    int lo=0;
    int hi=n-1;
    bool flag = false;
    while(lo<=hi){
        int mid = /*(hi+lo)/2 or*/ lo+(hi-lo)/2;
        if(arr[mid]==target) {
            cout<<arr[mid+1];
            flag = true;
            break;
        }
        else if(arr[mid]>target) hi=mid-1;
        else lo=mid+1;
    }
    if(flag==false){
        cout<<arr[lo];//only chnage here
    }
}
