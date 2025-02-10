#include <stdio.h>

struct Rectangle {
    int len;
    int breadth;
};


void main(){
    int len;
    scanf("%d",&len);
    struct Rectangle rectangle[len];
    for (int i=0;i<len;i++){
           scanf("%d %d",&rectangle[i].len,&rectangle[i].breadth);
    }

    for (int i=0;i<len;i++){
                printf("Rectangle %d: Area = %.2f, Perimeter = %.2f\n",i,(float)(rectangle[i].len*rectangle[i].breadth),(float)((rectangle[i].len+rectangle[i].breadth)*2));
        }


    
}