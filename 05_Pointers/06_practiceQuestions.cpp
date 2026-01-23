//Que => write te fucntion without returning anything  find first and last digit of a number using pass by reference.
#include <iostream>
using namespace std;
void find(int n,int* ptr1,int* ptr2){
    *ptr2 = n % 10; //lastDigit
    while(n >=9){
        n = n / 10;
    }
    *ptr1 = n; //firstDigit
    return;
}

int main(){
    int n;
    cin>>n;
    int firstDigit,lastDigit;
    int* ptr1=&firstDigit;
    int* ptr2=&lastDigit;
    find(n,ptr1,ptr2);
    cout<<"First Digit: "<<firstDigit<<endl;
    cout<<"Last Digit: "<<lastDigit<<endl;
}