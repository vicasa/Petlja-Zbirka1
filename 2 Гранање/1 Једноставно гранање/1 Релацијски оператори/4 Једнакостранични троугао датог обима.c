#include <stdio.h>

int main() {
  unsigned a, b, c, O;
  scanf("%u %u %u", &a, &b, &c);
  O = a+b+c;
  if (O % 3 == 0) printf("da %u\n", O/3);
  else printf("ne\n");
  return 0;
}
