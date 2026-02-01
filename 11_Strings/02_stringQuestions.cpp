#include<iostream>
#include<algorithm>
using namespace std;

// Reverse the first half of the string

// int main(){
//     string s;
//     getline(cin, s);

//     int n = s.length();
//     reverse(s.begin(), s.begin()+n/2);
//     cout<<s;
// }

//abcdefgh
// dcbaefgh


// get the second half of the string using inbuilt function substr
// int main(){
//     string s;
//     cout<<"Enter a string: ";
//     getline(cin, s);
//     int n = s.length();
//     string secondHalf = s.substr(n/2); // substr(start_index, length)
//     cout<<"Second half of the string: "<< secondHalf << endl;
// }

//Enter a string: chapri
// Second half of the string: pri


int main(){
    int x=12345;
    string s= to_string(x); // convert integer to string
    cout<< s << endl;
}




