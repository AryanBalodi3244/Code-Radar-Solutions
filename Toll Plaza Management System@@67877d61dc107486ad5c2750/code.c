#include <stdio.h>
#include <string.h>
struct Vehicle {
    char id[20];
    char name[10];
    int toll;
};

int main() {
    int len;
    scanf("%d", &len);
    struct Vehicle vehicle[len];
    int car=0,truck=0,bike=0;
    for (int i = 0; i < len; i++) {
        scanf("%s %s %d", &vehicle[i].id, vehicle[i].name, &vehicle[i].toll);
        if ((strcmp(vehicle[i].name, "Car") == 0)) car+=vehicle[i].toll;
        else if (vehicle[i].name == "Truck") truck+=vehicle[i].toll;
        else if (vehicle[i].name == "Bike") bike+=vehicle[i].toll;
    }


     printf("Cars: %.2f, Trucks: %.2f, Bikes: %.2f",(float)car,(float)truck,(float)bike);


    return 0;
}
