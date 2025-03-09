#include <string.h>
void selectionSort(char arr[][100], int n){
    for (int step=0;step<n-1;step++){
        int min_idx =step;
        for (int i =step+1 ; i<n ; i++){
            if (strcmp(arr[i],arr[min_idx])<0){
                min_idx = i;
            }
        }
        if (min_idx != step) {
  
                char temp[100];
                strcpy(temp, arr[min_idx]);  
                strcpy(arr[min_idx], arr[step]);  
                strcpy(arr[step], temp);
            }    }
}


void printArray(char arr[][100],int size){
        for (int i=0;i<size;i++){
        printf("%s\n",arr[i]);
    }

}


