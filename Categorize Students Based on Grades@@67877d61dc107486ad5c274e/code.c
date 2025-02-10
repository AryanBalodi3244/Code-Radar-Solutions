#include <stdio.h>

struct Student {
    int rno;
    char name[10];
    float marks;
};

int main() {
    int len;
    scanf("%d", &len);
    struct Student student[len];

    for (int i = 0; i < len; i++) {
        scanf("%d %s %f", &student[i].rno, student[i].name, &student[i].marks);
    }

    for (int i = 0; i < len; i++) {
        char grade;
        if (student[i].marks >= 85) {
            grade = 'A';
        } else if (student[i].marks >= 70) {
            grade = 'B';
        } else {
            grade = 'C';
        }

        printf("Roll Number: %d, Name: %s, Marks: %.2f, Grade: %c\n", student[i].rno, student[i].name, student[i].marks, grade);
    }

    return 0;
}
