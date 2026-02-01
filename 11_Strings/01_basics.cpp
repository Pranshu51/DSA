#include<iostream>
#include<algorithm>
using namespace std;

// string is basically array of characters ending with null character '\0'
// character of arrays

// int main(){
    // char str[]={'a','b','\0'c','d','e'}; //jha backslash 0 aarga wha printing ruk jaega
    // char str[5]="abcd";
    // for(int i=0; i<5; i++){
    //     cout<<str[i]<< endl;
    // }
    // for(int i=0; str[i]!='\0'; i++){
    //     cout<<str[i]<< endl;
    // }
    // cout<< str << endl;
// }



// STRING AS A DATA TYPE
// int main(){
//     string s= "hello world"; //here spcaes are allowed
//     string str;
//     getline(cin, str); // it will take input including spaces until enter is pressed
//     // cin>> str; // it will take input only till space or only if the string has no space
//     cout<< str << endl;
// }


// Find the vowels in a string

// int main(){
//     string str;
//     getline(cin, str);
//     int count=0;
//     for(int i=0; i<str.length(); i++){
//         char ch= tolower(str[i]); // convert to lowercase to handle both cases
//         if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
//             count++;
//         }
//     }
//     cout<< "Number of vowels: " << count << endl;
// }

// int main(){
    // string str = "Ashish is a hotel owner";
    // cout<< str.length();
    // int len= str.length();

//     string s="parnhsu";
//     cout<< s <<endl;
//     s.push_back('z'); // adds character at the end
//     s.pop_back(); // removes character from the end
//     cout<< s << endl;

    // string s1="abc";
    // string s2="xyz";
    // // cout<< s1+s2 << endl; // concatenation
    // s2="xyz" + s1; //xyzabc
    // cout<< s2 << endl;

    //reverse
    // string s="abcdefgh";
    // reverse(s.begin(), s.end());  //fully reverse
    // reverse(s.begin()+2, s.end()-1);//abgfedch
    //if explicitely given both the indexes
    // reverse(s.begin()+2, s.begin()+5); //partial like if you have to print from index to to 4 then you have to add in the end 4+1 in the end you have to give one more than the actual index and, in starting you can directly give the index
    // cout<< s << endl;

// }


// substr()
// int main(){
//     string s="abcdefgh";
//     cout<<s.substr(4); //efgh jo index daalogewha se end tak print seect kar lega
//     //s.substr(starting index, length of substring)
//     string sub= s.substr(2,4); // starting index and length of substring
//     cout<< sub << endl; //cdef
// }



//to_string()
// int main(){
//     int x=12345;
//     string s= to_string(x); // convert integer to string
//     cout<< s << endl;
// }

//return the total no.of digits in a number without using any loop

int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    string str= to_string(s.length());
    cout<<"Total no.of digits: " << str << endl;
    //Enter the string: pranshu
// Total no.of digits: 7

}