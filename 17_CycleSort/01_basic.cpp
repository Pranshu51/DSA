#include<iostream>
#include<vector>
using namespace std;
//CYCLIC SORT => T.C => O(n) Only for some selective problems

//WHERE TO USE => When we have to sort the elements in the range of 1 to n
          //2.[1,n] => 1 to n find numbers in an array of size n
          //3.[0,n]
          //4.1 to n pe kuch kaam karna ho
          //5.  t.c O(n)  & s.c =O(1) chahiye to cyclic sort use karna chahiye


int main(){
    int arr[]={3,5,2,1,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int i=0;
    while(i<n){
        int correctIdx=arr[i]-1;
        if(i==correctIdx) i++;
        else swap(arr[i],arr[correctIdx]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
     cout<<endl;
     return 0;
}


//what is the worst number of swaps in cyclic sort for a length n?
//n-1 swaps are needed in the worst case when the array is in reverse order. In this case, each element will need to be swapped to its correct position, resulting in n-1 swaps.
//every element will be swapped once because it reaches to its original position in one swap only. so if we have 50 element s and 49 are swapped then the last one will be in its correct postion itself.
