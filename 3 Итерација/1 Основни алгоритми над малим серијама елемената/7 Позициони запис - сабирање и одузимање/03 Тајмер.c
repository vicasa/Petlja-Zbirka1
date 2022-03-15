#include <stdio.h>

int main() {
  unsigned h, m, s, t; 
  scanf("%u %u %u", &h, &m, &s);
  
  scanf("%u", &t); /*ucitavamo sate sa tajmera i dodajemo ih na sate sa casovnika*/
  h += t;
  
  scanf("%u", &t); /*ucitavamo minute sa tajmera i dodajemo ih na minute sa casovniku*/
  m += t;
	   
  scanf("%u", &t);/*ucitavamo sekunde sa tajmera i dodajemo ih na sekunde sa casovniku*/
  s += t;
  
  m += s/60; /*prebacili paketice od po 60 sekundi u minute (1 paketic od 60 skundi = 1 minut)*/
  h += m/60; /*prebacili paketice od po 60 minuta u sate (1 paketic od 60 minuta = 1 sat)*/
  
  /*nakon ovoga h sati + m%60 minuta + s%60 predstavlja vremenski interval od pocetka aktuelnog dana do zvona tajmera*/
  
  printf("%u:%u:%u+%u\n", h%24, m%60, s%60, h/24);
  return 0;
}
