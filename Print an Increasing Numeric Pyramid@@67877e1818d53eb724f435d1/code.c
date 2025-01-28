#include <stdio.h>

void main(){
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){ int a=1;
        for (int j=1;j<=((2*n)-1);j++){
           
            if (j>=n-(i-1) && j<=n+(i-1)){
                printf("%d ",a);
                a++;

            }
            else{
                printf(" ");
            }
           
        } 
        printf("\n");
    }
}