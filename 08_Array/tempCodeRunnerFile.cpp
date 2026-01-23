int main(){
    vector<int> arr={1,2,3,4,5};
    int firstElement=arr[0];
    for(int i=1;i<arr.size();i++){
        arr[i-1]=arr[i];
    }
    arr[arr.size()-1]=firstElement;
    for(auto val:arr){
        cout<<val<<" ";
    }
}