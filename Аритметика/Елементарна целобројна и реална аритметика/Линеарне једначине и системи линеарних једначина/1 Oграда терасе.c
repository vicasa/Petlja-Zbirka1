#include<stdio.h>
int main(){
  double d, s;
  int n;
  scanf("%lf %i %lf", &d, &n, &s);
  printf("%.2lf\n", (d*100-n*s)/(n+1));
}
