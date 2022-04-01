#include<stdio.h>

int main(){
	double x, s=1;
	int n;
	scanf("%lf %i", &x, &n);
	for(int i=1; i<=n; i++) s *= x;
	printf("%.5lf\n", s);
}
