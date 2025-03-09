void insertionSort(char arr[], int n){
   for (int step= 0 ; step<n ;step++){
    int key =arr[step];
    int j= step-1;
    while (j>=0 && key <arr[j]){
        arr[j+1] = arr[j];
        --j;

    }
    arr[j+1] =key;
   }
}

void printArray(char arr[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%c ", arr[i]);
  }
}