#include <stdio.h>

int main() {
  
  int i,j,k,size = 5;
  for (  i = 0; i < size; i++) {
   
    for ( j = 0; j < size-i-1; j++) {
      printf(" ");
    }
   
    for ( k = 0; k < 2*i+1; k++) {
      if(k == 0 || k == 2*i || i == size-1) {
        printf("*");
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }
  return 0;
}
