#include <stdio.h>

void main(){
    int a;
    scanf("%d",&a);
    for(int i=0;i<a+1;i++){
        for (int j=i;j>0;j--){
            printf("* ");
        }
        printf("\n");
    }
}