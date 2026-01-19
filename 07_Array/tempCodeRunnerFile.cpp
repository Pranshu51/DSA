int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int sizea=9;
    for(int i=0;i<sizea;i++){
        for(int j=i+1;j<sizea;j++){
            if(arr[i]+arr[j]==9){
                cout<<"("<<arr[i]<<","<<arr[j]<<") ";
            }
        }
    }
}