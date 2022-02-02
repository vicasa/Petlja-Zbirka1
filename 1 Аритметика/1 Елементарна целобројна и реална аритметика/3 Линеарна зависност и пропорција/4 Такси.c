#include<stdio.h>

int main(){
	double c1, c2, c3;
	scanf("%lf %lf %lf", &c1, &c2, &c3);
	double p1=c1/3, p2=p1+(c2-c1)/2, p3=p2+c3-c2;
	printf("%.2lf\n%.2lf\n%.2lf\n", p1,p2,p3);
}
