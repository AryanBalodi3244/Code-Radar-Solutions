#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char a[50];
    char strarr[20][100];
    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = '\0';
    int len =strlen(a);
    int start=0;       
    for (int i=0;i<=len;i++){
        if (a[i]==' ' || a[i]== '\0'){
            for (int j=i-1;j>=start;j--){
                printf("%c",a[j]);
        }
        if (a[i]==' '){
            printf(" ");
        }
    start =i+1;
        }
    }
    return 0;
    }