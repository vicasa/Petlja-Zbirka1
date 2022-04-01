#include<stdio.h>

int main(){
	int n;
	double a, q;
	scanf("%i %lf %lf", &n, &a, &q);
	double s=a;
	for(int i=1; i<n; i++){
		a *= q; /*naredni sabirak*/
		s += a;
	}
	printf("%.5lf\n", s);
}
