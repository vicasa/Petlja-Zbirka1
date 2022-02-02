#include<stdio.h>

int main(){
	unsigned n;
	double s;
	unsigned m;
	scanf("%i %lf %i", &n, &s, &m);
	printf("%.2lf\n", (n*s)/(n+m));/*matematicki na papiru se izvede formula, tj. izraz cija je vrednost jednaka datom broju*/
}
