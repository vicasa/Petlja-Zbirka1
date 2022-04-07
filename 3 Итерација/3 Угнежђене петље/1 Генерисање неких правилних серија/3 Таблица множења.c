#include <stdio.h>

int main(void) {
  int m, n;
  scanf("%i %i",&m, &n);
  for(int i=1; i<=m; i++){
    for(int j=1; j<=n; j++)
      printf("%i * %i = %i\t", i, j, i*j);
    printf("\n");
  }
}
