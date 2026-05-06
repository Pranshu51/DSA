//Tower Of Hanoi
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

//s=source, d=destination, h=helper

// void hanoi(int n,char s, char h,char d){
//     if(n==0) return;
//     //move n-1 disks from source to helper so helper will be the destination for n-1 disks
//     hanoi(n-1,s,d,h);
//     //move the nth disk from source to destination
//     cout<<"Move disk "<<n<<" from "<<s<<" to "<<d<<endl;
//     //move n-1 disks from helper to destination so source will be the helper for n-1 disks
//     hanoi(n-1,h,s,d);
// }

// int main(){
//     int n;
//     cout<<"Enter the number of disks: ";
//     cin>>n;
//     //call the function
//     hanoi(n, 'A', 'B', 'C');
// }


// void printElementOfVector(vector<int> &v,int currentIndex){
//     if(currentIndex==v.size()) return;
//     cout<<v[currentIndex]<<" ";
//     printElementOfVector(v,currentIndex+1);
// }

// int main(){
//     int n;
//     cout<<"Enter the number of elements in the vector: ";
//     cin>>n;
//     vector<int> v(n);
//     cout<<"Enter the elements of the vector: ";
//     for(int i=0; i<n; i++){
//         cin>>v[i];
//     }
//     printElementOfVector(v,0);
// }



//Find the maximum element in an array using recursion.

// int maxElement(int arr[], int index, int n){
//     if(index==n) return INT_MIN; //return the minimum integer value when we have traversed the entire array
//     return max(arr[index], maxElement(arr, index+1, n)); //return the maximum of the current element and the maximum element in the rest of the array
// }


// int main(){
//     int arr[] = {5, 4,90, 3, 2, 1,10,78};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     cout <<maxElement(arr, 0,n);
// }



//NOT GOOOD APPROACH AS WE ARE RETURNING THE MAX ELEMENT AT EVERY STEP, INSTEAD OF RETURNING THE MAX ELEMENT AT THE END OF THE RECURSION
// int maxElement(int arr[], int index, int n, int max){
//     if(index==n) return max;
//     if(max<arr[index]) max = arr[index];
//     return maxElement(arr, index+1, n, max);
// }




// int main(){
//     int arr[] = {5, 4,90, 3, 2, 1,10,78};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     cout <<maxElement(arr, 0,n,INT_MIN);
// }

//Or only print the maximum element 


// void maxElement(int arr[], int index, int n, int max){
//     if(index==n) {
//         cout<<max;
//         return;
//     }
//     if(max<arr[index]) max = arr[index];
//      maxElement(arr, index+1, n, max);
// }




// int main(){
//     int arr[] = {5, 4,90, 3, 2, 1,10,78};
//     int n = sizeof(arr)/sizeof(arr[0]);
//    maxElement(arr, 0,n,INT_MIN);
// }



//Remove all the occurence of 'a' from a string using recursion.


//VERY BAD APPROACH SPACE CONSUMPTION IS VERY HIGH AS WE ARE creating a new string at every step of the recursion, instead of modifying the original string and passing it to the next step of the recursion
// void removeChar(string answer, string original){
//     if(original.size()==0){
//         cout<<answer;
//         return;
//     }
//     if(original[0]=='a') removeChar(answer, original.substr(1));
//     else removeChar(answer+original[0], original.substr(1));
// }

// int main(){
//     string str="banana";
//     removeChar("",str);
// }






//self approach

// void removeA(string s,int index,string ans){
//     if(index==s.size()) {
//         cout<<ans;
//         return;
//      }
//      if(s[index]!='a'){
//      removeA(s,index+1,ans+s[index]);

//      }
//      else removeA(s,index+1,ans);
// }

// int main(){
//     string s="banana";
//     string ans="";
//     removeA(s,0,ans);
// }





// Print Subset Of a String


//Good approach
// void printSubset(string s,int index,string ans){
//     if(index==s.size()) { //orif(index>=s.size())
//         cout<<ans<< " ";
//         return;
//      }
     
//      printSubset(s,index+1,ans+s[index]);
//      printSubset(s,index+1,ans);
// }

// int main(){
//     string s="abc";
//     string ans="";
//     printSubset(s,0,ans);
// }//abc ab ac a bc b c  


// //OR
// void printSubset(string original,string ans){
//     if(original=="") {
//         cout<<ans<< " ";
//         return;
//      }
//      char ch = original[0];
//      printSubset(original.substr(1),ans+ch);
//      printSubset(original.substr(1),ans);
// }

// int main(){
//     string original="abc";
//     string ans="";
//     printSubset(original,ans);
// }




//Store subset of a string in a vector

// void storeSubset(string s,int index,string ans,vector<string> &subsets){
//      if(index==s.size()) { //orif(index>=s.size())
//         subsets.push_back(ans);
//         return;
//      }
     
//      storeSubset(s,index+1,ans+s[index],subsets);
//      storeSubset(s,index+1,ans,subsets);
// }

// int main(){
//     string s="abc";
//    vector<string> subsets;
//     storeSubset(s,0,"",subsets);
//     for(string ele: subsets){
//         cout<<ele<<" ";
//     }
// }//abc ab ac a bc b c  


//Subset of array 
//PrintArray

// void printSubset(int arr[], int n, int idx, vector<int> ans) {
//     // Base Case: If we have reached the end of the array
//     if (idx == n) {
//         for (int i = 0; i < ans.size(); i++) {
//             cout << ans[i] << " ";
//         }
//         cout << endl;
//         return;
//     }

//     // Choice 1: Don't include the current element (Exclude)
//     printSubset(arr, n, idx + 1, ans);

//     // Choice 2: Include the current element (Include)
//     ans.push_back(arr[idx]);
//     printSubset(arr, n, idx + 1, ans);
// }

// int main() {
//     int arr[] = {1, 2, 3};
//     int n = sizeof(arr) / sizeof(arr[0]);
    
//     vector<int> v;
    
//     printSubset(arr, n, 0, v);

//     return 0;
// }





//Store in a vector


// void arraySubset(int arr[], int index, int n, vector<vector<int>> &subsets, vector<int> ans){
//      if(index==n) {
//         subsets.push_back(ans);
//         return;
//      }
//      int ele=arr[index];
//      arraySubset(arr,index+1,n,subsets,ans);
//      ans.push_back(ele);
//      arraySubset(arr,index+1,n,subsets,ans);
// }

// int main(){
//     int arr[]={1,2,3};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     vector<int> ans;
//     vector<vector<int>> subsets;
//     arraySubset(arr,0,n,subsets,ans);
//     for(vector<int> ele: subsets){
//         for(int e: ele){
//             cout<<e<<" ";
//         }
//         cout<<endl;
//     }
// }


//SUBSET-2 subset of dublicates

// void DuplicateSubset(string original,string ans,vector<string> &v,bool flag){
//     if(original=="") {
//         v.push_back(ans);
//         return;
//      }
//      char ch = original[0];
//      if(original.length()==1){
//        if(flag==true) DuplicateSubset(original.substr(1),ans+ch,v,true);
//      DuplicateSubset(original.substr(1),ans,v,true);
//      return;
//      }
//      char dh=original[1];
//      if(ch==dh){
//         if(flag==true) DuplicateSubset(original.substr(1),ans+ch,v,true);
//      DuplicateSubset(original.substr(1),ans,v,false);
//      }
//      else{
//         if(flag==true) DuplicateSubset(original.substr(1),ans+ch,v,true);
//      DuplicateSubset(original.substr(1),ans,v,true);
//      }
// }

// int main(){
//     string original="aab";
//     vector<string> v;
//     DuplicateSubset(original,"",v,true);
//     for(string ele: v){
//         cout<<ele<<" ";
//     }
// }



//INCREASING SUBSEQUENCES 



// void printSubset(int arr[], int n, int idx, vector<int> ans,int k) {
//     // Base Case: If we have reached the end of the array
//     if (idx == n) {
//        if(ans.size()==k){
//          for (int i = 0; i < ans.size(); i++) {
//             cout << ans[i] << " ";
//         }
//          cout << endl;
//        }
//         return;
//     }
//     if(ans.size() +(n-idx) < k) return; //if the size of the current subset + the number of remaining elements in the array is less than k, then we cannot form a subset of size k, so we return
//     // Choice 1: Don't include the current element (Exclude)
//     printSubset(arr, n, idx + 1, ans,k);

//     // Choice 2: Include the current element (Include)
//     ans.push_back(arr[idx]);
//     printSubset(arr, n, idx + 1, ans,k);
// }

// int main() {
//     int arr[] = {1, 2, 3,4,5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     vector<int> v;
//     printSubset(arr, n, 0, v,3);
//     return 0;
// }


//NEXT PERMUTATION


// void permutation(string ans,string original){
//     if(original==""){
//         cout<<ans<<" ";
//         return;
//     }
//     for(int i=0;i<original.length();i++){
//         char ch=original[i];
//         string left=original.substr(0,i);
//         string right=original.substr(i+1);
//         permutation(ans+ch,left+right);
//     }
// }

// int main(){
//     string str="abc";
//     permutation("",str);
// }