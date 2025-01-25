#include <stdio.h>

#include <ctype.h>

void main(){
    char a;
    scanf("%c",&a);
    printf("%s",isalpha(a)?(isupper(a)?"Uppercase":"Lowercase"):"Not an alphabet");
}