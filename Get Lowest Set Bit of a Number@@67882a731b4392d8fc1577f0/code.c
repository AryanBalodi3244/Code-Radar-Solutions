#include <stdio.h>

void main(){
    int a,b;
    scanf("%d",&a);
    int lsb= a&1;
    printf("%d", lsb-1);

}