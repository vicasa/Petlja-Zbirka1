#include <stdio.h>

int main() {
  double x, y;
  scanf("%lf %lf", &x, &y);
  
  if(x<0){
  	if(y<0) printf("3. kvadrant\n");
  	if(y==0) printf("negativni deo x ose\n");
  	if(y>0) printf("2. kvadrant\n");
  }
  if(x==0){
  	if(y<0) printf("negativni deo y ose\n");
  	if(y==0) printf("koordinatni pocetak\n");
  	if(y>0) printf("pozitivni deo y ose\n");
  }
  if(x>0){
  	if(y<0) printf("4. kvadrant\n");
  	if(y==0) printf("pozitivni deo x ose\n");
  	if(y>0) printf("1. kvadrant\n");
  }

  return 0;
}
