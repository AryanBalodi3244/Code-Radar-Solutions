#include <stdio.h>

void main(){ 
    int n;

    scanf("%d",&n); 
    for(int i=1;i<=n;i++){ 
        for (int j=0;j<(n-i);j++){ 
            printf(" "); }  
        int a=1;
        for (int k=0;k<i;k++){ 
          
            printf("%d",a);
            a++;
            } 
    printf("\n"); } }