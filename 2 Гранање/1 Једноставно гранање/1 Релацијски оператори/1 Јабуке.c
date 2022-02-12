#include <stdio.h>

int main() {
  unsigned p, m;
  scanf("%u %u", &p, &m);
  if(p>m) printf("DA\n");
  else printf("NE\n");
  return 0;
}
