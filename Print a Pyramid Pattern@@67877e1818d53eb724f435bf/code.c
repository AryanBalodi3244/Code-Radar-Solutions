#include <stdio.h>

void main(){
    int a;
    scanf("%d",&a);
    for (int i=1;i<(a+1);i++){
        for (int j=0;j<(2*a - 1);j++){
            if (j>=a-(i-1) && j<= a-(i+1)){
                printf("*");

            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}