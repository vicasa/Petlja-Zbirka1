#include<stdio.h>

int main(){
	int n, a, b, c, d;
	scanf("%i", &n);
	/*pre prve podele, nepotrebno ali nam daje "isti" kod nakon podele SVAKOG od brace*/
	a = n;
	b = 0;
	c = 0;
	d = 0;
	/*nakon acine podele*/
	b += a/3;
	c += a/3;
	d += a/3;
	a = 0;
	/*nakon brankove podele*/
	a += b/3;
	c += b/3;
	d += b/3;
	b = 0;
	/*nakon canetove podele*/
	a += c/3;
	b += c/3;
	d += c/3;
	c = 0;
	/*nakon dusanove podele*/
	a += d/3;
	b += d/3;
	c += d/3;
	d = 0;
	
	printf("%i\n%i\n%i\n%i\n", a, b, c, d);
}
