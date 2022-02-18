#include <stdio.h>


int main(){
  double s, p;
  unsigned t;
  scanf("%lf %lf %u", &s, &p, &t);
  if(p>=4.5) s *= 0.6;
  else
  	if(t==1) s *= 0.7;
  	else 
  		if(p>=3.5) s *= 0.8;
  		else
  			if(p>=2.5) s *= 0.9;
  			
  printf("%.0lf\n", s);
}
