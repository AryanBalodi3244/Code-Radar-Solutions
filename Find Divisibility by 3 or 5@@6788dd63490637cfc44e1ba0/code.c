#include <stdio.h>

void main(){int a,b;scanf("%d",&a);printf("%s",a%3==0 && a%5==0?"Divisible by Both":a%3==0 ?"Divisible by 3":a%5==0 ?"Divisible by 5":"Not Divisible");}