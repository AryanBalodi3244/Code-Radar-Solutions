void caesarCipher(char message[] , int shift , char encrypted[]){

    int i=0;
    while (message[i] !='\0'){
        encrypted = message[i] + shift;
        i++;
    }

}