#include <stdio.h>

int main(){
    char a[]=malloc(sizeof(char)*1000);
    scanf("%s",&a);
    printf("You entered: %s",a);
    return 0;
}