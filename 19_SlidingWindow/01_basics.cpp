#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

// Maximum sum of subarray of size k

// int main(){
//     int arr[] = {1, 8, 30, -5, 20, 7};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int k = 3;
//     int maxSum = INT_MIN;
//     int idx=-1;
//     for(int i=0;i<=n-k;i++){// total no. of operations = n-k+1
//         int sum=0;
//         for(int j=i;j<i+k;j++){// total no. of operations = k   
//             sum+=arr[j];
//         }
//         if(maxSum<sum){
//             maxSum=sum;
//             idx=i;
//         }
//     }
//     cout<<"Max sum is "<<maxSum<<" and the subarray is [";
//     for(int i=idx;i<idx+k;i++){
//         cout<<arr[i]<<",";
//     }
//     cout<<"]";
//     //t.c=>O((n-k+1)*k) ~= O(n*k)
//     //s.c=>O(1)
// }



//USING SLIDING WINDOW TECHNIQUE


// int main(){
//     int arr[] = {1, 8, 30, 5, 20, 7};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int k = 4;
//     int maxSum = INT_MIN;
//     int idx=0;
//     int prevSum=0;
//    for(int i=0;i<k;i++){//t.n.operations = k
//         prevSum+=arr[i];
//    }
//     maxSum=prevSum;
    //Sliding Window
//     int i=1;
//     int j=k;
//     while(j<n){//t.n.operations = n-k
//         prevSum=prevSum+arr[j] - arr[i-1];
//         if(maxSum<prevSum){
//             maxSum=prevSum;
//             idx=i;
//         }
//         i++;
//         j++;
//     }
//     cout<<"Max sum is "<<maxSum<<" and the subarray is [";
//     for(int i=idx;i<idx+k;i++){
//         cout<<arr[i]<<",";
//     }
//     cout<<"]";//t.c=>O(n) ,s.c=>O(1)
// }





//First negative number in every window of size k




int main(){
    int arr[] = {2,-3,4,4,-7,-1,4,-2,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k = 4;
     int ans[n-k+1];
    int prevIdx =-1;
   for(int i=0;i<k;i++){//t.n.operations = k
       if(arr[i]<0) {
        prevIdx=i;
       }
   }
   if(prevIdx==-1) ans[0]=1;
    else ans[0]=arr[prevIdx];
    // Sliding Window
    int i=1;
    int j=k;
    while(j<n){//t.n.operations = n-k
        if(prevIdx>=i) ans[i]=arr[prevIdx];
        else {
            prevIdx=-1;
            for(int x=i;x<j;x++){
                if(arr[x]<0){
                    prevIdx=x;
                    break;
                }
            }
            if(prevIdx==-1) ans[i]=1;
            else ans[i]=arr[prevIdx];
        }
        i++;
        j++;
    }
    for(int i=0;i<n-k+1;i++){
        cout<<ans[i]<<" ";
    }
    
}


