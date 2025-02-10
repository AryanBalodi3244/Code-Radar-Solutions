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

    for(int i=0;i<count;i++){
        for (int j=0;j<strlen(a[i]);j++){
            if (isupper(a[i][j])){
                a[i][j]=tolower(a[i][j]);
            }
            else{
                  a[i][j]=toupper(a[i][j]);
            }
        }
        printf("%s ",a[i]);
    }
    
    return 0;
    }