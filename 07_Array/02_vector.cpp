#include <iostream>
#include <vector>
using namespace std;

// int main(){
//     vector<int> arr;

    // int ans = (sizeof(arr))/sizeof(int);
    // cout<<ans<<endl; //3=> this is compiler dependent


    // cout<<arr.size()<<endl; //0  =>kitne element pade h
   
    // cout<<arr.capacity()<<endl; //0 =>kitne element store kar skta hu 

    // insertion
//     arr.push_back(2);
//     arr.push_back(4);

// for(int i=0;i<arr.size();i++){
//     cout<<arr[i]<<" "; //2 4
// }
//    cout<<endl;


// //    Remove
// arr.pop_back();
// for(int i=0;i<arr.size();i++){
//     cout<<arr[i]<<" "; //2
// }

//  vector<int> brr(10);
//  cout<<"Size of b:" <<brr.size() <<endl; //Size of b:10
//  cout<<"Capacity of b:" <<brr.capacity() <<endl; //Capacity of b:10
// //  when you explicitely define that 10 elemnts will be there so its capacity and size both become 10
// for(int i=0;i<brr.size();i++){
//     cout<<brr[i]<<" "; //0 0 0 0 0 0 0 0 0 0
// }


// all the elements initialized with 0
//  vector<int> crr(10,-1);
// for(int i=0;i<crr.size();i++){
//     cout<<crr[i]<<" "; //-1 -1 -1 -1 -1 -1 -1 -1 -1 -1
// }
// if you want some specific no. to be intitialized you have to mention it


// dynamic allocation of vector


// int n; 
// cout<<"Enter the size of array: ";
// cin>>n;
// vector<int> drr(n,101);

// for(int i=0;i<drr.size();i++){
//     cout<<drr[i]<<" "; //Enter the size of array: 5
//                        //101 101 101 101 101
// }

// another way to intialize
// vector<int> err{10,20,30,40};

// for(int i=0;i<err.size();i++){
//     cout<<err[i]<<" "; //10 20 30 40 
                       
// }

// vector<int> frr;

// cout<<"is array err empty or not "<<err.empty()<<endl; //is array err empty or not 0
// cout<<"is array frr empty or not "<<frr.empty()<<endl; //is array frr empty or not 1
// }



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

























