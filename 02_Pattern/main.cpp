

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

// numeric pyramid

int main(){
  int n;
  cout << "enter n:";
  cin >> n;
  for(int row=0; row<n; row+=1){
    for(int col=0; col<row+1; col+=1){
      cout<< col+1;
    }
  cout<<endl;
 }
}
