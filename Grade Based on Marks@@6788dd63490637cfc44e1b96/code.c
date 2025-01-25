#include <stdio.h>

void main(){
    int a;
    scanf("%d",&a);
    printf("%c", a>=90? "A" : a>=80 ? "B" : a>=70 ? "C" : a>=60 ? "D" :"F");
}