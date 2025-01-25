#include <stdio.h>
void main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%s",(a-b)==0 ? "No Profit No Loss" : (a-b)>0? "Profit" :"Loss");

}