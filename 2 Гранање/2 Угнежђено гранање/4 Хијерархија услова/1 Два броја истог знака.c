#include <stdio.h>
/*ovo resenje je samo ilustracija hijerarhijskog grananja*/
/*isti zadatak je ranije resen na drugi (bolji) nacin (jednostavno grananje/logicki operatori) */

int main() {
  int a, b;
  scanf("%i %i", &a, &b);
  /*pretpostavka je da je a razlicito od 0*/
  if(a<0) 
  	if(b<0) printf("da\n");
  	else printf("ne\n");
  else 
  	if(b>0) printf("da\n");
  	else printf("ne\n");
  
  return 0;
}
