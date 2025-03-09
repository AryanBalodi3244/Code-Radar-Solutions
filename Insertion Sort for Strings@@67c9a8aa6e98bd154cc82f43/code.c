void insertionSort(char arr[][100], int n){
    char key[100];
   for (int step= 0 ; step<n ;step++){
    key =arr[step];
    int j= step-1;
    while (j>=0 && strcmp( key  ,arr[j])>0 ){
       strcpy( arr[j+1] , arr[j]);
        --j;

    }
    arr[j+1] =key;
   }
}

void printArray(char arr[][100], int n) {
  for (int i = 0; i < n; i++) {
    printf("%s\n", arr[i]);
  }
}