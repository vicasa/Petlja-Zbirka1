#include <stdio.h>


int main() {
  unsigned tmp, ukupno=0;

  scanf("%u", &tmp); /*ucitavamo broj sati*/
  ukupno += tmp; /*ukupno sati*/

  scanf("%u", &tmp); /*ucitavamo broj minuta*/
  ukupno *= 60; /*pretvaramo sate u minute*/
  ukupno += tmp; /*ukupno minuta*/

  scanf("%u", &tmp); /*ucitavamo broj sekundi*/
  ukupno *= 60; /*pretvaramo minute u sekunde*/
  ukupno += tmp; /*ukupno sekundi*/

  printf("%u\n", ukupno);

  ukupno = 24*60*60 - ukupno; /*broj sekundi koji je ostao do kraja dana*/

  unsigned m = ukupno/60;
  printf("%u:%u:%u\n", m/60, m%60, ukupno%60);
  return 0;
}
