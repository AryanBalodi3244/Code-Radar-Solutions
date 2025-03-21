#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char a[50];
     fgets(a, sizeof(a), stdin);
    if (strlen(a)==0){
        printf("");
        return 0;
    }
    int i=0;
    while (a[i] ==' '){
        printf(" ");
        i++;
    }
    char words[20][20];
    int count=0;
    char *token = strtok(a, " ");
    while (token) {
        for (int j = strlen(token) - 1; j >= 0; j--) 
            printf("%c", token[j]);  
        token = strtok(NULL, " ");
        if (token) printf(" ");  
    }
    return 0;
    }