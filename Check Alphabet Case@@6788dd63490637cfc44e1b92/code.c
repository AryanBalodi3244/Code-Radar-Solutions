#include <stdio.h>

#include <ctype.h>

void main(){
    char a;
    scanf("%c",&a);
    printf("%s",isupper(a)?"True":"False");
}