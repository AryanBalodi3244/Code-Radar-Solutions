void insertionSort(char arr[], int n){
    for (int step=0;step<n-1;step++){
        int min_idx =step;
        for (int i =step+1 ; i<n ; i++){
            if (arr[i]<arr[min_idx]){
                min_idx = i;
            }
        }
        if (min_idx != step) {
        arr[min_idx] ^= arr[step] ^= arr[min_idx] ^= arr[step];
    }    
}
}

void printArray(char arr[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%c ", arr[i]);
  }
}