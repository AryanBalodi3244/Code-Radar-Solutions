#include <stdio.h>

void main(){ 
    int n;
    scanf("%d",&n); 
    for(int i=n;i>0;i--){ 
        int a=1;
        for (int k=i;k>0;k--){ 
            printf("%d ",a);a++; }
     printf("\n"); 
     
     } }