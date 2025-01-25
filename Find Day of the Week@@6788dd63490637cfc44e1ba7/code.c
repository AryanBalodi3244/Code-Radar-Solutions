#include <stdio.h>

void main(){
    char days[7][10]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    int a;
    scanf("%d",&a);
    printf("%s",days[a]);
}