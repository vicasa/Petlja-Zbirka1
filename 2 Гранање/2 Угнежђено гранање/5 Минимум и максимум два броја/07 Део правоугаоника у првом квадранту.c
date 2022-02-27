#include <stdio.h>

/*duzPozDeo(a, b) je duzina dela intervala izmedju a i b koji cine pozitivni brojevi
ne mora da bude a <= b
*/
int duzPozDeoInt(int a, int b){ 
  int l, r;
  if(a <= b) {l=a; r=b;}
  else {l=b; r=a;}

  if(l > 0) return r-l;
  if(r > 0) return r;
  return 0;
}

int main()
{
	int x1, y1, x2, y2;
  scanf("%i %i %i %i", &x1, &y1, &x2, &y2);
  printf("%i\n", duzPozDeoInt(x1, x2)*duzPozDeoInt(y1, y2));
  return 0;
}
