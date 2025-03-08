#include <string.h>

void compressString(char string[] ,char compressed[] ){
    
    int count =0;
    int i=0,j=0,start=0;
    while (string[i] !='\0'){
        if (string[i+1] == string [i]){
            if(start==0){
                compressed[i]=string[i];
                j=i;
                start=1;           
                
                 }
            count++;
        }
        else if (count>1) {
            sprintf(compressed + strlen(compressed), "%d", count);
            count =0;
        }
        else if (count ==0){
            compressed[i]=string[i];
        }
        i++;


    }

}