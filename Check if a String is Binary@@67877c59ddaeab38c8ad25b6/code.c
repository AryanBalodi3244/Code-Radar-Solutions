#include <stdio.h>
#include <string.h>
int main() {
    char a[20];
    if (scanf("%19s", a) != 1) { 
        printf("Yes\n");
        return 0;
    }
    int n=strlen(a);
   
  for (int i = 0; a[i] != '\0'; i++) {
        if (a[i]!='1' && a[i]!='0'){
            printf("No");
            return 0;
        }
    }
printf("Yes");
    return 0;
}
