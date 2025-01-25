#include <stdio.h>
#include <ctype.h>
#include <string.h>
void main(){
    char a;
    scanf("%c",&a);
    printf("%s" ,isalnum(a)? "Digit":(isalpha(a) ? (strchr("aeiouAEIOU",a)? "Vowel" : "Consonant" ):"Special Character"));
}