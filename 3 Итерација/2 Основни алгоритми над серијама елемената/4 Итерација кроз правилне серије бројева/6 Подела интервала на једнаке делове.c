#include<stdio.h>

int main(){
	double a, b, step;
	unsigned n;
	scanf("%u %lf %lf", &n, &a, &b);
	step = (b-a)/(n-1);
	for(unsigned i=1; i<n; i++){
		printf("%.5lf\n", a);
		a += step;
	}
	printf("%.5lf\n", b);
}

