#include <stdio.h>

int main() {
  unsigned x,y;
  scanf("%u %u", &x, &y);
  x--; 
  y--;
  printf("%u\n", 3*(y/100)+(x/100 +1)); /*x i y smo smanjili za 1 da bi se dobili odgovarajuci brojevi 0,1,2 pri deljenju sa 100, (x/100+1) je broj kolone, a y\100 je broj reda brojeci odozdo ka gore od 0 do 2, jasno je da onda 3*(y/100)+(x/100 +1)) predstavlja odgovarajuce polje*/
  return 0;
}
