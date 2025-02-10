#include <stdio.h>

int main() {
    int n, maxFreq = 0, maxElement;
    scanf("%d", &n);
    int nums[n];

    for (int i = 0; i < n; i++) scanf("%d", &nums[i]);

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) 
            if (nums[i] == nums[j]) count++;

        if (count > maxFreq) {
            maxFreq = count;
            maxElement = nums[i];
        }
    }

    printf("%d\n", maxElement);
    return 0;
}
