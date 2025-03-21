#include <stdio.h>
#include <string.h>
int main() {
    char a[20];
    scanf("%[^\n]", &a);
    int freq[256];
    int i=0;
    while (a[i]!='\0'){
        freq[a[i]]++;
        i++;
    }
    int maxFreq=0;
    char maxFreqChar;
    for(int i=0 ; i<strlen(a);i++){
       
            if(freq[a[i]]>maxFreq){
                maxFreq=freq[a[i]];
                maxFreqChar=a[i];
            }
        

    }
printf("%c" , maxFreqChar);
    return 0;
}
