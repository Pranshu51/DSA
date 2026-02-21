#include <iostream>
using namespace std;


// INSERTION SORT
//two parts are there one sorted another unsorted to hume jab tak swap karna h chote element ko uske sahi position pe nahi milta tab tak swap karte rahna hai
//SPACE COMPLEXITY => O(1) as we are not using any extra space
//TIME COMPLEXITY
//BEST CASE => O(n) when the array is already sorted as we have to compare each element with the previous element and if the current element is greater than or equal to the previous element then we can break the loop as the current element is already in its correct position
//WORST CASE => O(n^2) when the array is sorted in reverse order as we have to compare each element with the previous element and swap it with the previous element until we reach the first element of the array
//AVERAGE CASE => O(n^2) when the array is in random order as we have to compare each element with the previous element and swap it with the previous element until we reach the first element of the array
//STABLE SORT => it maintains the relative order of the equal elements in the sorted array as we are swapping the current element with the previous element until we reach the first element of the array
//IN PLACE SORT => it does not require any extra space for sorting as it sorts the array by swapping the elements in the original array itself  

int main(){
    int arr[6]={2,4,1,5,3,0};
    int n=6;
    for(int i=0;i<n;i++){
        cout<<arr[i] << " ";
    }
    //M-1
   for(int i=1;i<n;i++){//it can start with both 0 or 1 becauseo f second condition it becomes false
    int j=i;
    while(j>=1 && arr[j]<arr[j-1]){ //j>=1 because we have to compare the current element with the previous element and if j is 0 then there is no previous element to compare with
        swap(arr[j],arr[j-1]);
        j--;
    }
   }
//M-2
// for(int i=1;i<n;i++){
//     int j=i;
//     while(j>=1 ){ 
//         if(arr[j]>=arr[j-1]){ //if the current element is greater than or equal to the previous element then we can break the loop as the current element is already in its correct position
//             break;
//         }
//         swap(arr[j],arr[j-1]);
//         j--;
//     }
//    }
   cout<<endl;
    for(int i=0;i<n;i++){
          cout<<arr[i] << " ";
     }
}