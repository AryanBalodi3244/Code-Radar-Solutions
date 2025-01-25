#include <stdio.h>
#include <ctype.h>
void main(){
    char a;
    scanf("%c",&a);
    printf("%s",isdigit(a)?"Digit":(isalpha(a)? (strchr("aeiouAEIOU",a)?"Vowel":"Consonant"):"Special Character"));
    }