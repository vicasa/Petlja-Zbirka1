#include<stdio.h>
#include<math.h>
int main(){
	int n;
	double t, p;
	scanf("%i %lf %lf", &n, &t, &p);
	printf("%.2lf\n", t*pow(1+p/100, n-1));
}
