// Pre In Post (VVVVImp)
#include<iostream>
using namespace std;

// kaam ->Pre =>Jo kaam call se pehle ho wo Pre hoga 
// call1
// kaam -> In
// call2
// kaam ->Post



// e.g
// void pip(int n){
//     if(n==0) return;
// cout<<"Pre "<<n <<endl;
// pip(n-1);
// cout<<"In "<<n <<endl;
// pip(n-1);
// cout<<"Post "<<n <<endl;
// }

// int main(){
//     pip(3);
// }

// Zigzag pattern


// void zigzag(int n){
//     if(n==0) return;
// cout<<n;
// zigzag(n-1);
// cout<<n;
// zigzag(n-1);
// cout<<n;
// }

// int main(){
//     zigzag(3); //321112111232111211123
// }