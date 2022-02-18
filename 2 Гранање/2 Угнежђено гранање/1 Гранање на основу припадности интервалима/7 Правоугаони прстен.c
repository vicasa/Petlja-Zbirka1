#include <stdio.h>

int u_pravougaoniku(int x, int y, int x0, int y0, int w, int h){
	int dx = x-x0, dy = y-y0;
	if(0<dx && dx<w &&  0<dy && dy<h) return 1;
	return 0;
}/*funkcija vraca 1 ako je tacka (x,y) u unutrasnjosti pravougaonika sa gornjim levim temenom (x0,y0), sirinom w i visinom h (graficki koordinatni sistem - druga koordinata predstavlja korak na dole)*/

int main(){
  int x, y, x0, y0, w, h;
  scanf("%i %i %i %i %i %i", &x, &y, &x0, &y0, &w, &h);
  if(u_pravougaoniku(x, y, x0 + 5, y0 + 5, w - 10, h - 10)) printf("UNUTRA\n");
  else
  	if(u_pravougaoniku(x, y, x0 - 6, y0 - 6, w + 12, h + 12)) printf("NA IVICI\n");
  	else printf("SPOLJA\n");
}
