#include <stdio.h>

void main(){
    int a,b;
    char c;
    scanf("%d %d %c\n",&a,&b,&c);
    switch(c){
        case '+':
        printf("%d",a+b);
        case '-':
        printf("%d",a-b);
        case '*':
        printf("%d",a*b);
        case '/':
        printf("%d",a/b);
        default:
        printf("error");


    }
}