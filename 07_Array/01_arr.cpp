#include <iostream>
using namespace std;

// int main(){
    // Array declration
    // int arr[7];
    // cout<<arr<<endl;  //output:0x61ff0c
    // cout<<&arr[0]<<endl; //output:0x61ff0c

    // ARRAY INTIALIZATION
//     int arr[5] = {2,4,6,8,10};
//     int brr[20] = {1,3}; //rest all will be 0
//     int crr[5] = {0}; //all will be 0
// char a[10]={'a','b','c','d'}
//     // int drr[4] = {1,2,3,4,5,6}; //error:too many initializers for 'int [4]'
//     cout<<arr[0]<<endl; //output:2

        // further study allocation of array in dynmic form inmemory locaiton

        // int n; cin>>n;
        // int arr[n]; ==>we can do that but it is a bad practice always create dynamic array instead

        // int arr[] = {1,2,3,4,5};
        // for(int index=0;index<5;index++){
        //     cout<<arr[index]<< " ";
        // }


        // Input in array
        // int arr[5];
        // cout<<"Enter 5 elements "<<endl;
        // for(int index=0;index<5;index++){
        //     cin>>arr[index];
        // }
        //     cout<<"array elemnts are: ";

        // for(int index=0;index<5;index++){
        //     cout<<arr[index]<< " ";
        // }


// }

//  take 5 elements i/p in array and rint their doubels

// int main(){
//     int arr[5];
//     cout<<"Enter 5 elements ";
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }
//     cout<<"Doubles of array elements are: ";
//     for(int i=0;i<5;i++){
//         cout<<arr[i]*2 <<" ";
//     }
// }


// take input in array and change them into 1

// int main(){
//     int arr[5];
//     cout<<"Enter 5 elements ";
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }
//     cout<<"Array elements after changing into 1 are: ";
//     for(int i=0;i<5;i++){
//          arr[i]=1;   
//         cout<<arr[i]<<" ";

// }
// }


// proof the remaining intialized aeements are zero

// int main(){
// int arr[10]={2,4,6};
// for(int i=0;i<10;i++){
//     cout<<arr[i]<<" "; //2 4 6 0 0 0 0 0 0 0 
// }
// }


// int main(){
// int arr[10]; //=>it takes garbage value
// for(int i=0;i<10;i++){
//     cout<<arr[i]<<" "; //6422224 6422280 6422476 1993861712 732887624 -2 6422280 1993837597 4200944 6422356 
// }
// }

//  int main(){ //to avoid garbage value we can intialize all elements with zero
// int arr[10]={0};
// for(int i=0;i<10;i++){
//     cout<<arr[i]<<" "; //0 0 0 0 0 0 0 0 0 0 
// }
// }

// memset
// #include <cstring>
// int main(){
//     int arr[10];
//     memset(arr, -1, sizeof(arr)); //-1 means all bits are 1
//     for(int i=0;i<10;i++){
//         cout<<arr[i]<<" "; //-1 -1 -1 -1 -1 -1 -1 -1 -1 -1 
//     }
// }

// int printArray(int arr[], int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// void inc(int arr[], int size){
//     for(int i=0;i<size;i++){
//         arr[i] = arr[i] + 10;
//     }
// }



// int main(){
//     int arr[]={1,2,3};
//     int size =3;
//     inc(arr,size);

//     printArray(arr,size);//o/p:11 12 13 
// }

// Linear Search in array

// bool find(int arr[], int size,int key){
//     for(int i=0;i<size;i++){
//         if(arr[i]==key){
//             return true;
//         }
//     }
//     return false;
// }


// int main(){
//     int arr[10]={1,2,6,4,8};
//     int size=5;
//     int key;cout<<"Entern the key to be searched: ";
//     cin>>key;
//     if(find( arr,size,key)){
//         cout<<"Key found in the array"<<endl;
//     }
//     else{
//         cout<<"Key not found in the array"<<endl;
//     }
// }

// int main(){
//     int arr[]={4,2,1,5,3};
//     int size=5;
//     int key;
//     cout<<"Enter the key to be searched: ";
//     cin>>key;

//     bool found = false;
//     for(int i=0;i<size;i++){
//         if(arr[i]==key){
//             found = true;
//             cout<<"Key found at index "<<i<<endl;
//             break;
//         }
//     }
//     if(!found){
//         cout<<"Key not found in the array"<<endl;
//     }
// }


// Q=>Count no. of 0's and 1's in the array

// int main(){
//     int arr[]={0,1,1,0,0,1,1,1,0};
//     int size=9;
//     int count0=0;
//     int count1=0;
//     for(int i=0;i<size;i++){
//         if(arr[i]==0){
//             count0=count0+1;
//         }
//         if(arr[i]==1){
//             count1=count1+1;
//         }
//     }
//     cout<<"Number of 0s: "<<count0<<endl;
//     cout<<"Number of 1s: "<<count1<<endl;
// }


#include <limits.h>


// int main(){
//     int arr[]={1,2,65,2,1,8,9,99,-100};
//     int size=9;
//     // best pratice to initialize max with minimum possible value and min with maximum possible value
//     // not applicable for all elements are -ve when you intialized it with int max=0 it will run on cacseINT_MIN
//     int max=INT_MIN;

//     for(int i=0;i<size;i++){
//         if(arr[i]>max){
//            max =arr[i];
//         }
//     }
//     cout<<"maximum number in the array is: "<<max<<endl;
    
// }

// Find minimum number in the array

// int main(){
//     int arr[]={1,2,65,2,1,8,9,99,-100};
//     int size=9;
//     // best pratice to initialize max with minimum possible value and min with maximum possible value
//     // not applicable for all elements are -ve when you intialized it with int max=0 it will run on cacseINT_MIN
//     int min=INT_MAX;

//     for(int i=0;i<size;i++){
//         if(arr[i]<min){
//            min =arr[i];
//         }
//     }
//     cout<<"maximum number in the array is: "<<min<<endl;
    
// }


// print extreme values in the array


// int main(){
//     int arr[]={10,20,30,40,50,60,70,80};
//     int size=7;
//     int start=0;
//     int end=size-1;

//      cout<<"Extreme values are :"<<" ";
//     while(start<=end){
//         if(start==end){
//             cout<<arr[start]<<" ";
//             break;
//         }else{
//         cout<< arr[start]<<" ";
//         cout<< arr[end]<<" ";
//         }
//         start++;
//         end--;
//     }
// }

// Reverse of the string


// int main(){
//     int arr[]={1,2,3,4,5,6};
//     int size=5;
//     int start=0;
//     int end=size-1;

//     while(start<=end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }

//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }


// Swapppppppppppppppp
// Here are **all common and important ways to swap two variables in C++**, with **clear explanation + example code**.
// (Useful for exams, interviews, and practical coding)

// ---

// ## 1️⃣ Swapping using **Third (Temporary) Variable** ✅ *(Most common & safest)*

// ### Logic

// * Store one value in a temporary variable
// * Replace values

// ### Code

// ```cpp
// #include <iostream>
// using namespace std;

// int main() {
//     int a = 10, b = 20, temp;

//     temp = a;
//     a = b;
//     b = temp;

//     cout << "a = " << a << ", b = " << b;
//     return 0;
// }
// ```

// ---

// ## 2️⃣ Swapping **Without Third Variable (Using + and -)**

// ### Logic

// * Add both values
// * Subtract to get swapped values

// ### Code

// ```cpp
// #include <iostream>
// using namespace std;

// int main() {
//     int a = 10, b = 20;

//     a = a + b;
//     b = a - b;
//     a = a - b;

//     cout << "a = " << a << ", b = " << b;
//     return 0;
// }
// ```

// ⚠️ **Risk:** Overflow if values are large

// ---

// ## 3️⃣ Swapping **Without Third Variable (Using * and /)**

// ### Logic

// * Multiply then divide

// ### Code

// ```cpp
// #include <iostream>
// using namespace std;

// int main() {
//     int a = 5, b = 10;

//     a = a * b;
//     b = a / b;
//     a = a / b;

//     cout << "a = " << a << ", b = " << b;
//     return 0;
// }
// ```

// ⚠️ **Limitations**

// * `b` must not be `0`
// * Overflow possible

// ---

// ## 4️⃣ Swapping using **XOR (Bitwise Operator)** 🔥 *(Interview favorite)*

// ### Logic

// * Uses bitwise XOR
// * No extra memory

// ### Code

// ```cpp
// #include <iostream>
// using namespace std;

// int main() {
//     int a = 10, b = 20;

//     a = a ^ b;
//     b = a ^ b;
//     a = a ^ b;

//     cout << "a = " << a << ", b = " << b;
//     return 0;
// }
// ```

// ✅ No overflow
// ❌ Works only with integers

// ---

// ## 5️⃣ Swapping using **`std::swap()` (Built-in Function)** ✅ *(Best practice)*

// ### Code

// ```cpp
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main() {
//     int a = 10, b = 20;

//     swap(a, b);

//     cout << "a = " << a << ", b = " << b;
//     return 0;
// }
// ```

// ✔ Clean
// ✔ Safe
// ✔ Preferred in real projects

// ---

// ## 6️⃣ Swapping using **Function (Call by Reference)**

// ### Logic

// * Pass variables by reference
// * Changes reflect in `main()`

// ### Code

// ```cpp
// #include <iostream>
// using namespace std;

// void swap(int &x, int &y) {
//     int temp = x;
//     x = y;
//     y = temp;
// }

// int main() {
//     int a = 10, b = 20;

//     swap(a, b);

//     cout << "a = " << a << ", b = " << b;
//     return 0;
// }
// ```

// ---

// ## 7️⃣ Swapping using **Pointers**

// ### Code

// ```cpp
// #include <iostream>
// using namespace std;

// void swap(int *x, int *y) {
//     int temp = *x;
//     *x = *y;
//     *y = temp;
// }

// int main() {
//     int a = 10, b = 20;

//     swap(&a, &b);

//     cout << "a = " << a << ", b = " << b;
//     return 0;
// }
// ```

// ---

// ## 📌 Quick Comparison Table

// | Method        | Extra Variable | Safe | Interview Use |
// | ------------- | -------------- | ---- | ------------- |
// | Temp variable | ✔              | ✔✔✔  | ✔✔✔           |
// | + and -       | ❌              | ❌    | ✔             |
// | * and /       | ❌              | ❌    | ❌             |
// | XOR           | ❌              | ✔    | ✔✔✔           |
// | std::swap     | ✔ (internal)   | ✔✔✔  | ✔✔            |
// | Reference     | ✔              | ✔✔✔  | ✔✔            |
// | Pointer       | ✔              | ✔✔   | ✔             |


