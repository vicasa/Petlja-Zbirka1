#include <stdio.h>

int main(){
  double a1, b1, a2, b2, amin, amax, bmin, bmax;
  scanf("%lf %lf %lf %lf", &a1, &b1, &a2, &b2);
  if(a1 <= a2){
  	amin = a1;
  	amax = a2;
  }
  else{
  	amin = a2;
  	amax = a1;
  }
  if(b1 <= b2){
  	bmin = b1;
  	bmax = b2;
  }
  else{
  	bmin = b2;
  	bmax = b1;
  }
  printf("%.2lf %.2lf\n", amin, bmax);
  
  if(amax<=bmin) printf("%.2lf %.2lf\n%.2lf\n", amax, bmin, bmax - amin);
  else printf("presek ne postoji\n%.2lf", b2-a2 + b1-a1);

  return 0;
}
