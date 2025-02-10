#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char a[50];
    char strarr[20][100];
    scanf("%[^\n]",a);
    int i=0;
    while (a != '\0'){
        ch=a[i];
        putchar(toupper(ch));
        i++;
    }
  
    return 0;
    }