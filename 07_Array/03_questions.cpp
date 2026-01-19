#include <iostream>
#include <vector>
using namespace std;


// Amazon question
// Print the unique element from the array where every element is present twice except one element

// int find(vector<int> arr){
//     int ans =0;
//     for(int i=0;i<arr.size();i++){
//         ans = ans ^ arr[i];
//     }
//     return ans;
// }


// int main(){
//     int n;
//     cout<<"Enter the size of array: ";
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0;i<arr.size();i++){
//         cin>>arr[i];
//     }

//     int uniqueElemnt =find(arr);
//     cout<<"Unique element is: "<<uniqueElemnt<<endl;

// }




// Union of two arrays
// variations:
// 1.array should be sorted 
// 2. if duplicate exists


// int main(){
//     int arra[]={1,2,3,4};
//     int sizea=4;
//     int arrb[]={5,6,7,8};
//     int sizeb=4;
//     vector<int> ans;
    
//     for(int i=0;i<sizea;i++){
//         ans.push_back(arra[i]);
//     }
//     for(int i=0;i<sizeb;i++){
//         ans.push_back(arrb[i]);
//     }
//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<" ";
//     }
// }

// case2:Duplicate exists ===>BRUTE FORCE APPROACH


// int main(){
//     int arra[]={1,2,3,4,4,5};
//     int sizea=6;
//     int arrb[]={5,6,7,8,8};
//     int sizeb=5;
//     vector<int> ans;
    
//     // Add elements from arra only if not already in ans
//     for(int i=0;i<sizea;i++){
//         bool found=false;
//         for(int k=0;k<ans.size();k++){
//             if(arra[i] == ans[k]){
//                 found=true;
//                 break;
//             }
//         }
//         if(!found){
//             ans.push_back(arra[i]);
//         }
//     }
    
//     // Add elements from arrb only if not already in ans
//     for(int i=0;i<sizeb;i++){
//         bool found=false;
//         for(int k=0;k<ans.size();k++){
//             if(arrb[i] == ans[k]){
//                 found=true;
//                 break;
//             }
//         }
//         if(!found){
//             ans.push_back(arrb[i]);
//         }
//     }

//     for(auto value:ans){
//         cout<<value<<" "; //o/p= 1 2 3 4 5 6 7 8 
//     }
// }





// Interssection of two arrays
// variations:
// 1.array should be sorted
// 2. if duplicate exists


// int main(){
//     vector<int> arr1={1,2,3,4,5};
//     vector<int> arr2={4,5,6,7,8};
//     vector<int> ans;

//     for(int i=0;i<arr1.size();i++){
//         int element=arr1[i];
//         for(int j=0;j<arr2.size();j++){
//             if(element == arr2[j]){
//                 ans.push_back(element);
//             }
//         }
//     }

//     for(auto value:ans){
//         cout<<value<<" "; //o/p= 4 5 
//     }
// }

// Case 2 duplicate exists

// int main(){
//     vector<int> arr1={1,2,3,3,4,5};
//     vector<int> arr2={4,5,6,7,8,3};
//     vector<int> ans;

//     for(int i=0;i<arr1.size();i++){
//         int element=arr1[i];
//         for(int j=0;j<arr2.size();j++){
//             if(element == arr2[j]){
//                 arr2[j]=-1; //to avoid counting duplicate
//                 ans.push_back(element);
//             }
//         }
//     }

//     for(auto value:ans){
//         cout<<value<<" "; //o/p= 3 4 5 
//     }
// }

// Dry run this code for better understanding
// a[]={1,2,3,3,4,5} if given that you can use any value either +ve or -ve so use INT_MIN instead of -1
// b[]={4,5,6,7,8,3}
//  -1
// a matches value with b when a get value of b as same b value becomes '-1' so when same value agan comes it wont match and removes the duplicate problem








// Pair sum


// you have input v like
//  =>a[]={1,2,3,4,5}
// => b[]={6,7,8,9,10}
//  sum=9
//  Q=>find a pair that upon addition gives value equal to sum

// for two arrays

// int main(){
// int sum=9;
//     int arr[]={1,2,3,4,5};
//     int sizea=5;
//     int brr[]={6,7,8,9,10};
//     int sizeb=5;
//     vector<int> ans;
//     for(int i=0;i<sizea;i++){
//         for(int j=0;j<sizeb;j++){
//             if(arr[i]+brr[j]==sum){
//                cout<<"("<<arr[i]<<","<<brr[j]<<") ";
              
//             }
//         }
//     }

// }

// inn single array


// int main(){
//     int arr[]={1,2,3,4,5,6,7,8,9};
    // int sum=9;
//     int sizea=9;
//     for(int i=0;i<sizea;i++){
//         for(int j=i+1;j<sizea;j++){
//             if(arr[i]+arr[j]==sum){
//                 cout<<"("<<arr[i]<<","<<arr[j]<<") ";
//             }
//         }
//     }
// }


// triplet sum

// int main(){
//     vector<int> arr={10,20,30,40,50,60,70,80,90};
//     int sum=80;
//     for(int i=0;i<arr.size();i++){
//         for(int j=i+1;j<arr.size();j++){
//             for(int k=j+1;k<arr.size();k++){
//                 if(arr[i]+arr[j]+arr[k]==sum){
//                     cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<") ";
//                 }
//             }
//         }
//     }
// }






// Sort 0's and 1's("Dutch National Flag Problem" or "Three-Way Partitioning")





// int main(){
//     vector<int> arr={0,1,1,0,1,0,0,1,0,1,0};
//     int start=0;
//     int end=arr.size()-1;
//     int i=0;
//     while(i<=end){ //when i!=end
//         if(arr[i]==0){
//             swap(arr[i],arr[start]);
//             start++;
//             i++;
//         }
//         else /*if(arr[i]==1)*/{
//             swap(arr[i],arr[end]);
//             end--;
//         }   
        
//     }
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<" "; //o/p= 0 0 0 0 0 0 1 1 1 1 1 
//     }
// }






// Problems to solve 
// 1. Left rotate an array by 1 element
// 2. Majority element in an array
// 3. Buy and sell stock => level 1



// 1. Left rotate an array by 1 element

// int main(){
//     vector<int> arr={1,2,3,4,5};
//     int i=0;
//     int j=i+1;
//     while(j<=arr.size()-1){
//         swap(arr[i],arr[j]);
//         i++;
//         j++;
//     }
//     for(auto val:arr){
//         cout<<val<<" ";
//     }
// }

// another method
int main(){
    vector<int> arr={1,2,3,4,5};
    int firstElement=arr[0];
    for(int i=1;i<arr.size();i++){
        arr[i-1]=arr[i];
    }
    arr[arr.size()-1]=firstElement;
    for(auto val:arr){
        cout<<val<<" ";
    }
}