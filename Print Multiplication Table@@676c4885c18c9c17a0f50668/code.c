#include <stdio.h>

void main(){
    int a;
    scanf("%d",&a);
    for (int i=1;i<(11);i++){
        printf("%d x %d = %d\n",a,i,a*i);
    }
}