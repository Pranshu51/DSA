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
int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n = 3; // number of rows
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl; // new line after each row
    }

    // column-wise
    cout<<"Coulum-wise printing"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl; // new line after each column
    }
}