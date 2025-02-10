#include <stdio.h>

struct Employee {
    int id;
    char name[10];
    float salary;
};

int main() {
    int len;
    scanf("%d", &len);
    struct Employee employee[len];

    for (int i = 0; i < len; i++) {
        scanf("%d %s %f", &employee[i].id, employee[i].name, &employee[i].salary);
    }

    for (int i = 0; i < len; i++) {
        int bonus=0;
        if (employee[i].salary > 50000) {
            bonus= (5/100)*employee[i].salary;
        } else {
            bonus= (10/100)*employee[i].salary;
        }
        

        printf("Employee ID: %d, Name: %s, Bonus: %.2f\n", employee[i].id, employee[i].name,(float) bonus);
    }

    return 0;
}
