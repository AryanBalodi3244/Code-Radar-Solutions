#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char a[20];
    scanf("%s",a);
    int i=0,count=0;
    while(a[i]!='\0'){
    char ch = tolower(a[i]);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        count++;
    }
    i++;}
    printf("%d",count);
    }