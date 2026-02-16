
#include <iostream>
#include <vector>
using namespace std;
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


// int main(){
//     int m;
//     cout<<"Enter number of rows for first matrix: ";
//     cin>>m;
//     int n;
//     cout<<"Enter number of columns for first matrix: ";
//     cin>>n;
//     int arr1[m][n];
//     cout<<"Enter elements in first 2D array: "<<endl;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr1[i][j];
//         }
//     }
//     int p;
//     cout<<"Enter number of rows for second matrix: ";
//     cin>>p;
//     int q;
//     cout<<"Enter number of columns for second matrix: ";
//     cin>>q;
//     if(n!=p){
//         cout<<"Matrix multiplication not possible"<<endl;
//         return 0;
//     }
//     int arr2[p][q];
//     cout<<"Enter elements in second 2D array: "<<endl;
//     for(int i=0;i<p;i++){
//         for(int j=0;j<q;j++){
//             cin>>arr2[i][j];
//         }
//     }
//     int result[m][q];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<q;j++){
//             result[i][j]=0;
//             for(int k=0;k<n;k++){
//                 result[i][j]+=arr1[i][k]*arr2[k][j];
//             }
//         }
//     }
//     cout<<"Resultant matrix after multiplication is: "<<endl;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<q;j++){
//             cout<<result[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// op:
// Enter number of rows for first matrix: 2
// Enter number of columns for first matrix: 3
// Enter elements in first 2D array: 
// 1 2 3 
// 4 5 6
// Enter number of rows for second matrix: 3
// Enter number of columns for second matrix: 4
// Enter elements in second 2D array: 
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// Resultant matrix after multiplication is: 
// 38 44 50 56
// 83 98 113 128


// Write the program to print the matrix in wave form
//Waveprint1
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
//     cout<<"Wave print of the matrix is: "<<endl;
//     for(int i=0;i<m;i++){
//         if(i%2==0){
//             for(int j=0;j<n;j++){
//                 cout<<arr[i][j]<<" ";
//             }
//         }
//         else{
//             for(int j=n-1;j>=0;j--){
//                 cout<<arr[i][j]<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }

// Enter number of rows: 3
// Enter number of columns: 3
// Enter elements in 2D array: 
// 1 2 3
// 4 5 6
// 7 8 9
// Wave print of the matrix is: 
// 1 2 3
// 6 5 4
// 7 8 9

// Waveprint2
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
//     cout<<"Wave print of the matrix is: "<<endl;
//     for(int i=m-1;i>=0;i--){
//         if(i%2==0){
//             for(int j=0;j<n;j++){
//                 cout<<arr[i][j]<<" ";
//             }
//         }
//         else{
//             for(int j=n-1;j>=0;j--){
//                 cout<<arr[i][j]<<" ";
//             }
//         }
//     }
// }


//Enter number of rows: 3
// Enter number of columns: 3
// Enter elements in 2D array: 
// 1 2 3
// 4 5 6 
// 7 8 9
// Wave print of the matrix is: 
// 7 8 9 6 5 4 1 2 3

// wave3
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
//     cout<<"Wave print of the matrix is: "<<endl;
//     for(int i=0;i<m;i++){
//         if(i%2==0){
//             for(int j=0;j<n;j++){
//                 cout<<arr[j][i]<<" ";
//             }
//         }
//         else{
//             for(int j=m-1;j>=0;j--){
//                 cout<<arr[j][i]<<" ";
//             }
//         }
 
//     }
// }
//1 4 7 8 5 2 3 6 9





// Write a prgrm to print matrix in spiral form
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
//     cout<<"Spiral print of the matrix is: "<<endl;
//     int minr=0;
//     int minc=0;
//     int maxr=m-1;
//     int maxc=n-1;
//     int total=m*n;
//     int count=0;
//     while(minr<=maxr && minc<=maxc){
//         //left wall
//         for(int j=minc;j<=maxc && count<total;j++){
//             cout<<arr[minr][j]<<" ";
//             count++;
//         }
//         minr++;
//         //bottom wall
//         for(int i=minr;i<=maxr && count<total;i++){
//             cout<<arr[i][maxc]<<" ";
//             count++;
//         }
//         maxc--;
//         //right wall
//         for(int j=maxc;j>=minc && count<total;j--){
//             cout<<arr[maxr][j]<<" ";
//             count++;
//         }
//         maxr--;
//         //top wall
//         for(int i=maxr;i>=minr && count<total;i--){
//             cout<<arr[i][minc]<<" ";
//             count++;
//         }
//         minc++;
//     }
// }

//op:Enter number of rows: 3
// Enter number of columns: 3
// Enter elements in 2D array: 
// 1 2 3
// 4 5 6 
// 7 8 9
// Spiral print of the matrix is: 
// 1 2 3 6 9 8 7 4 5


// Leetcode-54 Spiral Matrix
// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
//         int m=matrix.size(); //row
//         int n =matrix[0].size() ;//colums
//         int minr=0;
//         int maxr=m-1;
//         int minc=0;
//         int maxc=n-1;
//         int tnc=m*n;
//         int count=0;
//         vector<int> v;

//         while(minr<=maxr && minc<=maxc){
//             //right
//             for(int j=minc; j<=maxc && count<=tnc;j++){
//                 v.push_back(matrix[minr][j]);
//             }
//             minr++;
//             if(minr>maxr || minc>maxc) break;
//             //down
//              for(int i=minr; i<=maxr && count<=tnc;i++){
//                 v.push_back(matrix[i][maxc]);
//             }
//             maxc--;
//             if(minr>maxr || minc>maxc) break;
//             //left
//              for(int j=maxc; j>=minc && count<=tnc;j--){
//                 v.push_back(matrix[maxr][j]);
//             }
//             maxr--;
//             if(minr>maxr || minc>maxc) break;
//             //top
//              for(int i=maxr; i>=minr && count<=tnc;i--){
//                 v.push_back(matrix[i][minc]);
//             }
//             minc++;
//             if(minr>maxr || minc>maxc) break;
            
//         }
//          return v;
//         }
           

// };


// 2.class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
//         int m=matrix.size(); //row
//         int n =matrix[0].size() ;//colums
//         int minr=0;
//         int maxr=m-1;
//         int minc=0;
//         int maxc=n-1;
//         int tnc=m*n;
//         int count=0;
//         vector<int> v;

//         while(minr<=maxr && minc<=maxc){
//             //right
//             for(int j=minc; j<=maxc && count<=tnc;j++){
//                 v.push_back(matrix[minr][j]);
//             }
//             minr++;
//             if(minr>maxr || minc>maxc) break;
//             //down
//              for(int i=minr; i<=maxr && count<=tnc;i++){
//                 v.push_back(matrix[i][maxc]);
//             }
//             maxc--;
//             if(minr>maxr || minc>maxc) break;
//             //left
//              for(int j=maxc; j>=minc && count<=tnc;j--){
//                 v.push_back(matrix[maxr][j]);
//             }
//             maxr--;
//             if(minr>maxr || minc>maxc) break;
//             //top
//              for(int i=maxr; i>=minr && count<=tnc;i--){
//                 v.push_back(matrix[i][minc]);
//             }
//             minc++;
//             if(minr>maxr || minc>maxc) break;
            
//         }
//          return v;
//         }
           

// };



// que=>73. Set Matrix Zeroes
// Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

// You must do it in place.
// good method by taking extra space of O(1) by using the first row and first column to store the information about which row and column contains zero and then make those row and column zero

// class Solution {
//     public void setZeroes(int[][] arr) {
//         int m =arr.length;
//         int n = arr[0].length;
//         boolean zeroRow =false;
//         boolean zeroCol =false;
//         //check the zeroth row
//         for(int j=0;j<n;j++){
//             if(arr[0][j]==0){
//                 zeroRow=true;
//                 break;
//             }
//         }
//         //check the zeroth Col
//         for(int i=0;i<m;i++){
//             if(arr[i][0]==0){
//                 zeroCol=true;
//                 break;
//             }
//         }
//         //traversing from 1 to check 0 and fill it to respective 1 row or columns
//         for(int i=1;i<m;i++){
//             for(int j=1;j<n;j++){
//                 if(arr[i][j]==0){
//                     arr[i][0]=0;
//                     arr[0][j]=0;
//                 }
//             }
//         }
//         //making/setting whole row 0
//         for(int j=1;j<n;j++){
//             if(arr[0][j]==0){
//                 for(int i=0;i<m;i++){
//                     arr[i][j]=0;
//                 }
//             }
//         }
//         //making/setting whole col 0
//         for(int i=1;i<m;i++){
//             if(arr[i][0]==0){
//                 for(int j=0;j<n;j++){
//                     arr[i][j]=0;
//                 }
//             }
//         }
//         if(zeroRow==true){//checking is zero row also conatins zero
//             for(int j=0;j<n;j++){
//                 arr[0][j]=0;
//             }
//         }
//         if(zeroCol==true){
//             for(int i=0;i<m;i++){
//                 arr[i][0]=0;
//             }
//         }
//     }
// }


        // bad method
        // int m=arr.length;
        // int n = arr[0].length;
        // int [][] v=new int[m][n];
        // for(int i=0;i<m;i++){
        //     for(int j=0;j<n;j++){
        //         v[i][j]=arr[i][j];
        //     }
        // }
        // for(int i=0;i<m;i++){
        //     for(int j=0;j<n;j++){
        //         if(v[i][j]==0){
        //          for(int b=0;b<n;b++){
        //             arr[i][b]=0;
        //          }
        //           for(int a=0;a<m;a++){
        //                 arr[a][j]=0;
        //             }
        //         }
                   
        //     }
        // }


//  2.Method   by takig two extra array to store the row and column which contains zero and then make those row and column zero
//time complezity0(m+n) and space complexity is O(m+n)
// class Solution {
//     public void setZeroes(int[][] arr) {
//         int m =arr.length;
//         int n = arr[0].length;
//         boolean [] row = new boolean[m];
//         boolean [] col = new boolean[n];
//         //mark where it is zero first
//         for(int i =0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 if(arr[i][j]==0){
//                     row[i]=true;
//                     col[j]=true;
//                 }
//             }
//         }
//         //fill first ith row =0
//         for(int i =0;i<m;i++){
//             if(row[i]==true){
//                 for(int j=0;j<n;j++){
//                     arr[i][j]=0;
//                 }
//             }
//         }
//         //set the true row to be 0
//         for(int j =0;j<n;j++){
//             if(col[j]==true){
//                 for(int i=0;i<m;i++){
//                     arr[i][j]=0;
//                 }
//             }
//         }
//     }
// }

