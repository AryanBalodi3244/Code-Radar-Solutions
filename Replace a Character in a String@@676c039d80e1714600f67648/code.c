#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char a[20],b,c;
    scanf("%s",a);
    scanf("%c",b);
    scanf("%c",c);
    int i=0;
    while (a[i]!='\0'){
        if (a[i]==b){
            a[i]=c;
        }
        i++;
    }
   
    printf("%s",a);
    }