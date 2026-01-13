

#include <iostream>
using namespace std;

// giving exception 

// int main(){
//   int n;
//   if(cout<<n){
//     cout<<"You entered";
//   }
// }

// solid rectangle
// Outer loop => Rows
// Inner loop => Columns

// int main(){
//   int n;
//  cout << "enter n:";
//  cin >> n;
//   for(int i=0; i<n; i+=1){
//     for(int j=0; j<n; j+=1){
//       cout<<"* ";
//     }
//   cout<<endl;
//  }
// }


// half pyramid

// int main(){
//   int n;
//   cout << "enter n:";
//   cin >> n;
//   for(int row=0; row<n; row+=1){
//     for(int col=0; col<row+1; col+=1){
//       cout<<"* ";
//     }
//   cout<<endl;
//  }
// }

// output:
// enter n:5
// *
// * *
// * * *
// * * * *
// * * * * *





// inverted half pyramid

// int main(){
//   int n;
//   cout << "enter n:";
//   cin >> n;
//   for(int row=0; row<n; row+=1){
//     for(int col=0; col<n-row; col+=1){
//       cout<<"* ";
//     }
//   cout<<endl;
//  }
// }


// output:
// enter n:5
// * * * * *
// * * * *
// * * *
// * *
// *




// hollow rectangle

// int main(){
//   int rowCount, colCount;
//   cout << "Enter number of rows:" ;
//   cin >> rowCount;
  
//   cout << "Enter number of columns:" ;
//   cin >> colCount;
  
//   for(int row=0; row<rowCount; row+=1){
//     if(row == 0 || row == rowCount-1){
//       for( int col = 0; col < colCount; col+=1){
//         cout<<"* ";
//       }
//     }
//     else{
//       cout<<"* ";
//       for(int k = 0; k<colCount-2; k+=1){
//         cout<<"  ";
//       }
//       cout<<"* ";
  
//   }
//   cout<<endl;
//  }
// }


// output:
// Enter number of rows:4
// Enter number of columns:5    
// * * * * *
// *       *
// *       *
// * * * * *


// inverted numeric pyramid

// int main(){
//   int n;
//   cout << "enter n:";
//   cin >> n;
//   for(int row=0; row<n; row+=1){
//     for(int col=0; col<n-row; col+=1){
//       cout<< col+1;
//     }
//   cout<<endl;
//  }
// }


// output:
// enter n:5
// 12345
// 1234
// 123
// 12
// 1






// numeric pyramid

// int main(){
//   int n;
//   cout << "enter n:";
//   cin >> n;
//   for(int row=0; row<n; row+=1){
//     for(int col=0; col<row+1; col+=1){
//       cout<< col+1;
//     }
//   cout<<endl;
//  }
// }

// output:
// enter n:5
// 1
// 12   
// 123
// 1234
// 12345



// FULL PYRAMID

// int main(){
//   int n;
//   cout << "enter n:";
//   cin >> n;
//   for(int row =0;row<n; row++){
//     for(int col=0;col<n-row-1;col++){
//       cout<<" ";
//     }
//     for(int col=0;col<row+1;col++){
//       cout<<"* ";
//     }
//     cout<<endl;
//   }
// }

// output:
// enter n:5
//       *
//      * *
//     * * *        
//    * * * *
//   * * * * *





// INVERTED FULL PYRAMID

// int main(){
//     int n;
//     cout << "enter n:";
//     cin >> n;
//     for(int row = 0;row<n; row++){
//         for(int col=0;col<row;col++){
//             cout<<" ";
//         }
//         for(int col=0; col<n-row;col++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }
// output:
// enter n:7
// * * * * * * * 
//  * * * * * * 
//   * * * * * 
//    * * * *
//     * * *
//      * *
//       *




// QUESTION=> SOLID DIAMOND PATTERN
//    * 
//   * *
//  * * *
// * * * *
// * * * *
//  * * * 
//   * *
//    *


// int main(){
//   int n;
//   cout << "enter n:";
//   cin >> n;
// //   full pyramid
//   for(int row =0;row<n; row++){
//     for(int col=0;col<n-row-1;col++){
//       cout<<" ";
//     }
//     for(int col=0;col<row+1;col++){
//       cout<<"* ";
//     }
//     cout<<endl;
//   }
// //   inverted full pyramid
//   for(int row=0;row<n;row++){
//      for(int col=0; col<row; col++){
//       cout<<" ";
//     }
//     for(int col=0; col<n-row; col++){
//       cout<<"* ";
//     }
//     cout<<endl;
//   }
// }

// output:
// enter n:4
//    * 
//   * *
//  * * *
// * * * *
// * * * *
//  * * * 
//   * *
//    *




// HOLLOW DIAMOND PATTERN
//    *
//   * *
//  *   *
// *     *
// *     *
//  *   *
//   * *
//    *




// int main(){
//     int n;
//     int row;
//     cout << "enter n:"; 
//     cin >> n;
//    for(int row=0;row<n;row++){
//     for(int col=0;col<n-row-1;col++){
//         cout<<" ";
//     }
//     for(int col=0;col<2*row+1;col++){
//         if(col==0){
//             cout<<"*";
//         }
//         else if(col==2*row){
//             cout<<"*";
//         }
//         else{
//             cout<<" ";
//         }
//     }
//     cout<<endl;
//    }

//    for(int row=0;row<n;row++){
//     for(int col=0;col<row;col++){
//         cout<<" ";
//     }
    // for(int col=0;col<2*(n-row)-1;col++){      
//         if(col==0){
//             cout<<"*";
//         }
//         else if(col==2*(n-row)-2){
//             cout<<"*";
//         }
//         else{
//             cout<<" ";
//         }
//     }
//     cout<<endl;
//    }
   
// }


// also use 2*n-2*row-1 in place of 2*(n-row)-1
// we can also use col==2*n-2*row-2

// output:
// enter n:4
//    *
//   * *
//  *   *
// *     *
// *     *
//  *   *
//   * *
//    *



// // question
// **** ****
// ***   ***
// **     **
// *       *
// *       *
// **     **
// ***   ***
// **** ****



// int main(){
//     int n;
//     cout << "enter n:";
//     cin >> n;
//     for(int row=0;row<n;row++){
//         // starts
//         for(int col=0;col<n-row;col++){
//             cout<<"*";
//         }
//         // spaces with full pyramid
//         for(int col=0;col<2*row+1;col++){
//             cout<<" ";
//         }
//         // half pyramid inverted
//         for(int col=0;col<n-row;col++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int row=0;row<n;row++){
//         // starts
//         for(int col=0;col<row+1;col++){
//             cout<<"*";
//         }
//         // spaces with full pyramid
//         for(int col=0;col<2*(n-row)-1;col++){
//             cout<<" ";
//         }
//         // half pyramid inverted
//         for(int col=0;col<row+1;col++){
//             cout<<"*";
//         }
//         cout<<endl;
    
// }
// }



// Output:
// enter n:4
// **** ****
// ***   ***
// **     **
// *       *
// *       *
// **     **
// ***   ***
// **** ****



// fancy pattern

// 1
// 2*2
// 3*3*3
// 4*4*4*4
// 4*4*4*4
// 3*3*3
// 2*2
// 1


// int main(){
//     int n;
//     cout << "enter n:";
//     cin >> n;
//     for(int row=0;row<n;row++){
//         for(int col=0;col<row+1;col++){
//             cout<<row+1 ;
//              if(col !=row){
//                 cout<<"*";
//             }            
//          }
//          cout<<endl;  
//     }
//     for(int row=0;row<n;row++){
//         for(int col=0;col<n-row;col++){
//             cout<<n-row;  
//             if(col !=n-row-1){
//                 cout<<"*";
//             }
//          }
//          cout<<endl;
//     }

// }

// output:
// enter n:4
// 1
// 2*2
// 3*3*3
// 4*4*4*4
// 4*4*4*4
// 3*3*3
// 2*2
// 1




// NUMERIC PALINDROME PYRAMID
// enter n:5
// 1
// 121
// 12321
// 1234321
// 123454321

// int main(){
//     int row;
//     int n;
//     int col;
//     cout << "enter n:";
//     cin >> n;
//     for(row=0;row<n;row++){
        
//         for(col=0;col<row+1;col++){
//             cout<<col+1;
//         }
//         // col=col-1;
//         for(col=row; col>0 ;col--){
//         cout<<col;
//     }
//         cout<<endl;
//     }
    
// }

// output:
// enter n:5
// 1
// 121
// 12321
// 1234321
// 123454321


//  QUESTION=> NUMERIC PALINDROME FULL PYRAMID
//     1
//    232
//   34543
//  4567654
// 567898765




// int main(){
//     int n;
//     cout << "enter n:";
//     cin >> n;
//     for(int row=0;row<n;row++){
// SPACES
//         for(int col=0;col<n-row-1;col++){
//             cout<<" ";
//         }
// NUMBERS
//         for(int col=0;col<row+1;col++){
//             cout<<row+col+1;
//         }
// REVERSE
//         int start=  2*row;
//         for(int col=0;col<row;col++){
//             cout<<start;
//             start--;
//         }
//         cout<<endl;
//     }
// }


// output:
// enter n:5
//     1
//    232
//   34543
//  4567654
// 567898765



// NUMERIC HOLLOW  PYRAMID

//     1
//    1 2
//   1   3
//  1     4
// 1 2 3 4 5
int main(){
    int n;
    cout << "enter n:";
    cin >> n;
    
   for(int row=0;row<n;row++){
    for(int col=0;col<n-row-1;col++){
        cout<<" ";
    }
    int start=1;
    for(int col=0;col<2*row+1;col++){
        if(row==0 || row==n-1){
            if(col%2==0){
             cout<<start;
                start++;
            }else{
                cout<<" ";
            }
        }
        else if(col==0){
            cout<<1;
        }
        else if(col==2*row){
            cout<<row+1;
        }
        else{
            cout<<" ";
        }
    }
     cout<<endl; 
    
   }
     
}
// output:
// enter n:5
//     1
//    1 2
//   1   3
//  1     4
// 1 2 3 4 5