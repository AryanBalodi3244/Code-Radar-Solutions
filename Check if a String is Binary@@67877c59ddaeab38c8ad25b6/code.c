#include <stdio.h>
#include <string.h>
int main() {
    char a[20];
    scanf("%[^\n]", &a);
    int n=strlen(a);
  for (int i = 0; a[i] != '\0'; i++) {
        if (a[i]!='1' && a[i]!='0' && a[i]!=' '){
            printf("No");
            return 0;
        }
    }
printf("Yes");
    return 0;
}
