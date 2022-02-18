#include <stdio.h>
#include<math.h>

double rastojanje_tacaka(double A_x, double A_y, double B_x, double B_y){
  return sqrt(pow(A_x-B_x,2)+ pow(A_y - B_y, 2));
}

int main(){
  double x0, x1, x, y, rez;
  scanf("%lf %lf %lf %lf", &x0, &x1, &x, &y);
  if(x<x0) rez = rastojanje_tacaka(x, y, x0, 0);
  else
  	if(x<=x1) rez = fabs(y);
  	else rez = rastojanje_tacaka(x, y, x1, 0);
  printf("%.5lf\n", rez);
}
