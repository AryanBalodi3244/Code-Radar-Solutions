#include <stdio.h>
#include <stdlib.h>
void main(){ 
    int size;
    scanf("%d",&size);
    int arr[size];
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);

    }
      int mindiff=99999;
      int elm1 ,elm2;
        for (int i=0;i<size;i++){ 
            for (int j=i+1;j<size;j++){ 
                if (arr[j]-arr[i]<mindiff || arr[i]=arr[j]< mindiff){
                    mindiff=arr[j]-arr[i];
                    elm1 = arr[i]>arr[j]?arr[j]:arr[i];
                    elm2 = arr[i]>arr[j]?arr[i]:arr[j];
                }
               }} 
                    
               printf("%d %d",elm1,elm2) ;    
                    }