#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(5);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.at(2)=90;
    cout<<v.at(2)<<endl; //90

    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" "; //5 1 90 3
    }
    cout<<endl;

    // sorting the vector
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" "; //1 3 5 90
    }
}