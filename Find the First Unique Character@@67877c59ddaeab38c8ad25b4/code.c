#include <stdio.h>
#include <string.h>
int main() {
    char a[20];
    scanf("%[^\n]", &a);
    int n=strlen(a);
    int freq[1001] = {0}; 
    for (int i = 0; a[i] != '\0'; i++) {
        freq[a[i]]++; 
    }
int flag=1;
    for (int i = 0; i < n; i++) {
        if ((freq[a[i]] == 1)) {
        printf("%c",a[i]);
        flag=0;
        break;
        }
    }
if (flag==1){
    printf("-");
}
    return 0;
}
