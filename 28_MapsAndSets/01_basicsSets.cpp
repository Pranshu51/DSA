//INTRODUCTION TO SETS:

// in Any Data Structure
//-> Insert-> O(1);
//-> Delete-> O(1);
//-> Search-> O(1);

//STL AND IMPORTANT MENTHODS IN SETS:
//Sets -> Unique elements, unordered, no indexing, no duplicates

// insert() -> O(logN)
// erase() -> O(logN)
// size() -> O(1)
// find() -> O(logN)
// begin() -> O(1)
// end() -> O(1)

#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.erase(3);
    int target = 4;
    // s.find = it searches in the set and if it is  not found then it returns the last element of the set. if it is found then it returns the iterator of that element.
    if(s.find(target) != s.end()){//target exists in the set
        cout<<"Found"<<endl;
    }else{
        cout<<"Not Found"<<endl;
    }
    
    cout<<"Size of set: "<<s.size()<<endl;
    for(int ele: s){
        cout<<ele<<" ";
    }
}