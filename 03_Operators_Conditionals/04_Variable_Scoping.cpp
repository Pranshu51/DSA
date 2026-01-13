#include <iostream>
using namespace std;

int pranshu=21; //global declaration of a variable is a bad one but for understanding purpose we r using it here
//because it do not free space local varibale free spaces when there scope is over

int main(){
    // declaration
    int a ;
    // intialization
    int b=5;
    // Updation
    b=10;
    cout<<pranshu<<endl; // output:21 +> global scope
    // int b=7; redefining or reinitialization is not allowed

    if(true){
        b=25;   // NO error as scope is inside the brackets means its life is inside the brackets
        cout<<b<<endl; // output:25
    }

    cout<<b;   //OUtput:10=>

}