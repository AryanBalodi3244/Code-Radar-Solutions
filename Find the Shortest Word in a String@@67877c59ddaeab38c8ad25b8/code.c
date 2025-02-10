#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char a[50];
    char strarr[20][100];
    scanf("%[^\n]",a);
    int minc=999,count=0;
    char min[100];
       
    char *token = strtok(a, " ");
    while (token != NULL && count < 20) {
        strcpy(strarr[count], token);  
        count++;
        token = strtok(NULL, " ");  
    }


    for (int i=0;i<count;i++){
        if (strlen(strarr[i]) < minc){
            strcpy(min,strarr[i]);
            minc=strlen(strarr[i]);
        }
    }
    printf("%s",min);
    }