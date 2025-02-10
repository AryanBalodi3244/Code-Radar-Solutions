#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char a[50];
    scanf("%s",a);
    int i=0;
    while (a[i]){
        ch=a[i];
        printf("%c",toupper(ch));
        i++;
    }
  
    return 0;
    }