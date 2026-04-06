
int count =0;

int inversion(vector<int> &a,vector<int> &b){
    int i=0;
    int j=0;
    int cnt=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<=b[j]){
           cnt+=(a.size()-i);
            j++;
        }else{
            i++;        }
    }
    return cnt;
}


void merge(vector<int> &a,vector<int> &b,vector<int> &v){
    int i=0;
    int j=0;
    int k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<=b[j]){
            v[k++]=a[i++];
        }else{
            v[k++]=b[j++];
        }
        if(i==a.size()){
            while(j<b.size()){
                v[k++]=b[j++];
            }
        }
        if(j==b.size()){
            while(i<a.size()){
                v[k++]=a[i++];
            }
    }
}
}

void mergeSort(vector<int> &v){
 int n=v.size();
 if(n==1) return;
 int left=n/2;
 int right=n-n/2;
 vector<int> a(left);
 vector<int> b(right);
 for(int i=0;i<left;i++){
    a[i]=v[i];
 }
 for(int i=0;i<right;i++){
    b[i]=v[left+i];
 }
    mergeSort(a);
    mergeSort(b);
    count+=inversion(a,b);
    merge(a,b,v);
}



int main(){
    int arr[]={5,1,3,0,4,2,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }    cout<<endl;
    mergeSort(v);
        cout <<"Inversion Count: "<<count<<endl;

    
}
