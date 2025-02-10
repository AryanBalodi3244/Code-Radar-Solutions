#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char a[50];
    char strarr[20][100];
    scanf("%[^\n]",a);
    int count=0;
       
    char *token = strtok(a, " ");
    while (token != NULL && count < 20) {
        strcpy(strarr[count], token);  
        count++;
        token = strtok(NULL, " ");  
    }
    for (int i=0;i<count;i++){
            int len=strlen(strarr[i]);
            for (int j=len-1;j>=0;j--){
                printf("%c",strarr[i]);
    }
    }

    return 0;
    }