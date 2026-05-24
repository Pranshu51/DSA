//INFIX EXPRESSION
//human readable& solve
//

#include <iostream>
#include <stack>
using namespace std;


// int prio(char ch){
// if(ch=='-' || ch=='+') return 1;
// else return 2;
// }

// int solve(int val1,int val2, int ch){
//     if(ch=='+') return val1+val2;
//     else if(ch=='-') return val1-val2;
//     else if(ch=='*') return val1*val2;
//     else if(ch=='/') return val1/val2;
// }
//
//INFIX CODE
//without brackets
// int main(){
//     string s="2+6*4/8-3";
//     stack<int> val;
//     stack<int> op;

//     for(int i=0;i<s.length();i++){
//         if(s[i]>=48 && s[i]<=58){//digit=(0-9)
//             val.push(s[i]-48);
//         }
//         else{//if it's an operator
//             if(op.size()==0 || prio(s[i]) > prio(op.top())) op.push(s[i]);
//             else{//prio(s[i]) <= prio(op.top())
//                 while(op.size()>0 && prio(s[i]) <= prio(op.top())){
//                 char ch = op.top();
//                 op.pop();
//                 int val2= val.top();
//                 val.pop();
//                 int val1= val.top();
//                 val.pop();
//                 int ans= solve(val1,val2,ch);
//                 val.push(ans);
//                 }
//                 op.push(s[i]);  
//             }
//         }
//     }
//     //the opertaor stack can have value
//     //so we need make it empty
//     while(op.size()>0){
//         char ch = op.top();
//         op.pop();
//         int val2= val.top();
//         val.pop();
//         int val1= val.top();
//         val.pop();
//         int ans= solve(val1,val2,ch);
//         val.push(ans);
//     }
//     cout<<"Result: " <<val.top();

// }



// with brackets()


// int main(){
//     string s="(2+6)*4/8-3";
//     stack<int> val;
//     stack<int> op;

//     for(int i=0;i<s.length();i++){
//         if(s[i]>=48 && s[i]<=58){//digit=(0-9)
//             val.push(s[i]-48);
//         }
//         else {//if it's an operator
//             if(op.size()==0) op.push(s[i]);
//             else if (s[i]=='(') op.push(s[i]);
//             else if(op.top()=='(') op.push(s[i]);
//             else if(s[i]==')'){
//                 while(op.top()!='('){
//                     char ch = op.top();
//                 op.pop();
//                 int val2= val.top();
//                 val.pop();
//                 int val1= val.top();
//                 val.pop();
//                 int ans= solve(val1,val2,ch);
//                 val.push(ans);
//                 }
//                 if(op.size()>0) op.pop();
//             }
//             else if(prio(s[i]) > prio(op.top())) op.push(s[i]);

//             else{//prio(s[i]) <= prio(op.top())
//                 while(op.size()>0 && prio(s[i]) <= prio(op.top())){
//                 char ch = op.top();
//                 op.pop();
//                 int val2= val.top();
//                 val.pop();
//                 int val1= val.top();
//                 val.pop();
//                 int ans= solve(val1,val2,ch);
//                 val.push(ans);
//                 }
//                 op.push(s[i]);  
//             }
//         }

//     }
//     //the opertaor stack can have value
//     //so we need make it empty
//     while(op.size()>0){
//         char ch = op.top();
//         op.pop();
//         int val2= val.top();
//         val.pop();
//         int val1= val.top();
//         val.pop();
//         int ans= solve(val1,val2,ch);
//         val.push(ans);
//     }
//     cout<<"Result: " <<val.top();
//     cout<<endl;
//     cout<<(2+6)*4/8-3;

// }




//PREFIX EXPRESSION

//INFIX TO PREFIX


// int prio(char ch){
// if(ch=='-' || ch=='+') return 1;
// else return 2;
// }

// string solve(string val1,string val2, char ch){
//     string s="";
//     s.push_back(ch);
//     s+=val1;
//     s+=val2;
//     return s;
// }

// int main(){
//     string s="(2+6)*4/8-3";
//     stack<string> val;
//     stack<char> op;

//     for(int i=0;i<s.length();i++){
//         if(s[i]>=48 && s[i]<=58){//digit=(0-9)
//             val.push(to_string(s[i]-48));
//         }
//         else {//if it's an operator
//             if(op.size()==0) op.push(s[i]);
//             else if (s[i]=='(') op.push(s[i]);
//             else if(op.top()=='(') op.push(s[i]);
//             else if(s[i]==')'){
//                 while(op.top()!='('){
//                 char ch = op.top();
//                 op.pop();
//                 string val2= val.top();
//                 val.pop();
//                 string val1= val.top();
//                 val.pop();
//                 string ans= solve(val1,val2,ch);
//                 val.push(ans);
//                 }
//                 if(op.size()>0) op.pop();
//             }
//             else if(prio(s[i]) > prio(op.top())) op.push(s[i]);

//             else{//prio(s[i]) <= prio(op.top())
//                 while(op.size()>0 && prio(s[i]) <= prio(op.top())){
//                 char ch = op.top();
//                 op.pop();
//                 string val2= val.top();
//                 val.pop();
//                 string val1= val.top();
//                 val.pop();
//                 string ans= solve(val1,val2,ch);
//                 val.push(ans);
//                 }
//                 op.push(s[i]);  
//             }
//         }

//     }
//     //the opertaor stack can have value
//     //so we need make it empty
//     while(op.size()>0){
//         char ch = op.top();
//         op.pop();
//         string val2= val.top();
//         val.pop();
//         string val1= val.top();
//         val.pop();
//         string ans= solve(val1,val2,ch);
//         val.push(ans);
//     }
//     cout<<"Result: " <<val.top();
//     cout<<endl;

// }





//INFIX TO POSTFIX





// int prio(char ch){
// if(ch=='-' || ch=='+') return 1;
// else return 2;
// }

// string solve(string val1,string val2, char ch){
//     string s="";
//     s+=val1;
//     s+=val2;
//     s.push_back(ch);
//     return s;
// }

// int main(){
//     string s="(2+6)*4/8-3";
//     stack<string> val;
//     stack<char> op;

//     for(int i=0;i<s.length();i++){
//         if(s[i]>=48 && s[i]<=58){//digit=(0-9)
//             val.push(to_string(s[i]-48));
//         }
//         else {//if it's an operator
//             if(op.size()==0) op.push(s[i]);
//             else if (s[i]=='(') op.push(s[i]);
//             else if(op.top()=='(') op.push(s[i]);
//             else if(s[i]==')'){
//                 while(op.top()!='('){
//                 char ch = op.top();
//                 op.pop();
//                 string val2= val.top();
//                 val.pop();
//                 string val1= val.top();
//                 val.pop();
//                 string ans= solve(val1,val2,ch);
//                 val.push(ans);
//                 }
//                 if(op.size()>0) op.pop();
//             }
//             else if(prio(s[i]) > prio(op.top())) op.push(s[i]);

//             else{//prio(s[i]) <= prio(op.top())
//                 while(op.size()>0 && prio(s[i]) <= prio(op.top())){
//                 char ch = op.top();
//                 op.pop();
//                 string val2= val.top();
//                 val.pop();
//                 string val1= val.top();
//                 val.pop();
//                 string ans= solve(val1,val2,ch);
//                 val.push(ans);
//                 }
//                 op.push(s[i]);  
//             }
//         }

//     }
//     //the opertaor stack can have value
//     //so we need make it empty
//     while(op.size()>0){
//         char ch = op.top();
//         op.pop();
//         string val2= val.top();
//         val.pop();
//         string val1= val.top();
//         val.pop();
//         string ans= solve(val1,val2,ch);
//         val.push(ans);
//     }
//     cout<<"Result: " <<val.top();
//     cout<<endl;

// }






// POSTFIX EVALUATION



// int solve(int val1,int val2, int ch){
//     if(ch=='+') return val1+val2;
//     else if(ch=='-') return val1-val2;
//     else if(ch=='*') return val1*val2;
//     else if(ch=='/') return val1/val2;
// }

// int main(){
//     string s="79+4*8/3-";
//     stack<int> val;

//     for(int i=0;i<s.length();i++){
//         if(s[i]>=48 && s[i]<=58){//digit=(0-9)
//             val.push(s[i]-48);
//         }
//         else {//if it's an operator
//             //kaam
//                 int val2= val.top();
//                 val.pop();
//                 int val1= val.top();
//                 val.pop();
//                 int ans= solve(val1,val2,s[i]);
//                 val.push(ans);
//             }
//         }
//         cout<<"Result: " <<val.top();
//     }
//     //the opertaor stack can have value
//     //so we need make it empty
   
  



//POSTFIX TO INFIX


// string solve(string val1,string val2, int ch){
//     string s="";
//     s+=val1;
//     s.push_back(ch);
//     s+=val2;
//     return s;
// }

// int main(){
//     string s="79+4*8/3-";
//     stack<string> val;

//     for(int i=0;i<s.length();i++){
//         if(s[i]>=48 && s[i]<=58){//digit=(0-9)
//             val.push(to_string(s[i]-48));
//         }
//         else {//if it's an operator
//             //kaam
//                 string val2= val.top();
//                 val.pop();
//                 string val1= val.top();
//                 val.pop();
//                 string ans= solve(val1,val2,s[i]);
//                 val.push(ans);
//             }
//         }
//         cout<<"Result: " <<val.top();
//     }
   
  

// POSTFIX TO PREFIX




// string solve(string val1,string val2, int ch){
//     string s="";
//     s.push_back(ch);
//     s+=val1;
//     s+=val2;
//     return s;
// }

// int main(){
//     string s="79+4*8/3-";
//     stack<string> val;

//     for(int i=0;i<s.length();i++){
//         if(s[i]>=48 && s[i]<=58){//digit=(0-9)
//             val.push(to_string(s[i]-48));
//         }
//         else {//if it's an operator
//             //kaam
//                 string val2= val.top();
//                 val.pop();
//                 string val1= val.top();
//                 val.pop();
//                 string ans= solve(val1,val2,s[i]);
//                 val.push(ans);
//             }
//         }
//         cout<<"Result: " <<val.top();
//     }



// PREFIX EVALUATION



// int solve(int val1,int val2, int ch){
//     if(ch=='+') return val1+val2;
//     else if(ch=='-') return val1-val2;
//     else if(ch=='*') return val1*val2;
//     else if(ch=='/') return val1/val2;
// }

// int main(){
//     string s="-/*+79483";
//     stack<int> val;

//     for(int i=s.length()-1;i>=0;i--){//reverse
//         if(s[i]>=48 && s[i]<=58){//digit=(0-9)
//             val.push(s[i]-48);
//         }
//         else {//if it's an operator
//             //kaam
//                 int val1= val.top();
//                 val.pop();
//                 int val2= val.top();
//                 val.pop();
//                 int ans= solve(val1,val2,s[i]);
//                 val.push(ans);
//             }
//         }
//         cout<<"Result: " <<val.top();
//     }
    
  

//PREFIX TO INFIX

#include <iostream>
#include <stack>
#include <string>
#include <algorithm>

using namespace std;

// Helper function to build the Infix string
string solve(string val1, string val2, char ch) {
    string s = "";
    s.push_back('('); // Open bracket for precedence
    s += val1;
    s.push_back(ch);   // Operator in the middle
    s += val2;
    s.push_back(')'); // Close bracket
    return s;
}

int main() {
    // Prefix expression: "-+79/*483" 
    // (Equivalent to the infix: ((7+9)-((4*8)/3)))
    string s = "-+79/*483"; 
    stack<string> val;

    // Prefix requires scanning from RIGHT to LEFT
    for (int i = s.length() - 1; i >= 0; i--) {
        
        // Check if character is a digit (0-9)
        if (s[i] >= '0' && s[i] <= '9') {
            // Convert char to string and push to stack
            string temp = "";
            temp.push_back(s[i]);
            val.push(temp);
        } 
        // If it's an operator
        else {
            // In prefix-to-infix, first pop is left operand, second is right operand
            string val1 = val.top();
            val.pop();
            string val2 = val.top();
            val.pop();
            
            // Combine them into an infix string
            string ans = solve(val1, val2, s[i]);
            val.push(ans);
        }
    }
    
    // The final remaining element in the stack is the complete Infix expression
    cout << "Infix Result: " << val.top() << endl;

    return 0;
}
//PREFIX TO POSTFIX



#include <iostream>
#include <stack>
#include <string>

using namespace std;

// Helper function to build the Postfix string
string solve(string val1, string val2, char ch) {
    string s = "";
    s += val1;        // First operand
    s += val2;        // Second operand
    s.push_back(ch);  // Operator goes at the end
    return s;
}

int main() {
    // Prefix expression: "-+79/*483"
    // (Equivalent postfix: "79+48*3/-")
    string s = "-+79/*483"; 
    stack<string> val;

    // Prefix requires scanning from RIGHT to LEFT
    for (int i = s.length() - 1; i >= 0; i--) {
        
        // Check if character is a digit (0-9)
        if (s[i] >= '0' && s[i] <= '9') {
            string temp = "";
            temp.push_back(s[i]);
            val.push(temp);
        } 
        // If it's an operator
        else {
            // First pop is left operand, second pop is right operand
            string val1 = val.top();
            val.pop();
            string val2 = val.top();
            val.pop();
            
            // Combine them into a postfix string
            string ans = solve(val1, val2, s[i]);
            val.push(ans);
        }
    }
    
    // The final remaining element in the stack is the complete Postfix expression
    cout << "Postfix Result: " << val.top() << endl;

    return 0;
}