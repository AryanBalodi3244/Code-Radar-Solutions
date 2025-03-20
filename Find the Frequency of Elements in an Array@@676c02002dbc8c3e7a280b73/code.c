#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int freq[100]={0};

  for (int i=0; i<n; i++){
      if (freq[arr[i]]!=0){
        freq[arr[i]]++;
      }
      else{
        freq[arr[i]]=1;
      }
    }  
    for (int i=0; i<n; i++){
        if (freq[i]!=0)
        printf("%d %d\n" , arr[i] , freq[arr[i]]);
    }
    
    
return 0;
   
}
