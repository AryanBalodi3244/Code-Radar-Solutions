#include <stdio.h>

#include <stdio.h>


void main(){
    int len;
    scanf("%d",&len);
    int rno[len];
    char name[len][10];
    float marks[len];
    float min_marks=999;
    for (int i=0;i<len;i++){
           scanf("%d %s %f",&rno[i],&name[i],&marks[i]);
           if (marks[i]<min_marks){
            min_marks=marks;
           }
    }

    for (int i=0;i<len;i++){
        if (marks[i]==min_marks){
            printf("Student with Minimum Marks: Roll Number: %d, Name: %s, Marks: %.2f\n",rno[i],name[i],min_marks);

}
    }
}