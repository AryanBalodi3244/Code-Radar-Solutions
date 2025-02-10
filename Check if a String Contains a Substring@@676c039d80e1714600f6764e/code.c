#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char a[50],b[20];
    char strarr[20][100];
    scanf("%[^\n]",a);
     scanf("%[^\n]",b);

    int count=0,flag=0;
    char max[100];
       
    char *token = strtok(a, " ");
    while (token != NULL && count < 20) {
        strcpy(strarr[count], token);  
        count++;
        token = strtok(NULL, " ");  
    }
    for (int i=0;i<count;i++){
        if (strarr[i]==b){
            printf("Yes");
            flag=1;
            break;
        }
    }
    if (flag==1){
        printf("No");
    }

    }