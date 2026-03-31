// Fibonnaci sequence using recursion with multiple calls
#include<iostream>
using namespace std;
// int fib(int n){
//     if(n==0) return 0; //if 0 based//later

//     if(n==1 ||n==2) return 1;
// int leftAns= fib(n-1); //later
// int rightAns = fib(n-2);//later
// return leftAns+rightAns;//later
//     return fib(n-1)+fib(n-2);
// }
// int main(){
//     int n;
//     cout<<"Enter the number of terms : ";
//     cin>>n;
//     cout<<"Fibonacci sequence is : " <<fib(n)<<endl;
//      return 0;
// }


//Iterative approach to print Fibonacci sequence

// int main(){
//     int n;
//     cout<<"Enter the number of terms : ";
//     cin>>n;
//     int a = 0, b = 1, c;
//     cout<<"Fibonacci sequence is : "<<a<<" "<<b<<" ";
//     for(int i=3;i<=n;i++){
//         c = a+b;
//         cout<<c<<" ";
//         a = b;
//         b = c;
//     }
//      return 0;
// }


// Power Function (Logarithmic)

// int power(int x, int n){
//     if(n == 0) return 1;
//     if(n == 1) return x;

//     int half = power(x, n / 2);
//     if(n % 2 == 0) {
//         return half * half;
//     } else {
//         return half * half * x;
//     }
// }

// int main(){
//     int x, n;
//     cout<<"Enter the base and exponent : ";
//     cin>>x>>n;
//     cout<<"Answer is : "<<power(x,n)<<endl;
//      return 0;
// }



//STAIR PATH PROBLEM
// 1.one can climb either 1, 2  steps at a time. Given n steps, find the number of ways to reach the top.

// int climbStairs(int n){
//     if(n==1) return 1;
//     if(n==2) return 2;
//     return climbStairs(n-1)+climbStairs(n-2);
// }

// int main(){
//     int n;
//     cout<<"Enter the number of steps : ";
//     cin>>n;
//     cout<<climbStairs(n);
// }


// 2. one can climb either 1, 2 or 3 steps at a time. Given n steps, find the number of ways to reach the top.

// int climbStairs(int n){
//     // if(n==1) return 1;
//     // if(n==2) return 2;
//     // if(n==3) return 4;
//     // OR
//                 // if(n<0) return 0;
//                 // if(n==0) return 1;
//     return climbStairs(n-1)+climbStairs(n-2)+climbStairs(n-3);
// }

// int main(){
//     int n;
//     cout<<"Enter the number of steps : ";
//     cin>>n;
//     cout<<climbStairs(n);
// }


//MAZE PATH PROBLEM
// 1. one can move either right or down. Given a grid of size m*n, find the number of ways to reach the bottom right corner from the top left corner. or to reach destination

int maze(int sr,int sc,int er,int ec){
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int rightWays = maze(sr, sc+1, er, ec);
    int downWays = maze(sr+1, sc, er, ec);
    int totalWays = rightWays + downWays;
    return totalWays;
}

int maze2(int row,int col){
    if(row<1 || col<1) return 0;
    if(row==1 && col==1) return 1;
    int rightWays = maze2(row, col-1);
    int downWays = maze2(row-1, col);
    int totalWays = rightWays + downWays;
    return totalWays;
}

void printPath(int sr,int sc,int er,int ec,string s){
    if(sr>er || sc>ec) return;
    if(sr==er && sc==ec) {
        cout<<s<<endl;
        return;
    }
    printPath(sr, sc+1, er, ec, s + "R");
    printPath(sr+1, sc, er, ec, s + "D");
}


void printPath2(int row,int col,string s){
    if(row<1 || col<1) return ;
    if(row==1 && col==1) {
        cout<<s<<endl;
        return;
    }
    printPath2(row, col-1, s + "R");
    printPath2(row-1, col, s + "D");
}

int main(){
    // cout<<"Total no. of ways are: "<<maze(0,0,2,2); //if you want to write as in matrix so start it with 1,1,3,3
    // printPath(1,1,3,3,"");
    cout << "Total no. of ways are: " << maze2(4,4) << endl;
    printPath2(3, 3, "");
     return 0;
}

//NOTE: if the matrix is m*n then th total no of ways for both m*n and n*m is same.

