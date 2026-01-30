#include <iostream>
using namespace std;

// int main(){
//     // decalre 2D array
//     int arr[3][3]; 
//     // intitalization
//     int brr[3][3]= {{1,2,3}, {4,5,6}, {7,8,9}};

//     cout<<brr[2][2]; //o/p: 9
// }
// 2D Array
// If n rows=> 0-(n-1)
// If m columns=> 0-(m-1)

// Printing row-wise
// int main()
// {
//     int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     int brr[3][3]={1,2,3,4,5,6,7,8,9};
//     int n = 3; // number of rows
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl; // new line after each row
//     }

//     // column-wise
//     cout<<"Coulum-wise printing"<<endl;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<arr[j][i]<<" ";
//         }
//         cout<<endl; // new line after each column
//     }
// }

// INput in 2D array from user

// int main(){
//     int m;
//     cout<<"Enter number of rows: ";
//     cin>>m;
//     int n;
//     cout<<"Enter number of columns: ";
//     cin>>n;
//     int arr[m][n];
//     // Input
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     // Output
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl; // new line after each row
//     }
// }

// op:
//Enter number of rows: 4
// Enter number of columns: 4
// 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6
// 1 2 3 4 
// 5 6 7 8 
// 9 0 1 2
// 3 4 5 6

// our array is array of arrays
//int arr[2][3]={1,2,3,4,5,6}; // 2 arrays s 3 size each

// Write a program to find the largest elemnt of a given 2D array of integers.

// int main(){
//     int arr[3][3];
//     cout<<"Enter elements in 2D array: "<<endl;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cin>>arr[i][j];
//         }
//     }
//     int largest=arr[0][0];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             if(arr[i][j]>largest){
//                 largest=arr[i][j];
//             }
//         }
//     }
//     cout<<"Largest element in the 2D array is: "<<largest<<endl;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// write a program to print sum of all the array
// int main(){
//     int arr[3][3];
//     cout<<"Enter elements in 2D array: "<<endl;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cin>>arr[i][j];
//         }
//     }
//     int sum=0;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             sum+=arr[i][j];
//         }
//     }
//     cout<<"Sum of all elements in the 2D array is: "<<sum<<endl;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// write a program to add two matrices
// int main(){
//     int a[2][3]={{1,2,3},{4,5,6}};
//     int b[2][3]={{7,8,9},{10,11,12}};
//     // int sum[2][3];
//     // for(int i=0;i<2;i++){
//     //     for(int j=0;j<3;j++){
//     //         sum[i][j]=a[i][j]+b[i][j];
//     //     }
//     // }
//     //without using third matrix
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             cout<<a[i][j]+b[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//  printing the sum in b array
//     // for(int i=0;i<2;i++){
//     //     for(int j=0;j<3;j++){
//     //         b[i][j]=a[i][j]+b[i][j];
//     //     }
//     // }
// }

// Write a program to print the transpose of the matrix enetered by te user and store it in a new matrix
int main(){
    int m;
    cout<<"Enter number of rows: ";
    cin>>m;
    int n;
    cout<<"Enter number of columns: ";
    cin>>n;
    int arr[m][n];
    cout<<"Enter elements in 2D array: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int transpose[n][m];
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         transpose[j][i]=arr[i][j];
    //     }
    // }
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            transpose[i][j]=arr[j][i];
        }
    }
    cout<<"Transpose of the matrix is: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
}