// # dECIMAL TO BINARY CONVERSION


#include <iostream>
#include <cmath>
using namespace std;    
// DIVISION METHOD

// int main(){
//     int n;
//     cout<<"Enter a decimal number:";
//     cin>>n;
//     float ans =0;
//     int i=0;
//     while(n>0){
//         int bit = n % 2;
//         ans = (bit * pow(10,i++)) + ans;
//         n = n/2; 
      
//     }
//     cout<<"Binary number is :"<< ans <<endl;
// }

// op:Enter a decimal number:5
// Binary number is :101

// BITWISE METHOD


// #include <iostream>
// #include <cmath>
// using namespace std;    


// int main(){
//     int n;
//     cout<<"Enter a decimal number:";
//     cin>>n;
//     float ans = 0;
//     int i = 0;
//     while(n > 0){
//         int bit = n & 1;
//         ans = (bit * (pow(10, i))) + ans;
//         n = n >> 1; 
//         i++;
//     }
//     cout<<"Binary number is :"<< ans <<endl;
//     return 0;
// }


// BINARY TO DECIMAL CONVERSION



int binarytoDecimal(int n){
    int i =0;
    float ans =0;
    while(n!=0){
        int bit = n%10;
        ans= ans+(bit*pow(2,i));
        n=n/10;
        i++;
    }
    return ans;

}


int main(){
    int n;
    cout<<"Enter a binary number:";
    cin>>n;
    int decimalNumber = binarytoDecimal(n);
    cout<<"Decimal number is :"<< decimalNumber <<endl;
    return 0;
}



