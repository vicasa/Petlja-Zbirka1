#include <stdio.h>

int main() {
  unsigned a,b;
  scanf("%u %u", &a, &b);
  printf("%u %u %u\n", a/b, a%b, b);
  return 0;
}