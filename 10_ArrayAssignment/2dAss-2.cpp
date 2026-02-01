//1.Write a program to print the elements of both the diagonals in a square matrix.
#include <iostream>
#include <algorithm>
using namespace std;


// int main(){
//     int n;
//     cout<<"Enter number of rows/columns: ";
//     cin>>n;
//     int arr[n][n];
//     cout<<"Enter elements of the array: "<<endl;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     cout<<"Elements of the array are: "<<endl;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<"Diagonal elements are: "<<endl;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i+j==n-1 || i==j){
//                 cout<<arr[i][j]<<" ";
//             }
//             else{
//                 cout<<"  ";
//             }
           
//         }
//          cout<<endl;
//     }
    
// }

//op:Enter number of rows/columns: 3
// Enter elements of the array: 
// 1 2 3 4 5 6 7 8 9
// Elements of the array are: 
// 1 2 3
// 4 5 6
// 7 8 9
// Diagonal elements are:
// 1   3
//   5
// 7   9



//2.Write a program to rotate the matrix by 90 degrees anti-clockwise.



// int main(){
//     int m;
//     cout<<"Enter number of rows: ";
//     cin>>m;
//     int n;
//     cout<<"Enter number of columns: ";
//     cin>>n;
//     int arr[m][n];
//     cout<<"Enter elements of the array: "<<endl;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     cout<<"Elements of the array are: "<<endl;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     // Compute transpose into a separate matrix to avoid overwriting
//     int trans[n][m];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             trans[j][i] = arr[i][j];
//         }
//     }
// reverse each column of the transposed matrix
//     for(int k=0;k<m;k++){
//          int i=0;
//          int j=n-1;
//         while(i<=j){
   
//     swap(trans[i][k],trans[j][k]);
//     i++;
//     j--;

//         }
// }
// cout<<"Rotated matrix is: "<<endl;
// for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<trans[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// op:Enter number of rows: 3 
// Enter number of columns: 3
// Enter elements of the array: 
// 1 2 3 4 5 6 7 8 9
// Elements of the array are: 
// 1 2 3
// 4 5 6
// 7 8 9
// Rotated matrix is:
// 3 6 9
// 2 5 8
// 1 4 7

//3.Write a program to print the matrix in wave form.


// int main(){
//     int m;
//     cout<<"Enter number of rows: ";
//     cin>>m;
//     int n;
//     cout<<"Enter number of columns: ";  
//     cin>>n;
//     int arr[m][n];
//     cout<<"Enter elements in 2D array: "<<endl;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout<<arr[i][j]<<" ";
//     }

//     cout<<endl;
//     }
//     cout<<"Printing Wave form of the matrix: "<<endl;
//     for(int j=0;j<n;j++){
//         if(j%2==0){
//             for(int i=m-1;i>=0;i--){
//                 cout<<arr[i][j]<<" ";
//             }
//         }
//         else{
//             for(int i=0;i<m;i++){
//                 cout<<arr[i][j]<<" ";
//             }
//         }
//     }
  
// }

// op:Enter number of rows: 3
// Enter number of columns: 3
// Enter elements in 2D array: 
// 1 2 3 4 5 6 7 8 9
// 1 2 3 
// 4 5 6
// 7 8 9
// Printing Wave form of the matrix:
// 7 4 1 2 5 8 9 6 3

