
// Write a program to print the transpose of the matrix enetered by te user and store it in a new matrix
//Leetcode-867
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
//     int transpose[n][m];
//     // for(int i=0;i<m;i++){
//     //     for(int j=0;j<n;j++){
//     //         transpose[j][i]=arr[i][j];
//     //     }
//     // }
//      for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             transpose[i][j]=arr[j][i];
//         }
//     }
//     cout<<"Transpose of the matrix is: "<<endl;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<transpose[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }


//Que=> YOu are given a mtrix/2D array of size (n*n).
//change this matrix into its transpose

// int main(){
//     int m;
//     cout<<"Enter number of rows/Columns: ";
//     cin>>m;
//     int arr[m][m];
//     cout<<"Enter elements in 2D array: "<<endl;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<m;j++){
//             cin>>arr[i][j];
//         }
//     }
//     //transpose
//      for(int i=0;i<m;i++){
//         for(int j=i+1;j<m;j++){
//             int temp=arr[i][j];
//             arr[i][j]=arr[j][i];
//             arr[j][i]=temp;
//         }
//     }
//     cout<<"Transpose of the matrix is: "<<endl;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<m;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }



// 48. Rotate Image

// You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

// You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.


// class Solution {
// public:
//     void rotate(vector<vector<int>>& matrix) {
//         int n= matrix.size();
//         // transpose
//         for(int i =0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 int temp=matrix[i][j];
//                 matrix[i][j]=matrix[j][i];
//                 matrix[j][i]= temp;
//             }
//         }
//         // reverse
//         for(int k=0;k<n;k++){
//             int i=0;
//             int j=n-1;
//             while(i<j){
//                 int temp =matrix[k][i];
//                 matrix[k][i] =matrix[k][j];
//                 matrix[k][j] =temp;
//                 i++;
//                 j--;
//             }
//         }
//         return;
//     }
// };


// Que=> write a program to print the multiplication of two matrices given by the user.
