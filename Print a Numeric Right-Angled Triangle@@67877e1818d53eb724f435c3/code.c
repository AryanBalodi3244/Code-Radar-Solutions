#include <stdio.h>

void main(){ 
    int n;

    scanf("%d",&n); 
    for(int i=1;i<=n;i++){ 
    
        int a=1;
        for (int k=0;k<i;k++){ 
          
            printf("%d ",a);
            a++;
            } 
    printf("\n"); } }