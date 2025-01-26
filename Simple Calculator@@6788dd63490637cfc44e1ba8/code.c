#include <stdio.h>

void main(){
    int a,b;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    switch(c){
        case '+':
        printf("%d",a+b);
        case '-':
        printf("%d",a-b);
        case '*':
        printf("%d",a*b);
        case '/':
        if (b!=0){
        printf("%d",a/b);}
        else{
            printf("error");
        };
        default:
        printf("error");


    }
}