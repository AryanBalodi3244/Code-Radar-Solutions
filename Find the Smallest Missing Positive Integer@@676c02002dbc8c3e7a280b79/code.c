#include <stdio.h>

void main(){ 
    int size;
    scanf("%d",&size);
        int *arr = (int *)malloc(size * sizeof(int));
    int check;
    for (int i=0;i<size){scanf("%d",&check) ;
    if  (check>=0){
        arr[i++]=check;
    }}
        for (int i=0;i<size;i++){ 
            for (int j=0;j<size-1;j++){ 
                if (arr[j]>arr[j+1]){ 
                    arr[j]=arr[j]^arr[j+1]; 
                    arr[j+1]=arr[j]^arr[j+1]; 
                    arr[j]=arr[j]^arr[j+1]; } }} 

        int i=0;
        while (arr[i]!='\0'){
            if (arr[i+1]!=arr[i]+1){
                printf("%d",arr[i]+1);
                break;
            }
            i++;
        }

    } 