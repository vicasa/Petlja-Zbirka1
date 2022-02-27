#include <stdio.h>

/*duzPozDeo(a, b) je duzina dela intervala izmedju a i b koji cine pozitivni brojevi;
ne mora da bude a <= b, npr ako je a= 100, b=70 onda je duzPozDeo(a, b)=30;
*/
int duzPozDeoInt(int a, int b){ 
  int l, r;
  if(a <= b) {l=a; r=b;}
  else {l=b; r=a;}

  if(l > 0) return r-l;
  if(r > 0) return r;
  return 0;
}

/*
ako stojimo u koordinatnom pocetku prostora, smer x ose je desno, smer y ose je napred, smer z ose je gore;
ako posmatramo kvadrante u xy ravni, oktanti su delovi prostara koji se nalaze iznad i ispod kvadranata;
dakle, svaki kvadrant xy ravni odredjuje dva oktanta (jedan iznad i jedan ispod njega), tako dobijamo ukupno 4*2=8 oktanata;
prvi oktant je onaj koji se nalazi iznad prvog kvadranta (tacke koje njemu pripadaju imaju sve tri koordinate pozitivne);
sada je jasno da se zadatak resava analogno zadatku sa pravougaonikom u prvom kvadrantu
*/
int main()
{
	int x1, y1, z1, x2, y2, z2;
  scanf("%i %i %i %i %i %i", &x1, &y1, &z1, &x2, &y2, &z2);
  printf("%i\n", duzPozDeoInt(x1, x2)*duzPozDeoInt(y1, y2)*duzPozDeoInt(z1, z2));
  return 0;
}
