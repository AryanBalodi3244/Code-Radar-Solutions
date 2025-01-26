#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    for (int i=1;i<(a+1);i++){
        if(i==a){
            printf("%d",i);
        }
        printf("%d ",i);
    }
    return 0;
}