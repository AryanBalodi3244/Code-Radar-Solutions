int findKthMissing (int arr[] ,int n , int k){
    int t=k;
    for (int i=1 ;  ;i++){
           int found = 0;  
        
        for (int j = 0; j < n; j++) {  
            if (arr[j] == i) {
                found = 1;  
                break;
            }
        }
       if (!found) {  
            k--;  
        if (k == 0) return i;  
        }

        }
    

}