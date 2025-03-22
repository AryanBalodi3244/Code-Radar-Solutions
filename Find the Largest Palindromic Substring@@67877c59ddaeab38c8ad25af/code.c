#include <stdio.h>
#include <string.h>

int isPalindrome(char s[], int start, int end) {
    while (start < end) if (s[start++] != s[end--]) return 0;
    return 1;
}

int main() {
    char s[100], result[100];  
    
    scanf("%s", s);
    int len =strlen(s);
    int maxLen= -1;
    int paliLen;
    for(int i=0 ; i<len;i++){
  
        for (int j = len-1 ; j>=i ; j-- ){
            if (s[i]==s[j] && isPalindrome(s,i,j)){
                paliLen = j-i+1;
                if(paliLen > maxLen){
                    maxLen = paliLen;
                    strncpy(result , s+i , paliLen);
                    result[paliLen]= '\0';

                }
            }
        }
    }
    printf("%s" , result);
    return 0;
}
