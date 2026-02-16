#include<iostream>
#include<algorithm>
#include<sstream>
#include<vector>
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


// int main(){
//     int x=12345;
//     string s= to_string(x); // convert integer to string
//     cout<< s << endl;
// }



// Warmup Question: Input a string and return the no. of times the neighbouring characters are different

// int main(){
//     string s;
//     cout<<"Enter a string: ";
//     getline(cin, s);
//     int n= s.length();
//     int count =0;
//     for(int i=0;i<n;i++){
//         if(n==1){
//             break;
//         }
//         else if(n==2 && s[0]!=s[1]){
//             count++;
//             break;
//         }
//         else if(i==0){
//             if(s[i]!=s[i+1]){
//                 count++;
//             }
//         }
//         else if(i==n-1){
//             if(s[i]!=s[i-1]){
//                 count++;
//             }
//         }
//         else{
//             if(s[i]!=s[i-1] && s[i]!=s[i+1]){
//                 count++;
//             }
//         }
//     }
// }



// ANAGRAM CHECK =>leetcode 242
// int main(){
//     string s1, s2;
//     cout<<"Enter first string: ";
//     getline(cin, s1);
//     cout<<"Enter second string: ";
//     getline(cin, s2);

//     // step 1: sort both the strings
//     sort(s1.begin(), s1.end());
//     sort(s2.begin(), s2.end());

//     // step 2: compare both the strings
//     if(s1==s2){
//         cout<<"The strings are anagrams."<< endl;
//     }
//     else{
//         cout<<"The strings are not anagrams."<< endl;
//     }
// }

//Enter first string: chinsa
// Enter second string: sachin
// The strings are anagrams.



// given a string consisting of lowercase english alphabets.Print the character that is occuring most no. of times in the string.


// bad code:

// int main(){
//     string s;
//     cout<<"Enter a string: ";
//     getline(cin, s);
//     int max=0;
//     for(int i =0;i<s.length();i++){
//         int count=0;
//         for(int j=0;j<s.length();j++){
//             if(s[i]==s[j]){
//                 count++;
//             }
//         }
//         if(count>max){
//             max=count;
//         }
//     }
//     for(int i=0;i<s.length();i++){
//         int count=0;
//         for(int j=0;j<s.length();j++){
//             if(s[i]==s[j]){
//                 count++;
//             }
//         }
//         if(count==max){
//             cout<<"The character occuring most no. of times is: "<< s[i] << " with count: " << max << endl;
//             break;
//         }
//     }
// 


// int main(){
//     string s;
//     cout<<"Enter a string: ";
//     getline(cin, s);
//     vector<int> v(26,0);
//     for(int i=0;i<s.length();i++){
//         char ch=s[i];
//         int ascii=int(ch);
//         v[ascii-97]++;
//     }
//     int max=0;
//     for(int i=0;i<26;i++){
//         if(v[i]>max){
//             max=v[i];
//         }
//     }
//     for(int i=0;i<26;i++){
//         if(v[i]==max){
//             int ascii=i+97;
//             char ch=char(ascii);
//             cout<<"The character occuring most no. of times is: "<< ch << " with count: " << max << endl;
//             break;
//         }
//     }
// }

// Enter a string: sanam
// The character occuring most no. of times is: a with count: 2



// StringStream class in C++ question
// given a sentence ,split every single word of the sentence and print them in new lines
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


// most frequent word in a string
// int main(){
//     string s;
//     cout<<"Enter a string: ";
//     getline(cin, s);
//     stringstream ss(s);
//     string temp;
//     vector<string> v;
//     while(ss>>temp){
//         v.push_back(temp);
//     }
//     sort(v.begin(),v.end());
//     int maxCount = 1;
//     int count =1;
//     for(int i=1;i<v.size();i++){
//         if(v[i]==v[i-1]){
//             count++;
//         }
//         else count=1;
//         if(count>maxCount){
//             maxCount=count;
//         }
//     }
//     count =1;
//       for(int i=1;i<v.size();i++){
//         if(v[i]==v[i-1]){
//             count++;
//         }
//         else count=1;
//         if(count==maxCount){
//            cout<<"The most frequent word is: "<< v[i] << " with count: " << maxCount << endl;
//         }
//     }
// }

//Enter a string: ashish is a good person also sachin is a bad person
// The most frequent word is: a with count: 2
// The most frequent word is: is with count: 2
// The most frequent word is: person with count: 2


// given  n string /vector consisting of digits from 0to 9.Return the indexof string which has maximum value(take 0 based indexing)

// int main(){
//     vector<string> v={"123","4567","23","007890","5"};
//     int max = stoi(v[0]);
//     string maxStr = v[0];
//     for(int i=0;i<v.size();i++){
//         int num = stoi(v[i]);
//         if(num>max){
//             max=num;
//             maxStr=v[i];
//         }
//     }
//     for(int i=0;i<v.size();i++){
//         int num= stoi(v[i]);
//         if(num==max){
//             cout<<"The index of string with maximum value is: "<< i << " and the string is: " << maxStr << " value is: "<<max << endl;
//         }
//     }
// }


// The index of string with maximum value is: 3 and the string is: 007890 value is: 7890