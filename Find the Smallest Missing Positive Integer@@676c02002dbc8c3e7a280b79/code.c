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
        for (int i=0;i<sizeof(arr);i++){ 
            for (int j=0;j<sizeof(arr)-1;j++){ 
                if (arr[j]>arr[j+1]){ 
                    arr[j]=arr[j]^arr[j+1]; 
                    arr[j+1]=arr[j]^arr[j+1]; 
                    arr[j]=arr[j]^arr[j+1]; } }} 

        int i=0;
        // while (arr[i]!='\0'){
        //     if (arr[i+1]!=arr[i]+1){
        //         printf("%d",arr[i]+1);
        //         break;
        //     }
        //     i++;
        //     if(i==size-1){printf("%d",1);}
        // }
        for (i=0;i<sizeof(arr);i++){
            printf("%d ",arr[i]);
        }

    } 