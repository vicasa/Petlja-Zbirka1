#include<stdio.h>

int main(){
	double p, brojac=0, s=0;
	while(scanf("%lf", &p)!=-1){
		brojac += 1;
		s += p;
	}
	printf("%.5lf\n", s/brojac);
}
