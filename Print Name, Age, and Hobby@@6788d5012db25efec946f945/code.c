#include <stdio.h>

void main(){
    char a[100],b[100];
    int c;
    scanf("%s %d\n",&a,&c);
    scanf("%s",&b);
    printf("Name: %s\nAge: %d\nHobby: %s",a,c,b);
}