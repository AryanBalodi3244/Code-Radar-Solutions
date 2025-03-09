int binarySearch(int arr[], int n , int target){
    int l = 0;
    int r=n-1;

    while (l<r){
        mid = (l+r)/2;
        if (arr[mid] > target){
            r= mid-1;
        }
        else if (arr[mid] < target){
            l= mid;
        }
        else{
            return mid;
        }
    }
    return -1;

}