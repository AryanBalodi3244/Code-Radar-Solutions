#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char a[20],b[20];
    scanf("%[^\n]",a);
    scanf("%s",b);
    printf("%s",strcat(a,b));
    }