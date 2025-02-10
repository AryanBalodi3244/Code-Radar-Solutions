#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char a[100];
    char strarr[100][100];
    scanf("%[^\n]",a);
    int count=0;
       
    char *token = strtok(a, " ");
    while (token && count < 100) {
        strcpy(strarr[count], token);  
        count++;
        token = strtok(NULL, " ");  
    }
    int flag=0;
    for (int i=0;i<count;i++){
        int s=0, end= strlen(strarr[i])-1;
        while (s < end) { 
            if (strarr[i][s++] != strarr[i][end--]) {
                printf("No\n");
                return 0;
            }
        }
    }

    printf("Yes");
    return 0;
    }