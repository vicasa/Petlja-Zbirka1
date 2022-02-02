#include<stdio.h>

int main(){
	double x, a, b;
	scanf("%lf %lf %lf", &x, &a, &b);
	printf("%.5lf\n", x*(b-a)+a);/*mnozenjem sa b-a, [0,1] preslikavamo u [0,b-a]. Sabiranjem sa a, [0,b-a] preslikavamo u [a,b]*/
}
