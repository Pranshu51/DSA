void printSubset(string s,int index,string ans){
    if(index==s.size()) { //orif(index>=s.size())
        cout<<ans<< " ";
        return;
     }
     
     printSubset(s,index+1,ans+s[index]);
     printSubset(s,index+1,ans);
}

int main(){
    string s="abc";
    string ans="";
    printSubset(s,0,ans);
}