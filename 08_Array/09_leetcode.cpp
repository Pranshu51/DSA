//Sort 0's and 1's in an array
#include<iostream>
#include<vector>
using namespace std;
// M-1:

// #include<iostream>
// #include<vector>
// using namespace std;
// void sort01(vector<int>& v){
//     int no0=0;
//     int no1=1;
//     for(int i=0;i<v.size();i++){
//         if(v[i]==0) no0++;
//         else no1++;
//     }
//     for(int i=0;i<v.size();i++){
//         if(i<no0) v[i]=0;
//         else v[i]=1;
//     }
//       cout<<endl;
// }
// int main(){
//     vector<int> v={0,1,0,1,1,0,0,1,0};
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
  

//     sort01(v);
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
// }

// M-2: "Two pointers" approach means two varibles

// void sort02(vector<int>& v){
//     int n=v.size();
//     int i=0;
//     int  j=n-1;
//     while(i<j){
         
//         if(v[i]==0) i++;
//         else if (v[j]==1) j--;
//         // if(i>j) break;
//         else if(v[i]==1 && v[j]==0){ //give errror without else if then  you have to use if(i>j) break;
//             // int temp =v[i];
//             // v[i] =v[j];
//             // v[j] =temp;
//             v[i]=0;
//             v[j]=1;
//             i++;
//             j--;
//         }
    
//     }
//     cout<<endl;
// }

// void sort02(vector<int>& v){
//     int start=0;
//     int end=v.size()-1;
//     int i=0;
//     while(i<=end){
//         if(v[i]==0){
//             swap(v[i],v[start]);
//             start++;
//             i++;
//         }
//         else{
//             swap(v[i],v[end]);
//             end--;
//         }
//     }
//       cout<<endl;
// }
// int main(){
//     vector<int> v={1,1,0,1,0,1,1,0};
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
  

//     sort02(v);
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
// }


// MOve all the negative no. to beginning and positive to end with constant extra space

// int main(){
//     vector<int> v={-1,2,-2,6,-7,2,0,-3,10};
//     int i =0;
//     int j=v.size()-1;
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     while(i<j){
//         if(v[i]<0) i++;
//         else if(v[j]>=0) j--;
//         else if(v[i]>=0 && v[j]<0){
//             swap(v[i],v[j]);
//             i++;
//             j--;
//         }
//     }
//      for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }

// }

// Sort color s (0,1,2)

// TWO -PASS ALGORITHM


    // void sortColors(vector<int>& nums) {
    //     int no0=0;
    //     int no1=0;
    //     int no2=0;
    //     for(int i=0;i<nums.size();i++){
    //         if(nums[i]==0) {no0++;}
    //         else if(nums[i]==1) {no1++;}
    //         else {no2++;}
    //     }
    //     for(int i=0;i<nums.size();i++){
    //         if(i<no0) nums[i]=0;
    //         else if(i<(no0+no1)) nums[i]=1;
    //         else nums[i]=2;
    //     }
    // }
    // int main(){
    //     vector<int> v={2,0,2,1,1,0};
    //     for(int i=0;i<v.size();i++){
    //         cout<<v[i]<<" ";
    //     }
      
    
    //     sortColors(v);
    //     cout<<endl;
    //     for(int i=0;i<v.size();i++){
    //         cout<<v[i]<<" ";
    //     }
    // }


    // DUTCH FLAG ALGORITHM (ONE -PASS ALGORITHM)

    
    // void sortColors(vector<int>& nums) {
    //     int low=0;
    //     int mid=0;
    //     int high=nums.size()-1;
    //     while(mid<=high){
    //         if(nums[mid]==0){
    //             swap(nums[low],nums[mid]);
    //             low++;
    //             mid++;
    //         }
    //         else if(nums[mid]==1){
    //             mid++;
    //         }
    //         else{
    //             swap(nums[mid],nums[high]);
    //             high--;
    //         }
    //     }
    // }

    // int main(){
    //     vector<int> v={2,0,2,1,1,0};
    //     for(int i=0;i<v.size();i++){
    //         cout<<v[i]<<" ";
    //     }
      
    
    //     sortColors(v);
    //     cout<<endl;
    //     for(int i=0;i<v.size();i++){
    //         cout<<v[i]<<" ";
    //     }
    // }




    
// find the second largest element in an array

#include<climits>
// int main(){
//     int n;
//     cout<<"Enter the size of array: ";
//     cin>>n;
//     int arr[n];
//     int max=INT_MIN;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         if(max<arr[i]){
//             max=arr[i];
//         }
//     }
//     cout<<"Largest element is: "<<max<<endl;
//     int secondMax=INT_MIN;
//     for(int i=0;i<n;i++){
//         if(arr[i]!=max && secondMax<arr[i]){
//             secondMax=arr[i];
//         }
//     }
//     cout<<"Second largest element is: "<<secondMax<<endl;

// }

// Find the second largest element in the given Array in one pass.

// #include <iostream>
// #include <climits>
// using namespace std;

// int findSecondLargest(int arr[], int n) {
//     if (n < 2) {
//         cout << "Array should have at least 2 elements" << endl;
//         return INT_MIN;
//     }
    
//     int largest = INT_MIN, secondLargest = INT_MIN;
    
//     for (int i = 0; i < n; i++) {
//         if (arr[i] > largest) {
//             secondLargest = largest;
//             largest = arr[i];
//         } else if (arr[i] > secondLargest && arr[i] != largest) {
//             secondLargest = arr[i];
//         }
//     }
    
//     // If secondLargest is still INT_MIN, it means all elements are same
//     if (secondLargest == INT_MIN) {
//         cout << "No second largest element (all elements are equal)" << endl;
//         return -1;
//     }
    
//     return secondLargest;
// }



//WAP to find the smallest missing positive element in the sorted Array that contains only 
// positive elements.


// #include <iostream>
// #include <vector>
// using namespace std;

// bool containsDuplicate(vector<int>& nums) {
//     int n = nums.size();
    
//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (nums[i] == nums[j]) {
//                 return true;  // Duplicate found
//             }
//         }
//     }
//     return false;  // No duplicates
// }


//Preidct the ooutput
// int main()
// {
//     int sub[50], i;
//     for (i = 0; i <= 48; i++);  // SEMICOLON HERE - creates empty loop body
//     {
//         sub[i] = i;  // i = 49 after loop
//         cout << sub[i] << endl;
//     }
//     return 0;
// }


// Merge two sorted array (Leetcode-88)


// vector<int> merge(vector<int>& nums1,vector<int>& nums2){
//     int n=nums1.size();
//     int m=nums2.size();
//     vector<int> res(n+m);
//     int i=0;//arr=1
//     int j=0;//arr=2
//     int k=0;//arr=3
//     while(i<n &&j<m){
//         if(nums1[i]<nums2[j]){
//             res[k]=nums1[i];
//             i++;
//             k++;
//         }
//         else{
//             res[k]=nums2[j];
//             j++;
//             k++;
//         }
//     }
//     if(i==n){
//         while(j<m){
//             res[k]=nums2[j];
//             j++;
//             k++;
//         }
//     }
//       if(j==m){
//         while(i<n){
//             res[k]=nums1[i];
//             j++;
//             k++;
//         }
//     }
//     return res;
// }

// int main(){
//     vector<int> nums1={1,2,3,4,5};
//       for(int i=0;i<nums1.size();i++){
//         cout<<nums1[i]<<" ";
//     }
//     cout<<endl;
//     vector<int> nums2={2,5,6};
//       for(int i=0;i<nums2.size();i++){
//         cout<<nums2[i]<<" ";
//     }
//     cout<<endl;
//     vector<int> v=merge(nums1,nums2);

//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
// }


/*(Leetcode-88)
You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

 

Example 1:

Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]
Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.
*/

// void merge(vector<int>& nums1 , int m ,vector<int>& nums2 , int n){
//     int i=m-1;
//     int j=n-1;
//     int k =n+m-1;
//     while(i>=0 && j>=0){
//         if(nums1[i]>nums2[j]){
//             nums1[k]=nums1[i];
//             i--;
//         }
//         else{
//             nums1[k]=nums2[j];
//             j--;
//         }
//         k--;
//     }
//     while(j>=0){
//         nums1[k]=nums2[j];
//         j--;
//         k--;
//     }
//     for(int i=0;i<nums1.size();i++){
//         cout<<nums1[i]<<" ";
//     }
// }

// int main(){
//     vector<int> nums1={1,2,3,0,0,0};
//     int m=3;
//     vector<int> nums2={2,5,6};
//     int n=3;
//     merge(nums1,m,nums2,n);
// }

