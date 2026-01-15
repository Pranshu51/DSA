/*
function ek aisa program hota h jo kisi well defined task se link hota h
code becomes lengthy and bulky if we copy paste same code again and again if mistake wiill be there it will also be copied
it loses readability
functions help in reusability of code
syntax:
 Return type function_name(Input parameter list){
     function body
     return statement;
     return 0;=>shows execujtion is successful


FUNCTION ORDER MEANS YOU HAVE TO DECLARE FUNCTION BEFORE USE    
}
*/

#include <iostream>
using namespace std;

// void printMyName(){
//     int n;
//     cout<<"Enter the no.:";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cout<<"Pranshu"<<endl;
//     }
// }

// int main(){
//     printMyName();
//     return 0;
// }


// DECLARATION OF FUNCTION IS ABOVE WHERE WE ARE USING IT BELOW OTHERWISE COMPILER CAN'T FIND THE FUNCTION

// here int a,b is a parameter
// int sum(int a, int b);

// int main(){
//     int num1,num2;
//     cout<<"Enter 1 numbers:";
//     cin>>num1;
//     cout<<"Enter 2 numbers:";
//     cin>>num2;
//     cout<<"Sum is:"<<sum(num1,num2);
//     return 0;
// }
// here int a,b is an argument
// int sum(int a, int b){
//     int c =a+b;
//     return c;
// }




//    FUNCTION CALL STACK
/*
+-------------+
|   TOP       |    -> function call
+-------------+
|   Item 3    |   ->kis function se dusre function ko call kiya
+-------------+
|   Item 2    |   ->function k kon konse local varibales h
+-------------+
|printMyName  |   ->function kya return kar rha h
+-------------+
|   main      |    => kaam hota jaega stack khali ho jaega  <==
+-------------+
*/



// PASS BY VALUE
// =>Copy create hogi Actual value pass nhi hogi agr 'a' variable main function me bhi h aur uper function me bhi h to uski copy pass hogi na ki original value pass hogi





// ADD 2 NUMBERS USING FUNCTION 

// int sum(int a, int b){
//     int c =a+b;
//     return c;
// }

// int main(){
//     int num1,num2;
//     cout<<"Enter 1 numbers:";
//     cin>>num1;
//     cout<<"Enter 2 numbers:";
//     cin>>num2;
//     cout<<"Sum is:"<<sum(num1,num2);
//     return 0;
// }




// '&' ADDRESS OF OPERATOR

// int main(){
//     int a =5;
//     cout<<"Address fo a is : " << &a <<endl;  //outtput: Address fo a is : 0x61ff0c
// }


// MAX OF 3 NO.


// int findMax(int a ,int b,int c){
//     if(a>b && a>c){
//         cout<<"A is the max of three";
//         return a;
//     }
//     else if(b>a && b>c){
//         cout<<"B is the max of three";
//         return b;
//     }
//     else {
//         cout<<"C is the max of three";
//         return c;
//     }
// }

// int main(){
//     int a,b,c;
//     cout<<" Enter no A:";
//     cin>>a;
//     cout<<" Enter no B:";
//     cin>>b;
//     cout<<" Enter no C:";
//     cin>>c;

//     int result = findMax(a,b,c);
//     cout<<"max of three is :"<< result;
// }



// COUNTING 1 TO N

// void count(int n)  //void only we are printing not returning something
// {
//     for(int i=1;i<=n;i++){
//         cout<<i<<" " ;

//     }
//     cout<<endl;

// }


// int main(){
//     int n;
//     cout<<"enter a number:";
//     cin>>n;
//     count(n);
//     return 0;
// }    //output: 1 2 3 4 5 


// WRITE A FUNCTION OF STUDENTS AND GRADE PROBLEM

// char getGrade(int marks){
    // if(marks>=90){
    //     return 'A';
    // }
    // else if(marks>=80){
    //     return 'B';
    // }
    // else if(marks>=70){
    //     return 'C';
    // }
    // else if(marks>=60){
    //     return 'D';
    // }
    // else if(marks<60){
    //     return 'E';
    // }

//     switch(marks/10){
//         case 10: return'A'; break;
//         case 9: return'A'; break;
//         case 8: return'B'; break;
//         case 7: return'C'; break;
//         case 6: return'D'; break;
//         default: return'E'; break;
//     }
// }


// int main(){
//     int marks;
//     cout<<"Enter your marks:";
//     cin>>marks;
//     char finalGrade = getGrade(marks);
//     cout<<finalGrade;
//     return 0;
// }

// SUM OF EVEN NO. UPTO N


// int sumEven(int n){
//     int sum =0;
//     for(int i=2;i<=n;i+=2){
//         sum +=i;
//     }
//     return sum;
    // int sum =0;
    // for(int i=1;i<=n;i++){
    //     if(i%2==0){
    //         sum =sum+i;
    //     }   //mod is heavy operation so if avoided avoid it
    // }
    //  return sum;
   
// }


// int main(){
//     int n;
//     cout<<"Enter a number:";
//     cin>>n;
//     int result = sumEven(n);
//     cout<<"Sum of even no. upto n is :"<< result;
//     return 0;
// }



// Write a function to display area of circle

// int areaOfCircle(float r){
//     return 3.14*r*r;
// }

// int main(){
//     float radius;
//     cout<<"Enter radius of circle:";
//     cin>>radius;
//     float area = areaOfCircle(radius);
//     cout<<"Area of circle is :"<< area;
//     return 0;
// }


// Find number is Even or Odd


// string evenOdd(int n){
//     if(n%2==0){
//         return "Even";
//     }
//     else{
//         return "Odd";
//     }
// }

// int main(){
//     int n;
//     cout<<"enter the number";
//     cin>>n;
//     string result= evenOdd(n) ;
//     cout << "The number is :"<< result;
// }

// Find the factorial of a number

// int factorial(int n){
//     int fact =1;
//     for(int i=1;i<=n;i++){
//         fact = fact*i;
//     }
//     return fact;
    
// }

// int main(){
//     int n;
//     cout<<"Enter a number:";
//     cin>>n;
//     int result = factorial(n);
//     cout<<"Factorial of number is :"<< result;
//     return 0;
// }



// Check number is prime or not

// string checkprime(int n){
//     if(n<=1){
//         return "Not Prime";
//     }
//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             return "Not Prime";
//         }  
// }
//  return "Prime";
// }

// int main(){
//     int n;
//     cout<<"Enter a number:";
//     cin>>n;
//     string result = checkprime(n);
//     cout<<"The number is :"<< result;
//     return 0;
// }



// Print all the prime number from 1 to N


int printPrimes(int n){
    if(n<=1){
        cout<<"No prime numbers";
        return 0;
    }
    for(int i=2;i<=n;i++){
        if(n%i==0){
          continue;
    }
    cout<<i<<" ";
}

}

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    printPrimes(n);
    return 0;
}

    