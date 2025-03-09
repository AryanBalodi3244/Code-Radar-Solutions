int binarySearch(int arr[], int n , int target){
    int l = 0;
    int r=n-1;

    while (l<r){
        int mid = (l+r)/2;
        
      if (arr[mid]!=target){
          if (arr[mid] > target){
            r= mid-1;
        }
        else {
            l= mid+1;
        }
      }
    else{
            return mid;
        }
    }
    return -1;

}