#include <stdio.h>

struct Student {
    int rno;
    char name[10];
    float marks;
};


void main(){
    int len;
    scanf("%d",&len);
    struct Student students[len];
    for (int i=0;i<len;i++){
           scanf("%d %s %f",&student[i].rno,&student[i].name,&student[i].marks);
    }
    for (int i=0;i<len;i++){
           for (int j=i+1;i<len;i++){
            if (student[j].marks>student[j+1].marks){
                
                 struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
                }
    }

    }
        for (int i=0;i<len;i++){
                printf("Roll Number: %d, Name: %s, Marks: %.2f",student[i].rno,student[i].name,student[i].makrs);
        }


    
}