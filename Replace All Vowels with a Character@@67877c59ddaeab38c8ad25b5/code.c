#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char a[20],b;
    scanf("%s",a);
    scanf(" %c",&b);

    int i=0;
    while (a[i]!='\0'){
    
    char ch = tolower(a[i]);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        a[i]="*"
    }
    i++;}
      
    
    printf("%s",a);
    }