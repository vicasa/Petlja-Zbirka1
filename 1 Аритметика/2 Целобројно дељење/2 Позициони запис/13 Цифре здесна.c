#include <stdio.h>

int main() {
  unsigned a, b, c, d, e, f; 
  scanf("%u %u %u %u %u %u", &a, &b, &c, &d, &e, &f);
  printf("%u\n", a + b*10 + c*100 + d*1000 + e*10000 + f*100000); 
  return 0;
}
