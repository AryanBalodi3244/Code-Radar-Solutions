#include <stdio.h>

int main() {
    char a[20];
    scanf("%s", &a);
    int n=strlen(a);
    int freq[1001] = {0}; 


    for (int i = 0; i < n; i++) {
        if (freq[nums[i]]) {
            printf("%c: %d\n", a[i], freq[nums[i]]);
            freq[nums[i]] = 0;
        }
    }

    return 0;
}
