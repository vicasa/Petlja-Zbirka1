#include <stdio.h>

int main() {
  unsigned x;
  scanf("%u", &x);
  printf("%u %u\n", x/5 + 1, x%5 +1);
  return 0;
}
