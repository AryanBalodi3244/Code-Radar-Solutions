#include <stdio.h>

#include <stdio.h>

struct Vehicle {
    int id;
    char name[10];
    int toll;
};

int main() {
    int len;
    scanf("%d", &len);
    struct Vehicle vehicle[len];
    int car,truck,bike;
    for (int i = 0; i < len; i++) {
        scanf("%s %s %d", &vehicle[i].id, vehicle[i].name, &vehicle[i].toll);
        if (vehicle[i].name == "Car") car+=vehicle[i].toll;
        else if (vehicle[i].name == "Truck") truck+=vehicle[i].toll;
        else if (vehicle[i].name == "Bike") bike+=vehicle[i].toll;
    }


     printf("Cars: %.2f, Trucks: %.2f, Bikes: %.2f",(float)car,(float)truck,(float)bike);


    return 0;
}
