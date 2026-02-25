
int main() {
    int arr[] = {1,2,3,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    int lo = 0;
    int hi = n - 1;

    while(lo <= hi){
        int mid = lo + (hi - lo)/2;

        // Check with previous element (only if mid > 0)
        if(mid > 0 && arr[mid] == arr[mid-1]) {
            cout << arr[mid];
            break;
        }

        // Check with next element (only if mid < n-1)
        if(mid < n-1 && arr[mid] == arr[mid+1]) {
            cout << arr[mid];
            break;
        }

        // If value is greater than expected position
        if(arr[mid] > mid + 1)
            hi = mid - 1;
        else
            lo = mid + 1;
    }

    return 0;
}