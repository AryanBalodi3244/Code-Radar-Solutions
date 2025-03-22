#include <stdio.h>
#include <string.h>

int is_unique(char substr[][100], char k[] , int len) {
  for(int i=0; i<len ; i++){
    if (strcmp(substr[i] , k)==0){
        return 0;
    }
  }
  return 1;
}

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
        if (is_unique(substr , k , n)){
            strcpy(substr[n++], k);
        }
    }
   }
   printf("%d" , n);
    return 0;
}
