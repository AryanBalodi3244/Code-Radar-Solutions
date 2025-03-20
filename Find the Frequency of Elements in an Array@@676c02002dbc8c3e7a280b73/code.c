#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    
    for (int i=0; i<n; i++){
        scanf("%d", &nums[i]);
    }
    int freq[n]={0};

  for (int i=0; i<n; i++){
      if (freq[arr[i]]!=0){
        freq[arr[i]]++;
      }
      else{
        freq[arr[i]]=1;
      }
    }  
    for (int i=0; i<n; i++){
        printf("%d %d\n" , arr[i] , freq[arr[i]]);
    }
    
    
return 0;
   
}
