#include <stdio.h>
void main(){
    int len;
    scanf("%d",&len);
    int rno[len];
    char name[len][10];
    float marks[len];
    for (int i=0;i<len;i++){
           scanf("%d %s %f",&rno[i],&name[i],&marks[i]);
      
    }
    for (int i=0;i<len;i++){
           for (int j=i+1;i<len;i++){
            if (marks[j]>marks[j+1]){
                    marks[j]=marks[j]^marks[j+1];
                     marks[j+1]=marks[j]^marks[j+1];
                      marks[j]=marks[j]^marks[j+1];

                       rno[j]=rno[j]^rno[j+1];
                     rno[j+1]=rno[j]^rno[j+1];
                      rno[j]=rno[j]^rno[j+1];

                       name[j]=name[j]^name[j+1];
                     name[j+1]=name[j]^name[j+1];
                      name[j]=name[j]^name[j+1];
                }

        
    }

    }


    
}