#include <iostream>
using namespace std;

void swap(int* p,int* q){
    int temp = *p;
    *p = *q;
    *q = temp;
}


int main(){
    int a,b;
    cin>>a>>b;
    // int*x =&a;
    // int*y =&b;

    // swap(x,y);
    swap(&a,&b);
    cout<<a<<" "<<b<<endl;
}