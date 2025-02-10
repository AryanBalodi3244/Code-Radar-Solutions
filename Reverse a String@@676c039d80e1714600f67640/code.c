#include <stdio.h>
#include <string.h>
int main(){
    char a[10];
    scanf("%s",a);
    int len=strlen(a);
    for (int i=len;i>=0;){
            printf("%c",a[--i]);
    }
    return 0;
}