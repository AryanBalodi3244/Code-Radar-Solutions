#include <stdio.h>

void main(){
    char m[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int a;
    scanf("%d",&a);
    if (a<=12 && a>=1){    printf("%d",m[a-1]);}
    else{printf("Invalid month");}
}