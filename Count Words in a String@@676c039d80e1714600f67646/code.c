#include <stdio.h>

int main(){
    char a[100];
    scanf("%[^\n]",a);
    int i=0,count=0;
    for (int i = 0; a[i] != '\0'; i++) {
        if (a[i]==' '){
            count++;
        }
    }
    printf("%d",count);
}