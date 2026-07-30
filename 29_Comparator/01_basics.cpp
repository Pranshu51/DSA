//1.It is a function or an object that is used to compare elements.
//2.Its used to decide the order of elements in a data structure or algorithm(vector,set,map).

// They Can Be Implemented In a Different Ways:

// 1. Funciton Pointer: A function that implements the comparison logic and is passed as a pointer to the data structure or algorithm.e.g- sort()//By Default ascending order hota h sort me, but we can change it to descending order by passing a function pointer as a third argument to the sort() function.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// bool myComp(int a, int b) {
//     // return a > b; // For descending order
//     //or
//     if(a>b) return true;
//     else return false;
// }

// int main(){
//     vector<int> v = {5, 2, 8, 1, 4};
//     // Custom comparison function for descending order
//     sort(begin(v), end(v),myComp);
//     // Print the sorted vector
//     for(int x : v) {
//         cout << x << " ";
//     }
//     return 0;
// }


// bool myComp(const pair<int,int>& a, const pair<int,int>& b) {
//     if(a.first > b.first) return true;
//     else if(a.first < b.first) return false;
//     else return a.second > b.second;
// }
//or
// bool myComp(const pair<int,int>& a, const pair<int,int>& b) {
//     // if(a.first == b.first){
//     //     if(a.second > b.second) return true;
//     //     else return false;
//     // }
//     //or
//     if(a.first == b.first) return a.second > b.second;
//     // if(a.first > b.first) return true;
//     // return false;
//     //or
//     return a.first > b.first;
// }

// int main()
// {
//     vector<pair<int,int>> v = {{1, 2},{1, 3}, {3, 1}, {2, 4}, {1, 3}};
//     // Custom comparison function for sorting by first element, then by second element
//     // sort(v.begin(),v.end());//if same 1 element is there it will sort by second element
//     // for(auto x:v){
//     //     cout<<x.first<<","<<x.second<<" : ";
//     // }//o/p => 1,2 : 1,3 : 1,3 : 2,4 : 3,1 :


//     sort(v.begin(),v.end(),myComp);
//     for(auto x:v){
//         cout<<x.first<<","<<x.second<<" : ";
//     }//op:3,1 : 2,4 : 1,3 : 1,3 : 1,2 : 

// }






//METHOD-2
// Function Objects(Functors): An Object that can be treated as a fucntion or a function pointer. It is an instance of a class that overloads the operator() and can be used to define custom comparison logic. e.g- priority_queue, set, map

// class myComp {
// public:
//     bool operator()(int a, int b) {
//         return a > b; // For descending order
//     }
// };

// int main(){
//     vector<int> v = {5, 2, 8, 1, 4};
//     // Custom comparison function for descending order

//     // sort(begin(v), end(v), [](int a, int b) {
//     //     return a > b; // For descending order
//     // });

//     //or
//     sort(v.begin(),v.end(),myComp());//Functor
 
//     // Print the sorted vector
//     for(int x : v) {
//         cout << x << " ";
//     }
//     return 0;
// }


//Method 3:

// Lambda Expressions: An anonymous function that can be defined inline and used as a comparison function. It is a concise way to define custom comparison logic without the need for a separate function or class. e.g- sort(), priority_queue, set, map
// [x,y,mp]=>Capture Clause--We can capture variables from the surrounding scope(int a, int b) {
//     return a > b; // For descending order
// }

auto mylambda = [](int a, int b) {
    return a > b; // For descending order
};

int main(){
    vector<int> v = {5, 2, 8, 1, 4};
    // Custom comparison function for descending order
    // sort(begin(v), end(v), [](int a, int b) {
    //     return a > b; // For descending order
    // });
    //or
    sort(v.begin(),v.end(),mylambda);//Lambda Expression
    // Print the sorted vector
    for(int x : v) {
        cout << x << " ";
    }
    return 0;
}