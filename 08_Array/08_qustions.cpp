#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


// Find the last occurance of the x in the array

// int main(){
//     vector<int> v;
//     v.push_back(5);
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(9);
//     v.push_back(1);
//     v.push_back(7);
//     int x =1;
//     int idx = -1;
//     // method 1
//     // for(int i=0;i<v.size();i++){
//     //     if(v[i]==1){
//     //         idx=i;
//     //     }
//     // }
//     for(int i=v.size();i>=0;i--){
//         if(v[i]==x){
//             idx=i;
//             break;
//         }
//     }
//     cout<<"Last occurance of "<<x<<" is at index: "<<idx<<endl;

  
// }


// Find the doublet in the array whose sum is equal to the given value x.
//leetcode-1 = two sum

// int main(){
//     vector<int> v;
//     int x;
//     cout<<"Enter the target element: ";
//     cin>>x;

//     int n;
//     cout<<"Enter the size of array: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int element;
//         cin>>element;
//         v.push_back(element);
//     }

//     for(int i=0;i<v.size()-2;i++){
//         for(int j=i+1;j<v.size()-1;j++){
//             if(v[i]+v[j]==x){
//                 cout<<"("<<i<<","<<j<<")"<<endl;
//             }
//         }
//     }
// }



// write a program to copy the contents of one array into another in the reverse order

// void display(vector<int> &a){
//     for(int i=0;i<a.size();i++){
//         cout<<a[i]<<" "; 
//     }
// }

// int main(){
//     vector<int> v;
//     v.push_back(5);
//     v.push_back(3);
//     v.push_back(8);
//     v.push_back(2);
//     v.push_back(1);
//     v.push_back(4);

//     display(v);
//     vector<int> v2(v.size());
//     for(int i=0;i<v.size();i++){
//         //i+j=v.size()-1
//         int j = v.size()-1 -i;
//         cout<<v[j]<<" ";
//     }
//     display(v2);
// }

// Write a program to reverse the array without using any extra array

void display(vector<int> &a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" "; 
    }
    cout<<endl;
}

// int main(){
//     vector<int> v;
//     v.push_back(5);
//     v.push_back(3);
//     v.push_back(8);
//     v.push_back(2);
//     v.push_back(1);
//     v.push_back(4);

//     display(v);

    // int i=0;
    // int j=v.size()-1;
    // while(i<=j){
    //    int temp =v[i];
    //    v[i]=v[j];
    //     v[j]=temp;
    //     i++;
    //     j--;
    // }

    //wiht for loop
    // for(int i=0,j=v.size()-1;i<j;i++,j--){
    //    int temp =v[i];
    //    v[i]=v[j];
    //     v[j]=temp;
    // }
    //  display(v);

    // using inbuilt function
//     reverse(v.begin(),v.end());
//     display(v);
// }

// void reversepart(int i,int j,vector<int> &v){
//     while(i<j){
//        int temp =v[i];
//        v[i]=v[j];
//         v[j]=temp;
//         i++;
//         j--;
//     }
//     // cout<<endl;
// }

// void reverse(vector<int> &v){
//     int i=0;
//     int j=v.size()-1;
//     while(i<j){
//        int temp =v[i];
//        v[i]=v[j];
//         v[j]=temp;
//         i++;
//         j--;
//     }
// }
// int main(){
//     vector<int> v;
//     v.push_back(5);
//     v.push_back(3);
//     v.push_back(8);
//     v.push_back(2);
//     v.push_back(1);
//     v.push_back(4);

//     display(v);

//     // reversepart(0, 2,v);
//     reverse(v);
//     display(v);
// }


// Rotate the given array 'a' by k steps,where k is non-negative
void reversepart(int i,int j,vector<int> &v){
    while(i<j){
       int temp =v[i];
       v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
    // cout<<endl;
}

int main(){
    int k =15;
    vector<int> v;
    v.push_back(5);
    v.push_back(3);
    v.push_back(8);
    v.push_back(2);
    v.push_back(1);
    v.push_back(4);
    int n=v.size();
     display(v);
     if(k>=n){
        k=k%n;
     }
    reversepart(0, n-k-1,v);
    reversepart(n-k, n-1,v);
    reversepart(0, n-1,v);
    display(v);
}
