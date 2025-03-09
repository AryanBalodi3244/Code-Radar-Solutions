void selectionSort(int arr[], int n){
    for (int step=0;step<n-1;step++){
        int min_idx =step;
        for (int i =step+1 ; i<n ; i++){
            if (arr[i]<arr[min_idx]){
                min_idx = i;
            }
        }
        arr[min_idx] ^= arr[step] ^= arr[min_idx] ^= arr[step];
    }
}

void printArray(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}