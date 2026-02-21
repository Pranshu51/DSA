#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

// SELECTION SORT
//SPACE COMPLEXITY => O(1) as we are not using any extra space
//TIME COMPLEXITY
//BEST CASE => O(n^2) when the array is already sorted as we have to compare all the elements to find the minimum element in each pass
//WORST CASE => O(n^2) when the array is sorted in reverse order as we have to compare all the elements to find the minimum element in each pass
//AVERAGE CASE => O(n^2) when the array is in random order as we have to compare all the elements to find the minimum element in each pass
//STABLE SORT => it does not maintain the relative order of the equal elements in the sorted array as we are swapping the minimum element with the first element of the unsorted array in each pass
//IN PLACE SORT => it does not require any extra space for sorting as it sorts the array by swapping the elements in the original array itself
// usecases:  1.where cost is swapping is there as here swapping is very less
            //2.jab starting se k minimum elemetn ko find karna ho
            //3. If size of array is small

int main(){
    int arr[6]={2,4,1,5,3,0};
    int n=6;
    for(int i=0;i<n;i++){
        cout<<arr[i] << " ";
    }
    //m-1
    // for(int i=0;i<n-1;i++){//n-1 because last iteration se pehle hi sort ho jaega
    //     int min =INT_MAX;
    //     int minIndex=i;
    //     for(int j=i;j<n;j++){
    //         if(arr[j]<min){
    //             min=arr[j];
    //             minIndex=j;
    //         }
    //     }
    //     swap(arr[i],arr[minIndex]);
    // }
    //m-2
    // for(int i=0;i<n;i++){
    //     int minIndex=i;
    //     for(int j=i+1;j<n;j++){
    //         if(arr[j]<arr[minIndex]){
    //             minIndex=j;
    //         }
            
    //     }
    //     swap(arr[i],arr[minIndex]);
        
    // }
        cout<<endl;
        for(int i=0;i<n;i++){
                cout<<arr[i] << " ";
            }
}