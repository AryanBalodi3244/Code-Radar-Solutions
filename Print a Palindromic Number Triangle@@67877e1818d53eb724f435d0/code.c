#include <stdio.h>

void main(){
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        for (int j=i;j<a;j++){
            printf(" ");
        }
        for (int j=1;j<=i;j++){
            printf("%d",j);
        }
         for (int j=i-1;j>=1;j--){
            printf("%d",j);
        }
        printf("\n");
    }
}