#include <stdio.h>

struct Library {
    char title[10];
    char author[20];
    float price;
};


void main(){
    int len;
    scanf("%d",&len);
    struct Library book[len];
    for (int i=0;i<len;i++){
           scanf("%s %s %f",&book[i].title,&book[i].author,&book[i].price);
    }
int tp;
scanf("%f",&tp);
    for (int i=0;i<len;i++){
        if (book[i].price>tp){
        printf("Books above price %.2f:\nTitle: %s, Author: %s, Price: %.2f\n",tp,book[i].title,book[i].author,book[i].price);

        }
        }


    
}