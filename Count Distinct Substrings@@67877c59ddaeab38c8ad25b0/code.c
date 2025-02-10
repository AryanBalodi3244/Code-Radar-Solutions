#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str);
    int n = strlen(str), count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            count++;  // Each substring is unique in this simple case
        }
    }

    printf("%d\n", count);
    return 0;
}
