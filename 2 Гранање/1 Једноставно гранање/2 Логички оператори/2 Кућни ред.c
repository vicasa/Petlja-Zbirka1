#include <stdio.h>

int main() {
  unsigned h;
  scanf("%u", &h);
  if((h>=6 && h<13) || (17<h && h<=22)) printf("moze\n");
  else printf("ne moze\n");
  return 0;
}
