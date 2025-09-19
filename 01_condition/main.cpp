#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: " << endl;
    cin >> age;
    if(age<18){
      cout << "you are minor";

    }else{
      cout << "You are adult";
    }
}