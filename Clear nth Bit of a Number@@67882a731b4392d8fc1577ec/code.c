#include <stdio.h>

void main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d", a & ~(1<<b));

}