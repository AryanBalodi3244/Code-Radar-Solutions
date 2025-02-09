#include <stdio.h>

void main(){
    int a;
    scanf("%d",&a);
    int count=1;
    for(int i=1;i<=a;i++){
        for (int j=1;j<=i;j++){
            printf("%d ",count++);
        }
        printf("\n");
    }
}