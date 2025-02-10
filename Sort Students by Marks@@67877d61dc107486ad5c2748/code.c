#include <stdio.h>

struct Student {
    int rno;
    char name[10];
    float marks;
};


void main(){
    int len;
    scanf("%d",&len);
    struct Student student[len];
    for (int i=0;i<len;i++){
           scanf("%d %s %f",&student[i].rno,&student[i].name,&student[i].marks);
    }
    for (int i=0;i<len;i++){
            for (int j = 0; j < len - i - 1; j++){
            if (student[j].marks<student[j+1].marks){
                
                 struct Student temp = student[j];
                student[j] = student[j + 1];
                student[j + 1] = temp;
                }
    } }
        for (int i=0;i<len;i++){
                printf("Roll Number: %d, Name: %s, Marks: %.2f\n",student[i].rno,student[i].name,student[i].marks);
        }


    
}