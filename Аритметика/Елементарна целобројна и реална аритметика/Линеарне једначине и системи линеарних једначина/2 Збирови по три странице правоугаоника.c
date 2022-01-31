#include<stdio.h>
int main(){
  double m, n;
  scanf("%lf %lf", &m, &n);
  double zbir_dve=(m+n)/3, a=m-zbir_dve, b=zbir_dve -a; /*a i b su stranice pravougaonika*/
  printf("%.2lf\n%.2lf\n", 2*zbir_dve, a*b);
}
