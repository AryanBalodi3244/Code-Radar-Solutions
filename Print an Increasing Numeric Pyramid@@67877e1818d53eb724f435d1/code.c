#include <stdio.h>

void main(){
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for (int j=1;j<=((2*n)-1);j++){
            int a=1;
            if (j>=n-(i-1) && j<=n+(i-1)){
                printf("%d",a);
                a++;

            }
            else{
                printf(" ");
            }
            printf("\n");
        }
    }
}