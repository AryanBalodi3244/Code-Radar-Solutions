#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char a[50];
    char strarr[20][100];
    scanf("%[^\n]",a);
    int count=0;
    char max[100];
       
    char *token = strtok(a, " ");
    while (token != NULL && count < 20) {
        strcpy(strarr[count], token);  
        count++;
        token = strtok(NULL, " ");  
    }

    printf("%d",count);
    return 0;
    }