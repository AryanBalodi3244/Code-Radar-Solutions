#include <stdio.h>
#include <string.h>

int is_unique(char substr[][100], char k[] , int len) {
  for(int i=0; i<len ; i++){
    if (substr[i]==k){
        return 0;
    }
  }
  return 1;
}

int main() {
    char str[100], substr[5000][100];  
    int count = 0;
    
    scanf("%s", str);
   int k=0;
    int len = strlen(str);
   for (int i=0 ; i<l;i++){
    for(int i= len-1; j >= i ; j++){
        char k;
        strncpy(k , s+i ; j-i+1);
        if (is_unique(substr , k , j)){
            substr[j++]= k;
        }
    }
   }
   printf("%d" , j);
    return 0;
}
