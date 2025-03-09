void fibonacciSeries(int n ){

    int a=0,b=1;
    while (n>0){
        int c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
        n--;

    }
}