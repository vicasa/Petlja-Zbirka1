#include <stdio.h>

/*
kazaljke ce se poklopiti ako zaklapaju isti orjentisani ugao sa smerom 12 (ovaj ugao nazivamo direkcioni ugao kazaljke)
ako pretpostavimo da se kazaljke pomeraju kontinualno i ravnomernom brzinom, kazaljke ce se poklopiti
medjutim, to poklapanje nece biti nakon celog broja sekundi (izuzev poklapanja na 12)
*/
/*
ako je tacno h sati, nakon x minuta
satna kazaljka ce imati direkcioni ugao 1800*h + 30*x minuta,
minutna kazaljka ce imati direkcioni ugao 360*x minuta
resavajuci jednacinu 1800h+30x=360x, dobijamo x= 60h/11.
*/

int main() {
  unsigned h;
  scanf("%u", &h);
  printf("%.0lf\n", 60.0*h/11);
  return 0;
}
