#include <stdio.h>
#include <stdlib.h>

int main() {
  unsigned h, m, satna, minutna, ugao;
  scanf("%u %u", &h, &m);
  h %= 12; /*ako je h 12 da ga vratimo na 0*/
  satna = h*1800 + m*30; /*ugao izmedju smera 12h  i satne kazaljke u minutama*/
  minutna = m*360; /*ugao izmedju smera 12h  i minutne kazaljke u minutama*/
  ugao = abs(satna - minutna); /*ugao izmedju satne i minutne u minutama*/
  printf("%u:%u\n", ugao/60, ugao%60); /*minute pretvaramo u sate i minute*/
  /*
  svakog sata predje ugao od 360 stepeni, pa zbog toga nije vazno koliko je sati proslo da bi odredili ugao izmedju minutne i smera 12h
  satna za 1 sat predje ugao od 30 stepeni = 1800 minuta
  satna za 1 minut predje ugao od 30 minuta
  minutna za 1 minut predje ugao od 6 stepeni = 360 minuta
   */
  return 0;
}
