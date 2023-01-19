#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  int i,j,And = 0,Or = 0,Xor = 0;
  for (i = 1; i<= n; i++) {
      for(j = i+1; j <= n; j++){
          if(And <(i & j) && (i & j) < k){
              And = i & j;
          }
          if(Or <(i | j) && (i | j) < k){
              Or = i | j;
          }
          if(Xor <(i ^ j) && (i ^ j) < k){
              Xor = i ^ j;
          }
      }
  }
  printf("%d\n", And);
  printf("%d\n", Or);
  printf("%d\n", Xor);
  
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
