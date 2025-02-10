#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char a[50],b[20];
    char strarr[20][100];
    scanf("%[^\n]", a);
    getchar(); 
     scanf("%[^\n]",b);

        if (strstr(a,b)!=NULL){
            printf("Yes");
        }
        else{
        printf("No");
        }

    }