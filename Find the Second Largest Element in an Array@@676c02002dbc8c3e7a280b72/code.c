#include <stdio.h>

void main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for (int i=0;i<size;i++){scanf("%d",&arr[i]);}
    int l=arr[0];
    int sl=arr[0];
     for (int i=0;i<size;i++){  
         if (arr[i]>l){
            sl=l;
            l=arr[i];
            
         }
         }
         prinf("%d",sl);
}