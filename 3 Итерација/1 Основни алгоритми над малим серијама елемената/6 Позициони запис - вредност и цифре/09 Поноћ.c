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

  ukupno = 24*60*60 - ukupno; /*broj sekundi koje su ostale do kraja dana*/

  tmp = ukupno/60; /*ukupan broj celih minuta koje su ostale do ponoci*/
  printf("%u:%u:%u\n", tmp/60, tmp%60, ukupno%60);
  return 0;
}
