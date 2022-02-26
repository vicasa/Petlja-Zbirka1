#include <stdio.h>
#include <float.h>
#include <math.h>

/*ax+by+c=0 je jednacina prave u ravni u smislu da su njena resenja koordinate tacaka koje u koordinatnoj ravni pripadaju pravoj*/
/*Dakle,
 ako jednacine (a1)x+(b1)y+(c1)=0 i (a2)x+(b2)y+(c2)=0 nemaju zajednicko resenje, onda prave nemaju zajednickih tacaka pa su paralelne
 ako su jednacine (a1)x+(b1)y+(c1)=0 i (a2)x+(b2)y+(c2)=0 ekvivalentne onda imaju isti skup resenja pa predstavljaju istu pravu
 ako jednacine (a1)x+(b1)y+(c1)=0 i (a2)x+(b2)y+(c2)=0 imaju tacno jedno zajednicko resenje, to znaci da njima odredjene prave imaju tacno jednu zajednicku tacku, pa se one seku
*/
/* za zajednicka resenja dve ili vise jednacina kaze se da su resenja 'sistema' tih jednacina */
/*
Dakle, nas problem se svodi na resavnje sistema jednacina (a1)x+(b1)y+(c1)=0 i (a2)x+(b2)y+(c2)=0, nadalje cemo na ovaj sistem referisati zvezdicom *
U matematici se pokazuje da vazi sledece,
Oznacimo det((a1,a2),(b1,b2)) sa D, det((-c1,-c2),(b1,b2)) sa (Dx) i det((a1,a2),(-c1,-c2)) sa (Dy)
 	Ako D!=0
 	onda sistem * ima tacno jedno resenje i to resenje je x=(Dx)/D, y=(Dy)/D
 	
 	U suprotnom(D==0)
 		Ako Dx==0 i Dy==0, jednacine iz sistema * su ekvivalentne
 		U suprotnom sistem * nema resenja
*/
/*
gde je det((x,y),(z,v)) definisano sa x*v-y*z
*/

double det(double x, double y, double z, double v){
	return x*v - y*z;
}

int main() {
  double a1, b1, c1, a2, b2, c2, D, Dx, Dy;
  scanf("%lf %lf %lf %lf %lf %lf", &a1, &b1, &c1, &a2, &b2, &c2);
  
  D = det(a1, a2, b1, b2);
  Dx = det(-c1, -c2, b1, b2);
  Dy = det(a1, a2, -c1, -c2);
  
  if(D != 0) printf("seku se\n%.2lf %.2lf\n", Dx/D, Dy/D);
  else
  	if(Dx == 0 && Dy ==0) printf("poklapaju se\n");
  	else printf("paralelne su\n");

  return 0;
}
