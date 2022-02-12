#include <stdio.h>

int main() {
  unsigned st, min , sek;
  scanf("%u %u %u", &st, &min, &sek);
  printf("%.5lf\n", (sek/60.0 + min)/60 + st); 
  return 0;
}
