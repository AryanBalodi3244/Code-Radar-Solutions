#include <string.h>

void compressString(char string[] ,char compressed[] ){
    
    int count =0;
    int i=0,j=0,start=0;
    while (string[i] !='\0'){
        compressed[j++]=string [i];
        count =1;

       while  (string[i+1] == string[i]){
        count++;
        i++;
       }
        if (count>1) {
           j+= sprintf(compressed + j, "%d", count);
        }
       
        i++;


    }

}