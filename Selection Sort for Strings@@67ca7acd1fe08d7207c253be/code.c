#include <string.h>
void selectionSort(char arr[][100], int n){
    for (int step=0;step<n-1;step++){
        int min_idx =step;
        for (int i =step+1 ; i<n ; i++){
            if (arr[i]<arr[min_idx]){
                min_idx = i;
            }
        }
        if (min_idx != step) {
  
                char temp[100];
                strcpy(temp, arr[j]);  
                strcpy(arr[j], arr[j + 1]);  
                strcpy(arr[j + 1], temp);
            }    }
}


void printArray(char arr[][100],int size){
        for (int i=0;i<size;i++){
        printf("%s\n",arr[i]);
    }

}


