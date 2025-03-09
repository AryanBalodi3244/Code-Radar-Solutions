void bubbleSort(char arr[] ,int size){
    int swapped;
       for (int i=0;i<size;i++){
        swapped = 0;
         for (int j=0;j<size-i-1;j++){
       
            if (arr[j][0] >arr[j + 1][0]) {
                
                char temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;  
            }
        }
        if (!swapped) break; 
       } 
}

