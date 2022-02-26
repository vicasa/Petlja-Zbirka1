#include <stdio.h>

/*ax+b=0 ekvivalentno je sa ax=-b*/
/*ax=-b nema resenja ako je a==0 i b!=0*/
/*ax=-b ima beskonacno resenja (svaki broj je resenje) ako je a==0 i b==0*/
/*ax=-b ima tacno jedno resenja ako je a!=0 (resenje je -b/a) */

int main() {
  double a, b;
  scanf("%lf %lf", &a, &b);
  
  if(a==0) 
  	if(b==0) printf("BESKONACNO RESENJA\n");
  	else printf("NEMA RESENJA\n");
  else 
  	printf("%.2lf\n",-b/a);
  
  return 0;
}
