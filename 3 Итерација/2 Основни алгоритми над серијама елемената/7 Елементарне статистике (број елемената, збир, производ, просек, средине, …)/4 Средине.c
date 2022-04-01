#include<stdio.h>

int main(){
	double v, brojac=0, s1=0, s2=0;
	while(scanf("%lf", &v)!=-1){
		brojac += 1;
		s1 += v;
		s2 += 1/v;
	}
	printf("%.2lf\n%.2lf\n", s1/brojac, brojac/s2);
}
