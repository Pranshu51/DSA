#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

// Subarrays =>continuous part of array

//BruteForce => O(n^3) => 3 loops


// int main(){
//     int arr[]={1,2,3};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for(int i=0; i<n; i++){
//         for(int j=i; j<n; j++){
//             for(int k=i; k<=j; k++){
//                 cout<<arr[k]<<" ";
//             }
//             cout<<endl;
//         }
//     }
// }




//Recursive approach

// void subArray(int arr[], int idx, int n, vector<int> ans){
//     if(idx==n){
//         for(int ele: ans){
//             cout<<ele<<" ";
//         }
//         cout<<endl;
//         return;
//     }
//     subArray(arr,idx+1,n,ans);
//     if(ans.size()==0 || arr[idx-1]==ans[ans.size()-1]){ //if the current subset is empty or the last element of the current subset is less than or equal to the current element, then we can include the current element in the current subset
//         ans.push_back(arr[idx]);
//         subArray(arr,idx+1,n,ans);
//     }
// }


// int main(){
//     int arr[]={1,2,3};
//     int n = sizeof(arr)/sizeof(arr[0]);
//    vector<int> ans;
//    subArray(arr,0,n,ans);
// }






// PALLINDROME


// bool isPalindrome(string str, int start, int end){
//     if(start>=end){
//         return true;
//     }
//     if(str[start]!=str[end]){
//         return false;
//     }
//     return isPalindrome(str,start+1,end-1);
// }

// int main(){
//     string str="rcar";
//     cout<< isPalindrome(str,0,str.size()-1);
// }



// GREATEST COMMOM DIVISOR =>T.C=>O(min(a,b)) 

//hcf(a,b) <=min(a,b)
//lcm(a,b) >=max(a,b)

// int main(){
//     int a=24;
//     int b=60;
//     for(int i=min(a,b);i>=2;i--){
//         if(a%i==0 && b%i==0){
//             cout<<i;
//             return i;
//         }
//     }
//     return 1;
// }




//Recursive approach =>T.C=>O(log(a+b)=> Euclidean algorithm

// int gcd(int a ,int b){
//     if(a==0) return b;
//     else return gcd(b%a,a);
// }


// int main(){
//     int a=27;
//     int b=45;
//    cout<< gcd(a,b);
// }


//Generate all the binary strings of length n without consecutive  1's


// void generateBinaryStrings(string str,int n){
//     if(n==0){
//         cout<<str<<" ";
//         return;
//     }
//     generateBinaryStrings(str+"0",n-1);
//     if(str.size()==0 || str[str.size()-1]=='0') generateBinaryStrings(str+"1",n-1);
// }

// int main(){
//     int n=4;
//     generateBinaryStrings("",n);
// }