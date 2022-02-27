#include <stdio.h>

int main(){
  double k, p, x;
  scanf("%lf %lf", &k, &p);
  /*najvecu proju cemo napraviti ako upotrebimo svo kukuruzno brasno
  a to cemo moci ako psenicnog brasna ima vise od  pola kukuruznog.
  Ako psenicnog nema vise od pola kukuruznog, onda cemo najvecu proju napraviti ako upotrebimo svo psenicno  brasno*/
  /*Dakle,
  ako p>=k , onda u proju ide k kukuruznog i k/2 psenicnog, ukupno brasna k+k/2=3*k/2, pa je kolicina vode jednaka (3*k/2)/2=3*k/4
  u suprotnom, u proju ide 2*p kukuruznog i p psenicnog, ukupno brasna p+2*p=3*p, , pa je kolicina vode jednaka 3*p/2*/
  if(p >= k/2) printf("%.2lf\n", 3*k/4);
  else printf("%.2lf\n", 3*p/2);
  return 0;
}
