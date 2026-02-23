#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//BUBBLE SORT
//TIME COMLEXITY=> BEST CASE(OPTIMIZED) => O(n) when the array is already sorted  only upeer loop will to run to check whether swapping happens or not and
// WORST CASE => O(n^2) when the array is sorted in reverse order and 
//AVERAGE CASE => O(n^2) when the array is in random order
//SPACE COMPLEXITY => O(1) as we are not using any extra space
//STABLE SORT => it maintains the relative order of the equal elements in the sorted array
//IN PLACE SORT => it does not require any extra space for sorting as it sorts the array by swapping the elements in the original array itself

// int main(){
//     vector<int> v(5);
//     for(int i=0;i<5;i++){
//         cin>>v[i];
//     }
//     sort(v.begin(),v.end()); //O(nlogn)
//     for(int i=0;i<5;i++){
//         cout<< v[i] << " ";
//     }
// }

// BUBBLE SORT
//SPACE COMPLEXITY => O(1) as we are not using any extra space
//TIME COMPLEXITY => O(n^2) as we are using two nested loops
// int main(){
//     int arr[6]={5,4,3,2,1,0};
//     int n=6;
//     for(int i=0;i<n;i++){
//         cout<<arr[i] << " ";
//     }
// //m-1=> total no. of operations =(n-1)*(n-1) => O(n^2) time complexity
//     // for(int i=0;i<n-1;i++){//n-1 passes always as if 5 elements are there then 4 pasees are required to sort the array
//     //     //traverse the unsorted array and compare the adjacent elements and swap if they are in wrong order
//     //     for(int j=0;j<n-1;j++){//j is n-1 because there will be no element after n-1 which is second last element to compare with  
//     //         if(arr[j]>arr[j+1]){//swap if the current element is greater than the next element
//     //             swap(arr[j],arr[j+1]);
//     //         }
//     //     } 
//     // }
//   //  m-2 => her no. of operaitons are =n(n-1)/2 => O(n^2) time complexity but in best case when the array is already sorted then no. of operations are n-1 => O(n) time complexity
//   // time comlexity is same but code becomes more efficient as we are not comparing the already sorted elements in the last i passes
//     // for(int i=0;i<n-1;i++){//n-1 passes always as if 5 elements are there then 4 pasees are required to sort the array
//     //     //traverse the unsorted array and compare the adjacent elements and swap if they are in wrong order
//     //     for(int j=0;j<n-1-i;j++){//j is n-1 because there will be no element after n-1 which is second last element to compare with and -i because after each pass the last i elements will be sorted and we don't need to compare them
//     //         if(arr[j]>arr[j+1]){//swap if the current element is greater than the next element
//     //             swap(arr[j],arr[j+1]);
//     //         }
//     //     } 
//     // }
//     //m-3 Optimizes bubble sort by adding a flag to check if any swapping is done in the current pass. If no swapping is done, then the array is already sorted and we can break the loop. This will reduce the time complexity to O(n) in the best case when the array is already sorted.
//     for(int i=0;i<n-1;i++){
//         bool swapped = true; //flag to check if any swapping is done in the current pass
//         for(int j=0;j<n-1-i;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//                 swapped = false; //if swapping is done then set the flag to false
//             }
//         }
//         if(swapped){ //if no swapping is done then the array is already sorted
//             break;
//         }
//     }

//      cout<<endl;
//      for(int i=0;i<n;i++){
//             cout<<arr[i] << " ";
//         }
// }

// que-> how much maximum no of swaps are needed to sort array of length 6?
//total no. operations are n(n-1)/2 => 6*5/2 => 15 swaps are needed to sort the array of length 6 in worst case when the array is sorted in reverse order.


// Que-> Sort a string in decreasing order of values associated after removal of value smaller than x


// int main(){
// string s="AZYZXBDJKX";
// string str;

// for(int i=0;i<s.length();i++){
//   if(s[i]>='X'){
//     str.push_back(s[i]);
//   }
// }
// // sort(str.begin(),str.end());
// for(int i=0;i<str.length();i++){
//     for(int j=0;j<str.length()-1-i;j++){
//         if(str[j]<str[j+1]){
//             swap(str[j],str[j+1]);
//         }
//     }
// }
// // reverse(str.begin(),str.end());
// cout<<str << endl;//ZZYXX
// }


// QUE=>Push zeros to the end while maintaining the realtive order of other elements

// int main(){
//     vector<int> v={0,1,0,3,12,2,0,4};
//     int n=v.size();
//     for(int i=0;i<n;i++){
//         cout<<v[i] << " ";
//     }
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-1-i;j++){
//             if(v[j]==0){
//                 swap(v[j],v[j+1]);
//             }
//         }
//     }
//     cout<<endl;
//     for(int i=0;i<n;i++){
//         cout<<v[i] << " ";
//     }
// }//0 1 0 3 12 2 0 4 
// //1 3 12 2 4 0 0 0 