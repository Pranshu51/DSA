//INFIX EXPRESSION
//human readable& solve
//

#include <iostream>
#include <stack>
using namespace std;


int prio(char ch){
if(ch=='-' || ch=='+') return 1;
else return 2;
}

int solve(int val1,int val2, int ch){
    if(ch=='+') return val1+val2;
    else if(ch=='-') return val1-val2;
    else if(ch=='*') return val1*val2;
    else if(ch=='/') return val1/val2;
}
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



int main(){
    string s="(2+6)*4/8-3";
    stack<int> val;
    stack<int> op;

    for(int i=0;i<s.length();i++){
        if(s[i]>=48 && s[i]<=58){//digit=(0-9)
            val.push(s[i]-48);
        }
        else {//if it's an operator
            if(op.size()==0) op.push(s[i]);
            else if (s[i]=='(') op.push(s[i]);
            else if(op.top()=='(') op.push(s[i]);
            else if(s[i]==')'){
                while(op.top()!='('){
                    char ch = op.top();
                op.pop();
                int val2= val.top();
                val.pop();
                int val1= val.top();
                val.pop();
                int ans= solve(val1,val2,ch);
                val.push(ans);
                }
                if(op.size()>0) op.pop();
            }
            else if(prio(s[i]) > prio(op.top())) op.push(s[i]);

            else{//prio(s[i]) <= prio(op.top())
                while(op.size()>0 && prio(s[i]) <= prio(op.top())){
                char ch = op.top();
                op.pop();
                int val2= val.top();
                val.pop();
                int val1= val.top();
                val.pop();
                int ans= solve(val1,val2,ch);
                val.push(ans);
                }
                op.push(s[i]);  
            }
        }

    }
    //the opertaor stack can have value
    //so we need make it empty
    while(op.size()>0){
        char ch = op.top();
        op.pop();
        int val2= val.top();
        val.pop();
        int val1= val.top();
        val.pop();
        int ans= solve(val1,val2,ch);
        val.push(ans);
    }
    cout<<"Result: " <<val.top();
    cout<<endl;
    cout<<(2+6)*4/8-3;

}