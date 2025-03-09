void bubbleSort(char *arr[] ,int size){
    int swapped;
       for (int i=0;i<size-1;i++){
        swapped = 0;
   
          for (int j = 0; j < size - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {  
                char *temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if (!swapped) break; 
       } 
}

// void printArray(char *arr[], int size) {
//     for (int i = 0; i < size; i++) {
       
//             printf("%s\n", arr[i]);  
//         }
    
// }

void printArray(char arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == NULL) {  // Check for NULL values
            printf("[NULL STRING]\n");
        } else {
            printf("%s\n", arr[i]);  // Print each string
        }
    }
}