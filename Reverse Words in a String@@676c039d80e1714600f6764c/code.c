#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char a[50];
    scanf("%[^\n]" , &a);
    char words[20][20];
    int count=0;
    char *token = strtok(a , " ");
    while (token!=NULL && count <20){
        char k[20];
        for(int i= strlen(token)-1; i>=0 ; i--){
            strcpy(k[i] , token[i]);
            
        }
        strcpy(words[count++] , k);
        token = strtok(NULL ," ");
      

    }
    for(int i=0 ; i<20 ;i++){
        printf("%s " , words[i]);
    }
    return 0;
    }