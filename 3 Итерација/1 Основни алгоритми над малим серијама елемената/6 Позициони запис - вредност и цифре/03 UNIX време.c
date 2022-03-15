#include <stdio.h>
/*forisranje iterativne forme*/
int main() {
  unsigned tmp, ukupno=0, k;

  scanf("%u", &tmp); /*ucitavamo broj dana*/
  k=1;
  ukupno *= k;
  ukupno += tmp; /*ukupno dana*/

  scanf("%u", &tmp); /*ucitavamo broj sati*/
  k=24;
  ukupno *= k; /*pretvaramo dane u sate*/
  ukupno += tmp; /*ukupno sati*/

  scanf("%u", &tmp); /*ucitavamo broj minuta*/
  k=60;
  ukupno *= k; /*pretvaramo sate u minute*/
  ukupno += tmp; /*ukupno minuta*/

  scanf("%u", &tmp); /*ucitavamo broj sekundi*/
  k=60;
  ukupno *= k; /*pretvaramo minute u sekunde*/
  ukupno += tmp; /*ukupno sekundi*/


  scanf("%u", &tmp); /*ucitavamo broj milisekundi*/
  k=1000;
  ukupno *= k; /*pretvaramo sekunde u milisekunde*/
  ukupno += tmp; /*ukupno milisekundi*/

  scanf("%u", &tmp); /*ucitavamo trajanje pesme u milisekundama*/
  ukupno += tmp; /*ukupno milisekundi*/

  unsigned s = ukupno/1000, m = s/60, h = m/60;
  printf("%u:%u:%u:%u:%u\n", h/24, h%24, m%60, s%60, ukupno%1000);
  return 0;
}
