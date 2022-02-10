#include <stdio.h>

int main() {
  unsigned n, l, r, a, b, c, d; 
  scanf("%u", &n);
  /*
  Ako je dekadni zapis broja n jednak ...dcba,
  onda cemo taj zapis razdvojiti na ... i dcba,
  prvi broj cemo staviti u promenljivu l, a drugi u promenljivu r.
  Zatim cemo u r izdvojiti cifre d, c, b i a i pomocu njih napraviti broj abcd i taj broj zapisati u r
  Onda cemo spojiti l i r i dobiti ...abcd
  */
  l = n/10000;
  r = n%10000;
  a = r%10;
  r = r/10;
  b = r%10;
  r = r/10;
  c = r%10;
  r = r/10; /*sada je r u stvari d*/
  d = r%10;
  r = a*1000 + b*100 + c*10 +d;
  printf("%u\n", l*10000+r); /*izrazom l*10000 + r, spojili smo zapise brojeva l i r*/
  return 0;
}
