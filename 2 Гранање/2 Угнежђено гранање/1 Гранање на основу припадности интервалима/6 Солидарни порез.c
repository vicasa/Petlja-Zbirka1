#include <stdio.h>


int main(){
  double b, n;
  scanf("%lf", &b);
  if(b>=1e5) n = b - (0.25)*(b-1e5) - 0.2*40000;
  else
  	if(b>60000) n = b - 0.2*(b-60000);
  	else n=b;
 			
  printf("%.2lf\n", n);
}
