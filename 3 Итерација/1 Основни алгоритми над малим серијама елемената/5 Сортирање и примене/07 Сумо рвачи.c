#include<stdio.h>

int main(){
	unsigned a, b, c, d, L, temp;
  scanf("%u %u %u %u %u", &a, &b, &c, &d, &L);
  /*sortiramo promenljive a,b,c,d*/
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
  if(a > d){
  	temp = a;
  	a = d;
  	d = temp;
  }
  /**/
  if(b > c){
  	temp = b;
  	b = c;
  	c = temp;
  }
  if(b > d){
  	temp = b;
  	b = d;
  	d = temp;
  }
  /**/
  if(c > d){
  	temp = c;
  	c = d;
  	d = temp;
  }
	if(a+b+c+d<=L) temp=1;
	else
		if(a+b+c<=L || (a+d<=L && b+c<=L)) temp=2;
		else
			if(a+b<=L) temp=3;
			else temp=4;
	printf("%u\n", temp);
}
