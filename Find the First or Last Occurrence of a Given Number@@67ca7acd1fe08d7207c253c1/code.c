int findOccurrence(int arr[] , int n , int target , char mode){
    int k = mode=='F' ? 0:1;

    for (int i = k==0 ? 0:n; i< (k==0 ? n :0);k==0 ? i++ : i--){
        if  (arr[i] == target){
            return i ;
        }
    }
    return -1;

}