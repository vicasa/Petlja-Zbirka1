#include <stdio.h>
#include<math.h>

int main() {
  double s, v1, v2, v, t;
  unsigned h, m, sec;
  scanf("%lf %lf %lf", &s, &v1, &v2);
  v = v1-v2;
  v = v>=0 ? v : -v;
  t = s/v;
  h = floor(t); /*ceo broj sati*/
  t = (t-h)*60; /*uzeli smo ceo broj sati (h) iz totalnog vremena, ono vreme sto je preostalo a koje je manje od 1 sata, izrazavamo u real min*/
  m = floor(t); /*ceo broj minuta, ne racunajuci minute koji se nalaze u satima*/
  t = (t-m)*60; /*uzeli smo ceo broj minuta (m) iz real minuta, ono vreme sto sada preostaje a koje je manje od 1 minuta, izrazavamo u real sec*/
  sec = round(t); /*zaokruzujemo broj real sec*/
  
  /*kako nismo uzeli ceo deo real sekundi, vec zaokruzili, moze da se desi da je sec bude 60, sto nije dozvoljeno*/
  
  m += sec/60; /*ako je sec posato 60 broj m se povecava za 1 u suprotnom nema promene*/
  
  h += m/60; /*ako je m posatao 60 broj h se povecava za 1 u suprotnom nema promene*/
  
  sec %= 60; /*ako je sec posatao 60 broj sec se postavlja na 0 u suprotnom nema promene*/
  
  m %= 60; /*ako je m posatao 60 broj m se postavlja na 0 u suprotnom nema promene*/
     
  printf("%u\n%u\n%u\n", h, m, sec); 
  
  return 0;
}
