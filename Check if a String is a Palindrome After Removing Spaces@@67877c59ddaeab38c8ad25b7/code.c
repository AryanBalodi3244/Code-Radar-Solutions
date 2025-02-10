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
    int flag=0;
    for (int i=0;i<count;i++){
        int s=0, end= strlen(strarr[i])-1;
        while (s < end) { 
            if (strarr[i][s++] != strarr[i][end--]) {
                printf("NO\n");
                return 0;
            }
        }
    }
    
    
printf("YES");

    return 0;
    }