#include <stdio.h>

void main(){
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        int k=1;
        for (int j=0;j<i;j++){
            printf("%d",k);
            k= 0?1:0;
        }
    }
}