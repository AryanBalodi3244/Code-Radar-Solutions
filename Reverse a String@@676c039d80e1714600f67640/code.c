#include <stdio.h>
#include <string.h>
void main(){
    char a[10];
    scanf("%s",a);
    int len=strlen(a);
    for (int i=a-1;i>=0;i++){
            printf("%c",a[i]);
    }
}