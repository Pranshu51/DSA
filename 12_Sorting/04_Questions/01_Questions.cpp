 #include <iostream>
 #include <vector>
 #include <climits>
 #include <algorithm>
using namespace std;

// QUESTIONS

//QUE-1=>
/*
169. Majority Element

Given an array nums of size n, return the majority element.
The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

Example 1:
Input: nums = [3,2,3]
Output: 3
Example 2:
Input: nums = [2,2,1,1,1,2,2]
Output: 2
*/

// M-1 =>o(n^2) and it gives time limits exceeds in leetcode

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int n=nums.size();
//         for(int i=0;i<n;i++){
//             int count =1;
//             for(int j=i+1;j<n;j++){
//                 if(nums[i]==nums[j]){
//                     count++;
//                 }
//             }
//             if(count>(n/2)) return nums[i];
//         }
//         return -1;
//     }
// };


//m-2 =>o(nlogn) as we are sorting the array and then returning the middle element as the majority element will always be at the middle index after sorting


// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
 
//         sort(nums.begin(),nums.end());
//         return nums[nums.size()/2];
//     }
// };




//QUE-2=>
/*
Ques: Given an array with N distinct elements, convert the given array to a 
form where all elements are in the range from 0 to N-1. The order of elements 
is the same, i.e., 0 is placed in the place of the smallest element, 1 is 
placed for the second smallest element, ... N-1 is placed for the largest element.
*/

//M-1
// int main(){
//     int arr[]= {19,12,23,8,16};
//     int n =sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     vector<int> v(n,0);//0 shows that elements are unvisited
//     int x=0;
//     for(int i=0;i<n;i++){
//         int min=INT_MAX;
//         int mindx=-1;
//         for(int j=0;j<n;j++){
//             if(v[j]==1) continue;//if element is unvisited then only we will check for minimum
//             else{
//                 if(arr[j]<min){
//                     min=arr[j];
//                     mindx=j;
//                 }
//             }
//         }
//         arr[mindx]=x;//we will replace the minimum element with x which is the index of the minimum element
//         v[mindx]=1;//we will mark the minimum element as visited
//         x++;
//     }
//     cout<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//      return 0;
// }


//M-2=> if range is given from 0 to N-1 then we can directly replace the elements with their indices as the value of the element will be equal to its index after sorting
// int main(){
//     int arr[]= {19,12,23,8,16};
//     int n =sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     int x=0;
//     for(int i=0;i<n;i++){
//         int min=INT_MAX;
//         int mindx=-1;
//         for(int j=0;j<n;j++){
//             if(arr[j]<=0) continue;//if element is unvisited then only we will check for minimum
//             else{
//                 if(arr[j]<min){
//                     min=arr[j];
//                     mindx=j;
//                 }
//             }
//         }
//         arr[mindx]=-x;//we will replace the minimum element with x which is the index of the minimum element
//         x++;
//     }
//     cout<<endl;
//     for(int i=0;i<n;i++){
//         arr[i]=-arr[i];//we will convert the negative values back to positive values
//         cout<<arr[i]<<" ";
//     }
//      return 0;
// }


// 455. Assign Cookies

// Assume you are an awesome parent and want to give your children some cookies. But, you should give each child at most one cookie.

// Each child i has a greed factor g[i], which is the minimum size of a cookie that the child will be content with; and each cookie j has a size s[j]. If s[j] >= g[i], we can assign the cookie j to the child i, and the child i will be content. Your goal is to maximize the number of your content children and output the maximum number.
// Example 1:
// Input: g = [1,2,3], s = [1,1]
// Output: 1
// Explanation: You have 3 children and 2 cookies. The greed factors of 3 children are 1, 2, 3. 
// And even though you have 2 cookies, since their size is both 1, you could only make the child whose greed factor is 1 content.
// You need to output 1.
// Example 2:

// Input: g = [1,2], s = [1,2,3]
// Output: 2
// Explanation: You have 2 children and 3 cookies. The greed factors of 2 children are 1, 2. 
// You have 3 cookies and their sizes are big enough to gratify all of the children, 
// You need to output 2.

// class Solution {
// public:
//     int findContentChildren(vector<int>& g, vector<int>& s) {
//         sort(g.begin(),g.end());
//         sort(s.begin(),s.end());
//         int count =0;
//         int i=0;
//         int j=0;
//         while(i<g.size() && j<s.size()){
//             if(s[j]>=g[i]){
//                 count++;
//                 i++;
//                 j++;
//             }
//             else j++;
//         }
//         return count;
//     }
// };



//QUE
// Ques : Given an array, arr[] containing 'n' integers, the task is to find an integer (say K) such that after replacing each and 
// every index of the array by |a_i - K| where ( i ∈ [1, n] ), 
// results in a sorted array. If no such integer exists that satisfies the above condition then return -1.Find the range of k.
int min(float a,float b){
    return (a<b)?a:b;
}
int max(float a,float b){
    return (a>b)?a:b;
}
int main(){
    int arr[]={5,3,10,3};
    int n =sizeof(arr)/sizeof(arr[0]);
    float kmin=(float)(INT_MIN);
    float kmax=(float)(INT_MAX);
    bool flag=true;
    for(int i=0;i<n;i++){
        if(arr[i]>=arr[i+1]){//arr[i]-arr[i+1]>=0
            kmin=max(kmin,(arr[i]+arr[i+1]/2.0));
        }
        if(arr[i]<arr[i+1]){//arr[i]-arr[i+1]>=0
            kmax=min(kmax,(arr[i]+arr[i+1]/2.0));
        }
        if(kmin>kmax){
            flag=false;
        }
    }
    if(flag==false){
        cout<<-1;
    }
    else if(kmin==kmax){
       if(kmin-(int)kmin==0){
        cout<<"There is only one value of k which is "<<(int)kmin;
       }
        else cout<< -1;
    }
    else{
        if(kmin-(int)kmin==0){
            kmin=(int)kmin+1;
        }
        cout<<"There are infinite values of k in the range "<<kmin<<" to "<<(int)kmax;
    }
     return 0;

}