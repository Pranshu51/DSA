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
    cout<<"Size of set: "<<s.size()<<endl;
    for(int ele: s){
        cout<<ele<<" ";
    }
}