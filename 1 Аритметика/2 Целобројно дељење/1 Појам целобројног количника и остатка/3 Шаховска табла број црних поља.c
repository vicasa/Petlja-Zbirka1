#include <stdio.h>
/*
U svaka dva uzastopna reda ili u svake dve uzastopne kolone isti je broj belih i crnih polja.
Pa ako ima paran broj redova ili paran broj kolona belih i crnih polja ima isto. Dakle crnih polja ima
dva puta manje od ukupno polja, tj. ima ih (n*m)/2.
Ako i redova i kolona ima neparno, onda sve do poslednjeg reda ima isto crnih i belih polja, a u poslednjem redu
ima jedno belo polje vise jer prvo polje u tom redu je belo (ima neparan broj redova i prvo polje u prvom redu je belo)
to ce i poslednje polje u tom redu biti belo (ima neparan broj kolona, npr bcbcbc|b).
Dakle u tom slucaju na tabli belih polja ima vise za jedno, pa crnih ima (ukupno polja -1)/2, tj. (n*m-1)/2.
Ako je / celobrojno deljenje onda su vrednosti izraza (n*m)/2 i (n*m-1)/2 iste u slucaju da su n i m neparni brojevi.
*/
int main() {
  unsigned n,m;
  scanf("%u %u", &n, &m);
  printf("%u\n", n*m/2);
  return 0;
}
