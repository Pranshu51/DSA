#include <iostream>
using namespace std;

int main(){
    int* ptr1= NULL; // 0 reserved address but not pointing to any valid memory location
    int* ptr2= 0; // 0
    int* ptr3= '\0'; // 0
    cout<<ptr1<<endl; // it will print 0 or nullptr
    cout<<ptr2<<endl; // it will print 0 or nullptr
    cout<<ptr3<<endl; // it will print 0 or nullptr
    // \0-> null character- ASCII value 0
}