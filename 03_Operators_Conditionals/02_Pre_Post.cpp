// 1. ++a => pre-increment: pehle hi 'a' ko increment kardo fir use karo
// 2. a++ => post-increment: pehle 'a' ko use karo fir increment kardo
// 3. --a => pre-decrement: pehle hi 'a' ko decrement kardo fir use karo
// 4. a-- => post-decrement: pehle 'a' ko use karo fir decrement kardo

#include<iostream>
using namespace std;
int main(){
    int a=6;
    int c=++a+1;
    cout<<c<<endl; // output:8
    int b = 6;
    int d = b++ + 1;
    cout<<d<<endl; // output:7

    int a =5;
    cout<<(++a)*(++a); // output:49 compiler dependent
}