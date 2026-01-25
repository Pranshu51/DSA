#include <iostream>
using namespace std;

void display(int arr[]/*int* a*/, int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}

void change(int b[],int size)
{
    b[0] = 10; // Example change
}
int main(){
    int arr[]={3,5,7,2,8,6,4,1};
    int size= sizeof(arr)/sizeof(arr[0]);
    //accessing elemtns of array in another function
    //updation pass by value/reference?=>it is reference
    display(arr,size);
    change(arr,size);
    display(arr,size); 
    //3 5 7 2 8 6 4 1 
    //10 5 7 2 8 6 4 1
}