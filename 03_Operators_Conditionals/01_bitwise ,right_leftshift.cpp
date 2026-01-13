#include<iostream>
using namespace std;
/*
four types of BITWISE OPERATORS :
1.AND=>when both are true=>true,
2.OR=>Anyone is true=>,
3.XOR=>both same => true,
4.NOT=>inverts the value
*/

/*

int main(){
    bool a= true;
    bool b=false;
                                output:
    cout<<(a | b) <<endl;      // 1

    cout<<(a & b) <<endl;       // 0

    cout<<(a^b) <<endl;      // 1


    
    a =(~a);      //  output:-2 for both the cases either true r false in online compiler

    a =~(a);  output:nothing is showing in my screen
     output:-2 for both the cases either true r false in online compiler 

*/


// cout<<(2 & 3)<<endl; //2
// 

/*
leftshift operator(<<) eg:00000001=>00000010=2
shift  operator in left and add zero at the rightmost aprt
Multiplied by 2

rightshift operator(>>) eg:00000010=>00000001=1
Divided by 2
shift operator in right and add zero at the leftmost aprt
*/
int main(){
 int a =12;
 /*
 if a=a<<-1 ; op:give garbage value
 a = a << 1;  output:24
 a = a << 5;
 cout<< a;  // output:384


rightshift (floor value for both odd and even )
if we do rightshift on negative numbers then it will convert into high value of rightshift


if odd no. are there not it takes floor value  eg:   5 / 2 = 2.5 =>5 >> 1 = 2
negative no.=-3 / 2 = -1.5 =>-3 >> 1 = -2




here negative no. r not considered garbage value here it gives output and in negative it takes floor  value

a=a>>2;
cout<<a; output:3
*/

}
