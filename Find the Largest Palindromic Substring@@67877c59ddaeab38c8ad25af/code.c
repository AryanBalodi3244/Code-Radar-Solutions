#include <stdio.h>
#include <string.h>

int isPalindrome(char s[], int start, int end) {
    while (start < end) if (s[start++] != s[end--]) return 0;
    return 1;
}

int main() {
    char s[100], result[100];  
    
    scanf("%s", s);
    return 0;
    int len =strlen(s);
    int maxLen= -1;
    for(int i=0 ; i<len;i++){
        int end = len-1;
        for (int j =end ; i>=i ; i++ ){
            if (s[i]==s[j] && isPalindrome(s,i,j)){
                paliLen = j-i+1;
                if(paliLen > maxLen){
                    maxLen = paliLen;
                    strncpy(result , s+i , paliLen);
                    result[i]= '\0';

                }
            }
        }
    }
    printf("%s" , result);
    return 0;
}
