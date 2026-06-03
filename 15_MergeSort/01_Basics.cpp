//if array=> delete a; or vector is there you will do => a.clear();
#include <iostream>
#include <vector>
using namespace std;


//T.C=> O(nlogn)=because we are dividing the array into two halves and merging them back together, which takes O(n) time. The depth of the recursion is log(n) because we are halving the array at each step.
//S.C=> O(nlogn)=because at every step we are creating two new vectors to hold the left and right halves of the array, which takes O(n) space. The depth of the recursion is log(n) because we are halving the array at each step, so the total space complexity is O(nlogn).
// but we can reduce space complexity to O(n) by using delete or clear after merging the two halves of the array, we can free up the memory used by the left and right vectors. This way, we only need O(n) space to hold the merged array at any given time, rather than O(nlogn) space for all the recursive calls.
//STABLE=> because it maintains the relative order of equal elements in the sorted output. In merge sort, when two elements are equal, the element from the left half is placed before the element from the right half in the merged output. This ensures that the original order of equal elements is preserved, making merge sort a stable sorting algorithm.
//its drawback is its time complecity but we can improve it to O(n).


// void merge(vector<int> &a,vector<int> &b,vector<int> &v){
//     int i=0;
//     int j=0;
//     int k=0;
//     while(i<a.size() && j<b.size()){
//         if(a[i]<=b[j]){
//             v[k++]=a[i++];
//         }else{
//             v[k++]=b[j++];
//         }
//         if(i==a.size()){
//             while(j<b.size()){
//                 v[k++]=b[j++];
//             }
//         }
//         if(j==b.size()){
//             while(i<a.size()){
//                 v[k++]=a[i++];
//             }
//     }
// }
// }

// void mergeSort(vector<int> &v){
//  int n=v.size();
//  if(n==1) return;
//  int left=n/2;
//  int right=n-n/2;
//  vector<int> a(left);
//  vector<int> b(right);
//  for(int i=0;i<left;i++){
//     a[i]=v[i];
//  }
//  for(int i=0;i<right;i++){
//     b[i]=v[left+i];
//  }
//     mergeSort(a);
//     mergeSort(b);

//     merge(a,b,v);
// }



// int main(){
//     int arr[]={2,1,6,2,5,10,4,3};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     vector<int> v(arr,arr+n);
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }    cout<<endl;
//     mergeSort(v);
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }    cout<<endl;
// }





// Count Inversions
// Problem Statement:Two elements of an array a, a[i] and a[j] form an inversion if a[i] > a[j] and i < j.
//  Given an array of integers, find the Inversion Count in the array.


// int count =0;

// int inversion(vector<int> &a,vector<int> &b){
//     int i=0;
//     int j=0;
//     int cnt=0;
//     while(i<a.size() && j<b.size()){
//         if(a[i]<=b[j]){
//            cnt+=(a.size()-i);
//             j++;
//         }else{
//             i++;        }
//     }
//     return cnt;
// }


// void merge(vector<int> &a,vector<int> &b,vector<int> &v){
//     int i=0;
//     int j=0;
//     int k=0;
//     while(i<a.size() && j<b.size()){
//         if(a[i]<=b[j]){
//             v[k++]=a[i++];
//         }else{
//             v[k++]=b[j++];
//         }
//         if(i==a.size()){
//             while(j<b.size()){
//                 v[k++]=b[j++];
//             }
//         }
//         if(j==b.size()){
//             while(i<a.size()){
//                 v[k++]=a[i++];
//             }
//     }
// }
// }

// void mergeSort(vector<int> &v){
//  int n=v.size();
//  if(n==1) return;
//  int left=n/2;
//  int right=n-n/2;
//  vector<int> a(left);
//  vector<int> b(right);
//  for(int i=0;i<left;i++){
//     a[i]=v[i];
//  }
//  for(int i=0;i<right;i++){
//     b[i]=v[left+i];
//  }
//     mergeSort(a);
//     mergeSort(b);
//     count+=inversion(a,b);
//     merge(a,b,v);
// }



// int main(){
//     int arr[]={5,1,3,0,4,2,6};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     vector<int> v(arr,arr+n);
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }    cout<<endl;
//     mergeSort(v);
//         cout <<"Inversion Count: "<<count<<endl;

    
// }




//if you dont require global count variable



// int inversion(vector<int> &a,vector<int> &b){
//     int i=0;
//     int j=0;
//     int cnt=0;
//     while(i<a.size() && j<b.size()){
//         if(a[i]<=b[j]){
//            cnt+=(a.size()-i);
//             j++;
//         }else{
//             i++;        }
//     }
//     return cnt;
// }


// void merge(vector<int> &a,vector<int> &b,vector<int> &v){
//     int i=0;
//     int j=0;
//     int k=0;
//     while(i<a.size() && j<b.size()){
//         if(a[i]<=b[j]){
//             v[k++]=a[i++];
//         }else{
//             v[k++]=b[j++];
//         }
//         if(i==a.size()){
//             while(j<b.size()){
//                 v[k++]=b[j++];
//             }
//         }
//         if(j==b.size()){
//             while(i<a.size()){
//                 v[k++]=a[i++];
//             }
//     }
// }
// }

// int mergeSort(vector<int> &v){
//  int n=v.size();
//  int count=0;
//  if(n==1) return 0;
//  int left=n/2;
//  int right=n-n/2;
//  vector<int> a(left);
//  vector<int> b(right);
//  for(int i=0;i<left;i++){
//     a[i]=v[i];
//  }
//  for(int i=0;i<right;i++){
//     b[i]=v[left+i];
//  }
//     count+=mergeSort(a);
//     count+=mergeSort(b);
//     count+=inversion(a,b);
//     merge(a,b,v);
//     return count;
// }



// int main(){
//     int arr[]={5,1,3,0,4,2,6};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     vector<int> v(arr,arr+n);
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }    cout<<endl;
//     int inversionCount = mergeSort(v);
//         cout <<"Inversion Count: "<<inversionCount<<endl;

    
// }


// dont know true or not

// int main(){
//      int arr[]={5,1,3,0,4,2,6};
//     int n=sizeof(arr)/sizeof(arr[0]);  
//     int count=0;  
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++)
//         if(arr[i]>arr[j]) count++;
//     }
//     cout << "Inversion Count: " << count << endl;
// }