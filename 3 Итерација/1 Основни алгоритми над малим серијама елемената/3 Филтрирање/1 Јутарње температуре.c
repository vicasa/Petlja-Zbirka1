#include<stdio.h>

int main(){
	double t1, t2, t3, t4, prosek;
	int rez=0;
	scanf("%lf %lf %lf %lf", &t1, &t2, &t3, &t4);
	
	prosek = (t1 + t2 + t3 + t4)/4;
	
	if(t1 < prosek) rez++;
	if(t2 < prosek) rez++;
	if(t3 < prosek) rez++;
	if(t4 < prosek) rez++;
	
	printf("%.2lf\n%i\n", prosek, rez);
}
