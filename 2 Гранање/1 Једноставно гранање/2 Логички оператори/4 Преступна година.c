#include <stdio.h>

int main() {
  int y;
  scanf("%i", &y);
  if(y%4==0 && (y%100!=0 || y%400==0)) printf("da\n");
  else printf("ne\n");
  return 0;
}
