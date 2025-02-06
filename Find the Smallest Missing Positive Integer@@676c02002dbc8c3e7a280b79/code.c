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

        int missing=1;
for(int i=0;i<count;i++)
        {
            if (arr[i]==missing){missing++;}
            else if(arr[i]>missing){break;}
           
        }
        printf("%d",missing);
        // for (i=0;i<n;i++){
        //     printf("%d ",arr[i]);
        // }

    } 