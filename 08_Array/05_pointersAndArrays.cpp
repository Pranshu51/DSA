#include <iostream>
using namespace std;

int main(){
    int arr[]={3,5,7,2,8,6,4,1};
    cout<<sizeof(arr)/sizeof(arr[0])<<endl; //output:32 (4*8=32 bytes)
    int* ptr =arr; //&arr[0]
    cout<<ptr<<endl; //output:0x61ff0c
    ptr[0]=8;
    for(int i=0;i<8;i++){
        cout<<ptr[i]<<" "; //o/p= 8 5 7 2 8
    }
    cout<<endl;
    *ptr=9; // ptr[0]=8;

    for(int i=0;i<8;i++){
        // cout<<ptr[i]<<" ";  //OR
        cout<<*ptr<<" ";
        ptr++;
        //8 5 7 2 8 6 4 1
            // 9 5 7 2 8 6 4 1
            ptr=arr; //always use this to point to starting address because from above  loop pointer will lost its original address
    }

    *ptr=8;
    ptr++;
    *ptr=9;
    ptr--;
    cout<<endl;
    for(int i=0;i<8;i++){
        // cout<<*ptr<<" ";
        // ptr++;
        cout<<i[ptr]<<" ";  //using i as offset
        cout<<i[arr]<<" ";  //for printing
        //8 9 7 2 8 6 4 1
    }
}