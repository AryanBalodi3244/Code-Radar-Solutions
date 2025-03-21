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
        char k;
        for(int i= strlen(token)-1; i>=0 ; i--){
            k=token[i];
            
        }
        strcpy(words[count++] , k);
        token = strtok(NULL ," ");
      

    }
    for(int i=0 ; i<20 ;i++){
        printf("%s " , arr[i]);
    }
    return 0;
    }