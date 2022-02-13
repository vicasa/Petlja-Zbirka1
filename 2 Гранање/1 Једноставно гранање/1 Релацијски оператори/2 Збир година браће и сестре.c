#include <stdio.h>

int main() {
  unsigned z;
  scanf("%u", &z);
  if (z <= 3) { printf("ne\n"); return 0;}
  if((z-3)%4 == 0) printf("da\n");
  else printf("ne\n");
  return 0;
}
