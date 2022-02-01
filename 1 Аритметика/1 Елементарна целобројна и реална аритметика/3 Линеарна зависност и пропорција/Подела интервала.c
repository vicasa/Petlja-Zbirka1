#include<stdio.h>

int main(){
	double a, b;
	unsigned p,q;
	scanf("%lf %lf %i %i", &a, &b, &p, &q);
	printf("%.2lf\n", (a*q+b*p)/(p+q));/*matematicki na papiru se izvede formula, tj. izraz cija je vrednost jednaka datom broju*/
}
