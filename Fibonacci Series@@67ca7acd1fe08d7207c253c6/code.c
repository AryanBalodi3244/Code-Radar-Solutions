void fibonacciSeries(int n ){

    int a=0,b=1;
    while (n>0){
        int c=a+b;
        printf("%d ",a);
        a=b;
        b=c;
        
        n--;

    }
}