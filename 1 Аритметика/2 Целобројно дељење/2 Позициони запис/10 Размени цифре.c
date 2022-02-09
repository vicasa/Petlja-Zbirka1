#include <stdio.h>

int main() {
  unsigned n, l, r, a, b, c ; 
  scanf("%u", &n);
  /*
  Ako je dekadni zapis broja n jednak ...cba,
  onda cemo taj zapis razdvojiti na ... i cba,
  prvi broj cemo staviti u promenljivu l, a drugi u promenljivu r.
  Zatim cemo u r izdvojiti cifre c, b i a i pomocu njih napraviti broj abc i taj broj zapisati u r
  Onda cemo spojiti l i r i dobiti ...abc
  */
  l = n/1000;
  r = n%1000;
  a = r%10;
  r = r/10;
  b = r%10;
  r = r/10; /*sada je r u stvari c*/
  c = r;
  r = a*100 + b*10 + c;
  printf("%u\n", l*1000+r); /*izrazom l*1000 + r, spojili smo zapise brojeva l i r*/
  return 0;
}
