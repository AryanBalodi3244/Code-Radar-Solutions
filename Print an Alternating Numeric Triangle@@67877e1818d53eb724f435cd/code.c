#include <stdio.h>

void main(){
    int a;
    int k=0;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        int k=1?0:1;
        for (int j=1;j<=i;j++){
            printf("%d ",k);
            k= 1?0:1;
        }
        printf("\n");
        
    }
}