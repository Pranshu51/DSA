#include<iostream>
#include<vector>
using namespace std;
//T.C=WORST CASE=O(n^2)=in ascending or descending because in the worst case, when the pivot is consistently the smallest or largest element, the partitioning step will take O(n) time and the depth of the recursion will be n, leading to an overall time complexity of O(n^2).
//T.C=> AVG CASE =O(nlogn)=because we are dividing the array into two halves and sorting them recursively, which takes O(logn) time. The partitioning step takes O(n) time, so the overall time complexity is O(nlogn).
//S.C=> O(logn)=because the space used by the recursive calls is proportional to the depth of the recursion, which is log(n) in the average and best cases. In the worst case, when the pivot is consistently the smallest or largest element, the depth of the recursion can be n, leading to a space complexity of O(n). However, with good pivot selection strategies (like random pivot selection), we can achieve an average space complexity of O(logn).
//STABLE=> No, quicksort is not a stable sorting algorithm. This is because the relative order of equal elements is not guaranteed to be preserved during the partitioning step. When two elements are equal, they may be swapped in such a way that their original order is changed, making quicksort an unstable sorting algorithm.   
//APPLICATION=> 1. Internal sorting uses variation of quick sort
                // 2. Qucik select algorithm is based on quick sort
                // 3. Used in databases for sorting large datasets
                // 4.wjerever there is no need of stability.

                //MERGE SORT VS QUICK SORT
                //T.C SAME=> O(nlogn)
                //S.C MEGRE => O(n) QUICK => O(logn)-> APPROX IN PLACE SORTITNG NOT FULLLY IN PLACE YHA BSS RECURSION KE TIME PE NEW VARIABLE BANTE H
                //STABLITY=> MERGE => YES QUICK => NO
                //APPLICATION=>MERGE=>1.LINKED LIST 2. INVERSION COUNT  QUICK =>1.QUICK SELECT

// int partition(int arr[], int si,int ei){
//     int pivot= arr[si];
//     int count=0;
//     for(int i=si+1;i<=ei;i++){
//         if(arr[i]<=pivot) count++;
//     }
//     int pi=si+count;
//     swap(arr[si],arr[pi]);
//     int i=si;
//     int j=ei;
//     while(i<pi && j>pi){
//         if(arr[i]<=pivot) i++;
//         else if(arr[j]>pivot) j--;
//         else if(arr[i]>pivot && arr[j]<=pivot){
//             swap(arr[i],arr[j]);
//             i++;
//             j--;
//         }
//     }
//     return pi;
// }


// void quickSort(int arr[],int si,int ei){
//     if(si>=ei)  return;
//     int pi =partition(arr,si,ei);
//     quickSort(arr,si,pi-1);
//     quickSort(arr,pi+1,ei);
// }



// int main(){
//     int arr[]={5,4,3,2,1};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     quickSort(arr,0,n-1);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }



//make pivot element as randomize it should be (si+ei)/2


// int partition(int arr[], int si,int ei){
//     int pivot= arr[(si+ei)/2];
//     int count=0;
//     for(int i=si+1;i<=ei;i++){
//         if(i==(si+ei)/2) continue; //change kia h
//         if(arr[i]<=pivot) count++;
//     }
//     int pi=si+count;
//     swap(arr[(si+ei)/2],arr[pi]);
//     int i=si;
//     int j=ei;
//     while(i<pi && j>pi){
//         if(arr[i]<=pivot) i++;
//         else if(arr[j]>pivot) j--;
//         else if(arr[i]>pivot && arr[j]<=pivot){
//             swap(arr[i],arr[j]);
//             i++;
//             j--;
//         }
//     }
//     return pi;
// }


// void quickSort(int arr[],int si,int ei){
//     if(si>=ei)  return;
//     int pi =partition(arr,si,ei);
//     quickSort(arr,si,pi-1);
//     quickSort(arr,pi+1,ei);
// }



// int main(){
//     int arr[]={5,4,3,2,1};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     quickSort(arr,0,n-1);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

//write a program to find the kth smallest element in an array using quick sort
// selection ,bubble and insertion sort=> O(n*k) because in the worst case, when k is close to n, the algorithm will need to perform k iterations of the outer loop, and each iteration will require O(n) time to find the minimum element and swap it with the first unsorted element. Therefore, the overall time complexity is O(n*k).
// merge sort => O(nlogn) because merge sort has a time complexity of O(nlogn) in all cases (best, average, and worst). This is because merge sort divides the array into two halves recursively until it reaches individual elements, and then merges them back together in sorted order. The division step takes O(logn) time, and the merging step takes O(n) time, resulting in an overall time complexity of O(nlogn).
//quick sort => worst case=>O(n^2) , avg case=> O(n)
// O(n) because quick select algorithm, which is based on quick sort, has an average time complexity of O(n) for finding the kth smallest element. This is because it uses a partitioning approach similar to quick sort, but instead of sorting the entire array, it only focuses on the partition that contains the kth smallest element. In the average case, this leads to a linear time complexity of O(n). However, in the worst case, when the pivot selection consistently results in unbalanced partitions, the time complexity can degrade to O(n^2). To mitigate this, random pivot selection can be used to achieve an average time complexity of O(n).



int partition(int arr[], int si,int ei){
    int pivot= arr[(si+ei)/2];
    int count=0;
    for(int i=si+1;i<=ei;i++){
        if(i==(si+ei)/2) continue; //change kia h
        if(arr[i]<=pivot) count++;
    }
    int pi=si+count;
    swap(arr[(si+ei)/2],arr[pi]);
    int i=si;
    int j=ei;
    while(i<pi && j>pi){
        if(arr[i]<=pivot) i++;
        else if(arr[j]>pivot) j--;
        else if(arr[i]>pivot && arr[j]<=pivot){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pi;
}


int kthSmallest(int arr[],int si,int ei,int k){
    int pi =partition(arr,si,ei);
    if(pi+1==k) return arr[pi];
    else if(pi+1<k) return kthSmallest(arr,pi+1,ei,k);
    else return kthSmallest(arr,si,pi-1,k);
}



int main(){
    int arr[]={5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k=3;
    cout<<"The kth smalles element is: "<<kthSmallest(arr,0,n-1,k);
    
}