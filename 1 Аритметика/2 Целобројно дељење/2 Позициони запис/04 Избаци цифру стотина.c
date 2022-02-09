#include <stdio.h>

int main() {
  unsigned n,l,r; 
  scanf("%u", &n);
  /*
  Ako je dekadni zapis broja n jednak ...dcba,
  onda cemo taj zapis razdvojiti na ...dc i ba,
  prvi broj cemo staviti u promenljivu l, a drugi u promenljivu r.
  Zatim cemo iz l izbaciti cifru c, a onda cemo spojiti l i r i dobiti ...dba
  */
  l = n/100;
  r = n%100;
  l /= 10; /*izbacujemo c iz l*/
  printf("%u\n", l*100+r); /*izrazom l*100 + r, spojili smo zapise brojeva l i r*/
  return 0;
}
