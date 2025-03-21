#include <stdio.h>
#include <stdlib.h>
int main(){ 
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

if (count ==0 ){ printf("%d", 1) ;return 0;}
int k=1;
    for (int i=0;i<size ; i++){

    if (arr[i] != k){
            printf("%d" , k);
            return 0;        
}
k++;
    }
return 0;
    } 