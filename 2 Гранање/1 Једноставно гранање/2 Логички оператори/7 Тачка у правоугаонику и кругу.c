#include <stdio.h>
#include <math.h> /*za fabs, sqrt i pow*/


int main() {
  double x, y, x0, y0, r, w, h;
  scanf("%lf %lf %lf %lf %lf %lf %lf", &x, &y, &x0, &y0, &r, &w, &h);
  /*ako je rastojanje izmedju tacke i centra kruga manje ili jednako poluprecniku kruga, onda tacka pripada krugu, u suprotnom ne pripada*/
  if(sqrt(pow(x-x0,2)+pow(y-y0,2))<=r) printf("jeste u krugu\n"); 
  else printf("nije u krugu\n");
  /*tacka (x,y) pripada pravougaoniku sa centrom (x0,y0) ako se x i x0 razlikuju za manje ili jednako od pola sirine pravougaonika, a y i y0 za manje od pola visine pravougaonika, u suprotnom tacka ne pripada tom pravougaoniku - sve ovo vazi pod pretpostavkom da su stranice pravougaonika paralelne osama koordinatnog sistema*/
  if(fabs(x-x0)<= w/2 && fabs(y-y0)<= h/2) printf("jeste u pravougaoniku\n");
  else printf("nije u pravougaoniku\n");
  return 0;
}
