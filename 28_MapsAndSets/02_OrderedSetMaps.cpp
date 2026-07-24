// ORDERED SETS AND MAPS:
//set<int> s; //ordered set
//map<int,int> mp; //ordered map
//they are sorted by default in ascending order



#include <iostream>
#include <set>
#include <map>
using namespace std;


// int main(){
    
//     set<int> s;
//     s.insert(5);
//     s.insert(2);
//     s.insert(8);
//     s.insert(1);
//     s.insert(5); // duplicate, will not be added

//     cout << "Elements in the set: ";
//     for (const auto& elem : s) {
//         cout << elem << " ";
//     }
//     cout << endl;

//     // map<int, int> mp;
//     // mp[3] = 10;
//     // mp[2] = 20;
//     // mp[1] = 30;
// // o/p:1: 30//key is sorted not value so key is priortized
// //     2: 20
// //     3: 10

//     map<string, int> mp;
//     mp["apple"] = 50;
//     mp["banana"] = 2;
//     mp["orange"] = 80;
//     // op:apple: 50//sorted in lexographic order means the letter which comes first will get print first
//     //     banana: 2
//     //     orange: 80
//     cout << "Elements in the map: " << endl;
//     for (const auto& pair : mp) {
//         cout << pair.first << ": " << pair.second << endl;
//     }

//     return 0; 
// }
