#include <stdio.h>

int main() {
  unsigned stepen;
  scanf("%u", &stepen);
  stepen %= 360; /*da radi i ako je dat ugao veci ili jednak od 360 stepeni*/
  printf("%u:%u\n", stepen/30, (stepen%30)*2); 
  /*
  svakih 30 stepeni je jedan sat
  svaki stepen je 2 minuta
  pakujemo broj stepeni u pakete po 30, jedan paket jedan sat
  stepene koje ne spakujemo u paket jer ih ima manje od 30, izrazavamo u minutama
   */
  return 0;
}
