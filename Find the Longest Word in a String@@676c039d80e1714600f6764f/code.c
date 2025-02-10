#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char a[50];
    char strarr[20][100];
    scanf("%[^\n]",a);
    int maxc=0,count=0;
    char max[100];
       
    char *token = strtok(a, " ");
    while (token != NULL && count < 20) {
        strcpy(strarr[count], token);  
        count++;
        token = strtok(NULL, " ");  
    }
    for (int i=0;i<count;i++){
        if (strlen(strarr[i]) > maxc){
            strcpy(max,strarr[i]);
            maxc=strlen(strarr[i]);
        }
    }
    printf("%s",max);
    }