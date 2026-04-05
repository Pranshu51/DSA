// Recursive Function 

// structure of recursive function:

// Base case
// kaam
// call
// kaam 
// return

#include <iostream>
using namespace std;
// void fun(int n){//formal argument or parameter
//     if(n==0) return;
//     cout<<"hello"<<endl;
//     fun(n-1);
// }

// int main(){
//      fun(3);//actual argument
// }


// factorial using recursion
// int factorial(int n){
//Base case
//     if(n==0 || n==1) return 1;
//recursive call
//     return n*factorial(n-1);
// }


//  int main(){
//     int n ;
//     cout<<"Enter a number : ";
//     cin>>n;
//     cout<<"Factorial of "<<n<<" is "<<factorial(n)<<endl;
//     return 0;
//  }

// without recursion

// int main(){
//     int n ;
//     cout<<"Enter a number : ";
//     cin>>n;
//     int fact = 1;
//     for(int i=1;i<=n;i++){
//         fact *= i;
//     }
//     cout<<"Factorial of "<<n<<" is "<<fact<<endl;
//      return 0;
// }



//Que=> Print first n natural numbers in reverse order using recursion

// void print(int n){
//     if(n==0) return; //base case
//     cout<<n<<endl; //kaam
//     print(n-1);//call
// }

// int main(){
//     int n ;
//     cout<<"Enter a number : ";
//     cin>>n;
//     print(n);
// }




// Print first n natural numbers  using recursion (variable approach(parametrized form))

// void print(int i, int n){
//     if(i>n) return; //base case
//     cout<<i<<endl; //kaam
//     print(i+1,n);//call
// }


// int main(){
//     int n ;
//     cout<<"Enter a number : ";
//     cin>>n;
//     print(1,n);
// }


// MOST IMPORTANT CONCEPT IN RECURSION (FUNCTION CALL STACK)
// (After Recursive call) Print first n natural numbers  using recursion 

// void print(int n){
//     if(n==0) return; //base case
//     print(n-1);//call
//     cout<<n<<endl; //kaam
// }

// int main(){
//     int n ;
//     cout<<"Enter a number : ";
//     cin>>n;
//     print(n);
// }


// Sum of first n natural numbers using recursion (after recursive call or using return)

// int sum(int n){
//     if(n==0) return 0;
//     return n+sum(n-1);
//     //int sm =n+sum(n-1);
//    // return sm;
// }


// int main(){
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;
//     cout<<"Sum of first "<<n<<" natural numbers is "<<sum(n)<<endl;
//      return 0;
// }


// Sum of first n natural numbers using recursion (before recursive call or using parameterized form)

// void sum1ToN(int sum,int n){
//     if(n==0){
//         cout<<sum<<endl;
//         return;
//     }
//     sum1ToN(sum+n,n-1);
// }


// int main(){
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;
//     sum1ToN(0,n);
//      return 0;
// }


// Make a funciton which calcultes a raised to the power b using recursion 
//T.C = O(b) and S.C = O(b) stack frames as everytime two a,b new variables are created in the memory for each function call
//Hence iterative solution is better but recursive looks better

// int pow(int a, int b){
//     if(b==0) return 1;
//     return a*pow(a,b-1);
// }


// int main(){
//     int a;
//     cout<<"Enter a number : ";
//     cin>>a;
//     cout<<"Enter the power : ";
//     int b;
//     cin>>b;

//     cout<<a<<" raised to the power "<<b<<" is "<<pow(a,b)<<endl;
//      return 0;
// }

//Iterative  approach => T.C = O(b) and S.C = O(1)
// int main(){
//     int a;
//     cout<<"Enter a number : ";
//     cin>>a;
//     cout<<"Enter the power : ";
//     int b;
//     cin>>b;

//     int ans = 1;
//     for(int i=1;i<=b;i++){
//         ans *= a;
//     }
//     cout<<a<<" raised to the power "<<b<<" is "<<ans<<endl;
//      return 0;
// }
