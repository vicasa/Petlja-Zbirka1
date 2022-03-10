#include<stdio.h>

int main(){
	unsigned a, b, c, p, q, temp;
  scanf("%u %u %u %u %u", &a, &b, &c, &p, &q);
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
  /*sortiramo promenljive p,q*/
  if(p > q){
  	temp = p;
  	p = q;
  	q = temp;
  }
  
  if(a <= p && b<=q) printf("da\n");
  else printf("ne\n");
 
}
