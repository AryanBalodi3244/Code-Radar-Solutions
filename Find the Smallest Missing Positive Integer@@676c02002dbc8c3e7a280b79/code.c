#include <stdio.h>
#include <stdlib.h>
void main(){ 
    int size;
    scanf("%d",&size);
    int arr[size];
    int check,count=0;
    for (int i=0;i<size;i++){
        scanf("%d",&check);
        if  (check>=0){
            arr[count++]=check;
    }}
      int n = count;
        for (int i=0;i<n;i++){ 
            for (int j=0;j<n-1;j++){ 
                if (arr[j]>arr[j+1]){ 
                    arr[j]=arr[j]^arr[j+1]; 
                    arr[j+1]=arr[j]^arr[j+1]; 
                    arr[j]=arr[j]^arr[j+1]; } }} 

    for (int i=1;i<size ; i++){

        if (arr[i] == arr[i-1]+1){
            printf("%d" , arr[i-1]);
            break;
        }
    }

    } 