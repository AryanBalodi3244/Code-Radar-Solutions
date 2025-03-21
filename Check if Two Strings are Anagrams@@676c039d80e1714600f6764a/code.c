#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char a[20],b[20],c;
    scanf("%s",a);
    scanf("%s",b);
    int freq[256]={0};
    int l1=strlen(a);
    int l2=strlen(b);
    if (l1 != l2) {
        printf("No");
        return 0;
    }
    for(int i=0 ; i<l1 ;i++){
        freq[a[i]]++;
        freq[b[j]]--;
    }
    for(int i=0 ; i<256 ;i++){
        if(freq[i]){
            printf("No");
            return 0;
        }
    }
    printf("Yes");
    return 0;
    
    }