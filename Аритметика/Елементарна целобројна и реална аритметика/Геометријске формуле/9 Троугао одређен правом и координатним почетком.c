#include<stdio.h>
#include<math.h>
int main(){
  double a, b;
  scanf("%lf %lf", &a, &b);
  a = fabs(b / a); /*kateta na x osi. fabs(-b/a)=fabs(b/a) */
  b = fabs(b); /*kateta na y osi*/
  printf("%.2lf\n%.2lf\n", a*b/2, a+b+sqrt(pow(a, 2) + pow(b, 2)));
}
