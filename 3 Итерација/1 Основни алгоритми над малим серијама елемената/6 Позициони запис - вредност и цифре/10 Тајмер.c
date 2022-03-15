#include <stdio.h>


int main() {
  unsigned tmp, ukupno=0;
  
  scanf("%u", &tmp); /*ucitavamo sate*/
  ukupno += tmp*3600; 

  scanf("%u", &tmp); /*ucitavamo minute*/
  ukupno += tmp*60; 

  scanf("%u", &tmp); /*ucitavamo sekunde*/
  ukupno += tmp; 

  scanf("%u", &tmp); /*ucitavamo broj sati sa tajmeru*/
  ukupno += tmp*3600; 

  scanf("%u", &tmp); /*ucitavamo broj minuta sa tajmera*/
  ukupno += tmp*60; 

  scanf("%u", &tmp); /*ucitavamo broj sekundi sa tajmera*/
  ukupno += tmp; 
  
  tmp = ukupno/60; /*ukupno celih minuta od pocetka aktuelnog dana do zvona tajmera*/
  
  unsigned h = tmp/60; /*ukupno celih sati od --||--*/
  
  printf("%u:%u:%u+%u\n", h%24, tmp%60, ukupno%60, h/24);
  return 0;
}
