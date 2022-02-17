#include <stdio.h>


int main() {
  int t;
  scanf("%i", &t);
  if(t<=0) printf("cvrsto\n");
  else
  	if(t<100) printf("tecno\n");
  	else printf("gasovito\n");
  return 0;
}
/*Moglo je samo sa dva if-a, al sa dodatna dva return-a

if(t<=0) {printf("cvrsto\n"); return 0;}
if(t<100) {printf("tecno\n"); return 0;}
printf("gasovito\n");

Onaj poslednji return u main-u ionako nema potrebe da se pise*/
