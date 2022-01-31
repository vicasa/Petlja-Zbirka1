#include <stdio.h>
#include<math.h>
double rastojanje_tacaka(double A_x, double A_y, double B_x, double B_y){
  return sqrt(pow(A_x-B_x,2)+ pow(A_y - B_y, 2));
}
double heron(double a, double b, double c){
  double s = (a + b + c) / 2;
  return sqrt(s*(s-a)*(s-b)*(s-c));
}

int main(){
  double A_x, A_y, B_x, B_y, C_x, C_y;
  scanf("%lf%lf%lf%lf%lf%lf", &A_x, &A_y, &B_x, &B_y, &C_x, &C_y);
  printf("%.5lf",heron(rastojanje_tacaka(A_x, A_y, B_x, B_y), rastojanje_tacaka(A_x, A_y, C_x, C_y), rastojanje_tacaka(C_x, C_y, B_x, B_y)));
}
