#include <stdio.h>

void main(){
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        for (j=0;j<((2*n)-1);j++){

            if (j>=n-(i-n) && j<=n+(i-n)){
                
                int a=1;
                printf("%d",a);
                a++;

            }
            printf("\n");
        }
    }
}