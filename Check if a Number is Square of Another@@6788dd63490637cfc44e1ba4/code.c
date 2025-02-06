#include <math.h>
#include <stdio.h>


void main(){
int a,b;
scanf("%d %d",&a,&b);
double n=pow(a ,1/2);
printf("%s", (int)n==b ?"Yes":"No");

}