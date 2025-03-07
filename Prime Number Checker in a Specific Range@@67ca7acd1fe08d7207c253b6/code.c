int printPrimesInRange(int a,int b){
for (int i=a;i<b;i++){
for (int j=2;j<i;j++){
    if (i%j==0){
       goto k;
    }
}
k:
 printf("%d ",i);

}
return 0;

}