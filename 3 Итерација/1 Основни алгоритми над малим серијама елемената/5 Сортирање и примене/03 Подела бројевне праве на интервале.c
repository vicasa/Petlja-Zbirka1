#include<stdio.h>

int main(){
	float a, b, c, x, temp;
  scanf("%f %f %f %f", &a, &b, &c, &x);
  /*sortiramo promenljive a,b,c*/
  if(a > b){
  	temp = a;
  	a = b;
  	b = temp;
  }
  if(a > c){
  	temp = a;
  	a = c;
  	c = temp;
  }
  if(b > c){
  	temp = b;
  	b = c;
  	c = temp;
  }
  if(x < a) printf("1\n");
  else
  	if(x < b) printf("2\n");
  	else
  		if(x < c) printf("3\n");
  		else printf("4\n");
 
}
