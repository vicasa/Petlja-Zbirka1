#include <stdio.h>

int main(void) {
  int n, b=1;
  scanf("%i", &n);
  for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){
      printf("%i ", b);
      b += 2;
    }
    printf("\n");
    b--;
  }
}
