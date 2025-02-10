#include <stdio.h>
#include <string.h>

struct Subscription {
    char user[20];
    char type[10];
    int cost;
};

int main() {
    int len;
    scanf("%d", &len);
    struct Subscription subs[len];
    int basic = 0, standard = 0, premium = 0;
    int count_basic = 0, count_standard = 0, count_premium = 0;

    for (int i = 0; i < len; i++) {
        scanf("%s %s %d", subs[i].user, subs[i].type, &subs[i].cost);
        if (strcmp(subs[i].type, "Basic") == 0) {
            basic += subs[i].cost;
            count_basic++;
        }  
        if (strcmp(subs[i].type, "Standard") == 0) {
            standard += subs[i].cost;
            count_standard++;
        }  
        if (strcmp(subs[i].type, "Premium") == 0) {
            premium += subs[i].cost;
            count_premium++;
        }
    }

    printf("Basic: %d Users, Revenue: %.2f; Standard: %d Users, Revenue: %.2f; Premium: %d Users, Revenue: %.2f\n",
           count_basic, (float)basic, count_standard, (float)standard, count_premium, (float)premium);

    return 0;
}
