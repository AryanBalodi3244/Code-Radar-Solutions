int findKthMissing (int arr[] ,int n , int k){
    int t=k;
    for (int i=1 ; i<n ;i++){
        if (i != arr[i-1]){
            if (k!=1){
                k--;
                continue;
            }
            else{
                return i;
            }
        }
    }

}