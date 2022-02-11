#include <stdio.h>
#include<math.h>

int main() {
  double r, s_real;
  unsigned s, m, sec;
  scanf("%lf", &r);
  s_real = r*180/M_PI; /*realan broj stepeni - nadalje radimo isto kao u Trkacima - M_PI je definisana konstanta u math.h i predstavlja najbolju aproksimaciju broja pi u double tipu*/
  s = floor(s_real); 
  s_real = (s_real-s)*60;
  m = floor(s_real);
  s_real = (s_real-m)*60; 
  sec = round(s_real);
  
  /*
  Kako s moze da bude veci ili jednak od 360 stepeni, treba ga vratiti da bude manji od 360 stepeni
  Znacenje ugla veceg od 360 stepeni je matematicka apstrakcija.
  Dva ugla koja se razlikuju za 360 stepeni smatraju se istim (0 i 360 se takodje smatraju istim)
  Zato ugao veci ili jednak od 360 vracamo da bude manji od 360 i veci ili jednak od nula,
  tako sto od njega oduzimamo 360 sve dok ne postane manji od 360.
  */
  
  s %= 360; /*ako je broj stepeni veci od 360 vracamo ga ispod 360*/
  
  /*Nadalje isti problem kao kod trkaca sa sekundama*/
  m += sec/60;
  s += m/60;
  sec %=60;
  m %= 60;
  printf("%u:%u:%u\n", s, m, sec); 
  return 0;
}
