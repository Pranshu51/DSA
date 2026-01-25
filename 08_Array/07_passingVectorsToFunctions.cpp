#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
// vectors are passed by value .Each time you pass new vector is created in the function
// using &=>ampercant operator we can pass by reference

void change(vector<int> &a){
    a[0]=100;
     for(int i=0;i<a.size();i++){
        cout<<a[i]<<" "; //100 1 90 3 
    }
    cout<<endl;
}

int main(){
    vector<int> v;
    v.push_back(5);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" "; //5 1 2 3
    }
    cout<<endl;

    change(v);
     for(int i=0;i<v.size();i++){
        cout<<v[i]<<" "; //5 1 2 3
        // with '&' output is 100 1 2 3
    }
}