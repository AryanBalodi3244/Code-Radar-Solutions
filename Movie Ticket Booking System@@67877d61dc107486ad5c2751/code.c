#include <stdio.h>
#include <string.h>
struct Ticket {
    char id[20];
    char name[10];
    int price;
};

int main() {
    int len;
    scanf("%d", &len);
    struct Ticket ticket[len];
    int standard=0,premium=0,vip=0;
    for (int i = 0; i < len; i++) {
        scanf("%s %s %d", &ticket[i].id, ticket[i].name, &ticket[i].price);
        if ((strcmp(ticket[i].name, "Standard") == 0)) standard+=ticket[i].price;
        else if ((strcmp(ticket[i].name, "Premium") == 0)) premium+=ticket[i].price;
        else if ((strcmp(ticket[i].name, "VIP") == 0)) vip+=ticket[i].price;
    }


     printf("Standards: %.2f, Premiums: %.2f, VIPs: %.2f",(float)standard,(float)premium,(float)vip);


    return 0;
}
