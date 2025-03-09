void selectionSort(int arr[], int n){
   for (int step= 0 ; step<n-1 ;step++){
    int key =arr[step];
    int j= step-1;
    while (j>=0 && key <arr[step]){
        arr[j+1] = arr[j];
        --j;

    }
    arr[j+1] =key;
   }
}

void printArray(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
}