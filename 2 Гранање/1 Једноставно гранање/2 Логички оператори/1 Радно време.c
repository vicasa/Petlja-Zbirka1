#include <stdio.h>

int main() {
  unsigned h, m;
  scanf("%u %u", &h, &m);
  if(h<9 || h>=17) printf("ne\n");
  else printf("da\n");
  return 0;
}
