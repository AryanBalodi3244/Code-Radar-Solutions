#include <stdio.h>
#include <string.h>



int main() {
    char str[100], substr[5000][100];  
    int count = 0;
    
    scanf("%s", str);
   int n=0;
    int len = strlen(str);
   for (int i=0 ; i<len;i++){
    for(int j= len-1; j >= i ; j++){
        char k[20];
        strncpy(k , str+i , j-i+1);
        k[j - i + 1] = '\0';
        if (strcmp(substr[i] , k)==0){
            strcpy(substr[n++], k);
        }
    }
   }
   printf("%d" , n);
    return 0;
}
