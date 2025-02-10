#include <stdio.h>

int main() {
    int n, arr[1000], hash[100001] = {0}, maxLen = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        hash[arr[i]] = 1;
    }

    for (int i = 0; i < n; i++) {
        if (!hash[arr[i] - 1]) {
            int num = arr[i], currLen = 0;
            while (hash[num]) currLen++, num++;
            if (currLen > maxLen) maxLen = currLen;
        }
    }

    printf("%d", maxLen);
    return 0;
}
