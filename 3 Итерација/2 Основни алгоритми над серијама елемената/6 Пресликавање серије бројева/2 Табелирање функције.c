#include<stdio.h>

int main(){
	double v, a, T, deltaT;
	scanf("%lf %lf %lf %lf", &v, &a, &T, &deltaT);
	double deltaS = (v+a*deltaT/2)*deltaT, t=0, s=0;
	while(t<=T){
		printf("%.5lf\n", s);
		s += deltaS + a*t*deltaT;
		t += deltaT;
	}
}
