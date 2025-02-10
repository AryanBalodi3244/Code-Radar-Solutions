#include <stdio.h>
#include <string.h>
int main(){
    char a[10];
    scanf("%s",a);
    int len=strlen(a);
    for (int i=0; i<len ;i++){
            printf("%c",a[len-i]);
    }
    return 0;
}