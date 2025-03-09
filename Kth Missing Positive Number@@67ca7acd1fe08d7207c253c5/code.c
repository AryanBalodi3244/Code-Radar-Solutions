int findKthMissing (int arr[] ,int n , int k){
    for (int i=0 ; i<n ;i++){
        if (arr[i+1] != arr[i]+1){
            if (k!=0){
                k--;
                continue;
            }
            else{
                return arr[i] +1;
            }
        }
    }

}