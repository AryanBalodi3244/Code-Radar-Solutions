int findKthMissing (int arr[] ,int n , int k){
    int t=k;
    for (int i=0 ; i<n ;i++){
        if (arr[i+1] != arr[i]+1){
            if (k!=1){
                k--;
                continue;
            }
            else{
                return arr[i] +1;
            }
        }
    }
    return arr[n-1]+t;

}