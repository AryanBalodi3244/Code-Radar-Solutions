#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char a[50];
    scanf(" %[^\n]" , &a);
    if (a=='\0'){
        printf("");
        return 0;
    }
    char words[20][20];
    int count=0;
    char *token = strtok(a , " ");
    while (token!=NULL && count <20){
        char k[20];
        int j=0;
        for(int i= strlen(token)-1; i>=0 ; i--){
          k[j++] = token[i];
            
        }
        k[j] = '\0';
        strcpy(words[count++] , k);
        token = strtok(NULL ," ");
      

    }
    for(int i=0 ; i<count ;i++){
        printf("%s " , words[i]);
    }
    return 0;
    }