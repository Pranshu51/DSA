//jha bhi likha ho print ans modulo 10 raise to power 9 +7 we use this operator(modulo) to avoid overflow and to get the answer in the range of int. because 10 raise to power 9 +7 is a prime number and it is used to get the answer in the range of int.

//agr aapko kahi bhi kisi no. ko add karke mod karna h aur wo no. bahut pade h to hum use krenge property
// (a+b) mod m = ((a mod m) + (b mod m)) mod m
// (a*b) mod m = ((a mod m) * (b mod m)) mod m
// (a-b) mod m = ((a mod m) - (b mod m) + m) mod m
// (a/b) mod m = ((a mod m) * (b^-1 mod m)) mod m
// where m is the modulo value which is 10 raise to power 9 +7 in our case and a and b are the numbers which we want to add, multiply, subtract or divide and then take modulo of the result.
#include<iostream>
#include<climits>
#include<vector>
using namespace std;

// int main(){
//     int x = INT_MAX;
//     cout<<x%5<<endl;//2
//     cout<<(x%5 + 2%5)%5<<endl;//4
//     //we can do it for multiplication and subtraction also
//     cout<<(x%5 * 2%5)%5<<endl;//0
//     cout<<((x%5) - (2%5) + 5)%5<<endl;//0


// }


//Que=>**Question:**

// Write a C++ program to calculate and print the factorial of the first **25 natural numbers**, applying a modulo of **$10^9+7$** to each result to prevent integer overflow.




// vector<long long int> factorial(int n) {
//     vector<long long int> fact(n + 1, 1);
//     long long int MOD = 1000000000 + 7;
//     for (int i = 2; i <= n; i++) {
//         fact[i] = (i % MOD * fact[i - 1] % MOD) % MOD;
//     }
//     return fact;
// }

// int main() {
//     vector<long long int> fact = factorial(25);
//     for (int i = 0; i <= 25; i++) {
//         cout << "Factorial of " << i << " is: " << fact[i] << endl;
//     }

//     return 0;
// }