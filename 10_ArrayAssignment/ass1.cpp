//1. Calculate the product of all the elements in the given array.
#include <iostream>
#include <climits>
using namespace std;

// int main(){
//     int arr[]={1,2,3,4,5};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     int product=1;
//     int i=0;
//     while(i<size){
//         product*=arr[i];
//         i++;
//     }
//     cout<<"Product of all elements in the array is: "<<product<<endl;
// }

//2Find the second largest element in the given Array .

// int main(){
//     int arr[]={10,20,30,40,50};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     cout<<"Elements of the array are: "<<endl;
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     int max=INT_MIN;
//     int secondmax=INT_MIN;
//     for(int i=0;i<size;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }
//     for(int i=0;i<size;i++){
//         if(arr[i]>secondmax && arr[i]<max){
//             secondmax=arr[i];
//         }
//     }
//     cout<<"Second largest element in the array is: "<<secondmax<<endl;
    
// }


// //Find the second largest element in the given Array in one pass.
// int main(){
//     int arr[]={10,20,30,40,50};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     cout<<size<<endl;
//     cout<<"Elements of the array are: "<<endl;
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     int max=arr[0];
//     int secondmax=INT_MIN;
//     for(int i=1;i<size;i++){
//         if(arr[i]>max){
//             secondmax= max;
//             max=arr[i];
           
//         }
//         else if(arr[i]>secondmax && arr[i]<max){
//             secondmax=arr[i];
//         }
//     }
//     if(secondmax==INT_MIN){
//         cout<<"No second largest element found"<<endl;
//     }
//     else{
//         cout<<"Second largest element in the array is: "<<secondmax<<endl;
//     }
// }    


//  int main(){
//     int arr[]={10,20,30,40,50};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     cout<<size<<endl;
//     cout<<"Elements of the array are: "<<endl;
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     int min=arr[0];
//     for(int i=1;i<size;i++){
//         if(arr[i]<min){
//             min=arr[i];
//         }
//     }
//     cout<<"Minimum element in the array is: "<<min<<endl;

// }



//4.Given an array, predict if the array contains duplicates or not.

//  int main(){
//     int arr[]={10,20,30,40,50,};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     cout<<size<<endl;
//     cout<<"Elements of the array are: "<<endl;
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     bool duplicate=false;
//     for(int i=0;i<size;i++){
//         for(int j=i+1;j<size;j++){
//             if(arr[i]==arr[j]){
//                 duplicate=true;
//                 break;
//             }
//         }
//         if(duplicate){
//             break;
//         }
//     }
//     if(!duplicate){
//         cout<<"No duplicate element found"<<endl;
//     }
//     else{
//     cout<<"we found the duplicate element"<<endl;  
//     }
// }






 int main(){
    int arr[]={0,1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;
    cout<<"Elements of the array are: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int x=0;
    bool flag=false;
    for(int i=0;i<size;i++){
        if(arr[i]!=x){
            cout<<"Duplicate element found"<< x <<endl;
            flag=true;
            break;
        }else{
            x++;
        }
    }
    if(!flag){
        cout<<"No duplicate element found"<<endl;
        return 0;
    }
}



// Assignmment 2
//Count the number of elements strictly greater than x.
