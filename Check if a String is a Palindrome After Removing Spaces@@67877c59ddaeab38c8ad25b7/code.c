#include <stdio.h>
#include <string.h>

int main() {
    char a[50], strarr[20][50];
    
    // Handle empty input
    if (scanf(" %[^\n]", a) != 1) {
        printf("No\n");
        return 0;
    }

    int count = 0;
    char *token = strtok(a, " ");

    while (token && count < 20) {
        strcpy(strarr[count++], token);
        token = strtok(NULL, " ");
    }

    for (int i = 0; i < count; i++) {
        int s = 0, end = strlen(strarr[i]) - 1;
        while (s < end) {
            if (strarr[i][s++] != strarr[i][end--]) {
                printf("No\n");
                return 0;
            }
        }
    }

    printf("Yes\n");
    return 0;
}
