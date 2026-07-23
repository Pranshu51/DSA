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

// int main(){
//     unordered_set<int> s;
//     s.insert(1);
//     s.insert(2);
//     s.insert(3);
//     s.insert(4);
//     s.insert(5);
//     s.erase(3);
//     int target = 4;
//     // s.find = it searches in the set and if it is  not found then it returns the last element of the set. if it is found then it returns the iterator of that element.
//     if(s.find(target) != s.end()){//target exists in the set
//         cout<<"Found"<<endl;
//     }else{
//         cout<<"Not Found"<<endl;
//     }
    
//     cout<<"Size of set: "<<s.size()<<endl;
//     for(int ele: s){
//         cout<<ele<<" ";
//     }
// }



//INTRODUCITON TO MAPS->HashMaps:
//1) Frequency array/set
//2)key,(value/index)
//here also insertion,searching,deletion is done in O(1) time complexity
#include <unordered_map>

int main(){
    unordered_map<string,int> m;
    pair<string,int> p1;
    p1.first = "ram";
    p1.second = 3;
    pair<string,int> p2("shyam",2);
    m.insert(p1);
    m.insert(p2);
    m["mohan"] = 1;
    m["sohan"] = 5;
    // for(pair<string,int> p:m){
    //     cout<<p.first<<" "<<p.second<<endl;
    // }
    m.erase("sohan");//only key is passed to erase the value
    for(auto p:m){//auto apne aap pehchan leta h
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<m.size();
}


//STL AND IMPORTANT METHODS IN MAPS:
// insert() -> O(logN)
// erase() -> O(logN)
// size() -> O(1)
// find() -> O(logN) 
//count() -> O(logN) //it returns the number of occurences of the key in the map. it is 0 or 1 because map contains unique keys.
// begin() -> O(1)
// end() -> O(1)
// [] -> O(logN) //it returns the value of the key in the map. if the key is not present then it creates a new key with value 0.
// at() -> O(logN) //it returns the value of the key in the map. if the key is not present then it throws an exception.
// size() -> O(1) //it returns the number of elements in the map.
// empty() -> O(1) //it returns true if the map is empty else false.
// clear() -> O(N) //it clears the map.
