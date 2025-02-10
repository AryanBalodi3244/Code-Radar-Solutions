#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char a[20],b;
    scanf("%s",a);
    scanf(" %c",&b);

    int i=0;
    while (a[i]!='\0'){
        if (a[i]== b){
            a[i]="*";
        }
        i++;
    }
    printf("%s",a);
    }