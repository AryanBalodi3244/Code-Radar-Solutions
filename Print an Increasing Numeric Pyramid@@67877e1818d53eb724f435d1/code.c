#include <stdio.h>

void main(){
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        for (int j=0;j<((2*n)-1);j++){
            int a=1;
            if (j>=n-(i-n) && j<=n+(i-n)){
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