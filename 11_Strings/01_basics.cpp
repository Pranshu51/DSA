#include<iostream>
#include<algorithm>
#include <string>
#include <cctype>
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
    // // s2="xyz" + s1; //xyzabc
    // string s= s1+'z'+s2; //abczxyz
    // cout<< s << endl;

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
        // in java substring() function use hota h like (s.substring(4)) c++ me substr() function use hota h
//     //s.substr(starting index, length of substring)
//     string sub= s.substr(2,4); // starting index and length of substring
    // in java substring() function use hota h like (s.substring(2,6)) it takes part of string from i to j-1 index c++ me substr() function use hota h like (s.substr(2,4)) it takes part of string from i to i+length-1 index
//     cout<< sub << endl; //cdef
// }


// print all the substrings of a string


// int main() {
//     string s = "abcd";
//     int n = s.length();

//     // i is the start index
//     for (int i = 0; i < n; i++) {
//         // j is the end position (exclusive)
//         for (int j = i + 1; j <= n; j++) {
//             // length = (end - start)
//             cout << s.substr(i, j - i) << " ";
//         }
//     }
//     return 0;
// }


//java term=interning=> to save space in memory by storing only one copy of each distinct string value, which must be immutable. In C++ we can achieve this by using string literals which are stored in a read-only section of memory and are shared among all instances of the same string literal. 
// term=> new= y this we can create new string object which is pointing to different memory location than the string literal. In C++ we can achieve this by using std::string which is a mutable string class that allows us to create new string objects that can be modified independently of each other.


//to_string()
// int main(){
//     int x=12345;
//     string s= to_string(x); // convert integer to string
//in java toString() function use hota h like (Integer.toString(x)) c++ me to_string() function use hota h like (to_string(x))
//     cout<< s << endl;
// }

//return the total no.of digits in a number without using any loop

// int main(){
//     string s;
//     cout<<"Enter the string: ";
//     cin>>s;
//     string str= to_string(s.length());
//     cout<<"Total no.of digits: " << str << endl;
//     //Enter the string: pranshu
// // Total no.of digits: 7

// }




// SORTING A STRING

// actually it is a lexicographical order not numerical order means dictionary order me sort karega agr koi string me number h to wha pehle saare numbers aajenge fir alphabets aayengeaur  koi space ya special character h to wha pehle wha aajenge fir numbers fir alphabets
// int main(){
//     string s;
//     cout<<"Enter a string: ";
//     getline(cin, s);
//     sort(s.begin(), s.end()); // sorts in ascending order
//     cout<<"Sorted string: "<< s << endl;
//     // Enter a string: pranshu
//     // Sorted string: ahnprsu
// }


// ANAGRAMS meaning two strings jinke characters same h bas order alag h mtlb dono ko ek dusre me rearrange kar sakte h like abc and cab


// STRINGSTREAM CLASS
// meaningis to calculate the no. of words in a string if we have to count the no. of words in a string we can use stringstream class
// it is used first we have to include sstream header file
// #include<sstream>
// #include<sstream>
// int main(){
//     string s="Hello world this is     C++";
//     stringstream ss(s); // object of stringstream class
//     string temp;
//     while(ss>>temp){
//         cout<< temp << endl;
//     }
// }

//Hello
// world
// this
// is
// C++


// stoi vs stoll built in functions
// stoi => string to integer.range of int -2,147,483,648 to 2,147,483,647 that means from 2 power 31 to 2 power 31 -1.
// stoll => string to long long integer.range of long long int -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807.means from 2 power 63 to 2 power 63 -1.

// int main(){
//     string s="9876543210";
//     int x= stoi(s); // convert string to integer
//     cout<< x+10 << endl; //9876543220
//     int a = 123456;
//     string str= to_string(a); // convert integer to string
//     cout<< str + "10" << endl; //12345610

//     // stoll example
//     string s2="9876543210123";
//     long long int y= stoll(s2); // convert string to long long integer
//     cout<< y+10 << endl; //9876543210133
// }


// int main(){
    // string s="pranshu";
    // cout<<s.find('u')<<endl; // prints the index of 'u' in the string s
    //in java indexOf('u') in c++ find('u')


    // string a= "abc";
    // string b ="dbc";
    // cout << a.compare(b) << endl; // compare function returns 0 if both strings are equal, negative if a < b, positive if a > b
    // op-1 because a is less than b in lexicographical order
    // in java compareTo() function use hota h like (a.compareTo(b))c++ me compare() function use hota h

    // string s="pranshu is a student";
    // in java startsWith() function use hota h like (s.startsWith("pra")) c++ me find() function use hota h
    // sout<<s.startswith("pra"); // true
    // sout<<s.contains("student");// true
    //java
    // string s="Pranshu Is A STudent";
    // cout<<s.toLowerCase() << endl; // pranshu is a student
    //sout<<s.toUpperCase() << endl; // PRANSHU IS A STUDENT
//     string s="pranshu";
//     string s2="hello";
//     //in java concat() function use hota h like (s.concat(s2)) c++ me append() function use hota h
//     // sout(s.concat(s2));
//     s.append(s2); // pranshuhello
//     cout<< s << endl;
// }