#include <stdio.h>

int main(){
    char a[20];
    scanf("%s",a);
    int i=0;
    while (a[i]!='\0'){
        i++;
    }
    printf("%d",i+1);
}