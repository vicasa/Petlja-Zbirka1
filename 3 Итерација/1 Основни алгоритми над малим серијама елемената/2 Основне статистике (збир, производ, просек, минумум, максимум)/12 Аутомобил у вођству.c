#include<stdio.h>

double put(double t_start, double v, double t){
	return t>t_start ? (t-t_start)*v : 0;
}

int main(){
	double t1, t2, t3, t, v1, v2, v3, s;
	scanf("%lf %lf %lf %lf %lf %lf %lf", &t1, &v1, &t2, &v2, &t3, &v3, &t);
	
	/*predjene puteve cu upisati u promenljive za brzine, jer brzine vise ne trebaju*/
	v1 =put(t1, v1, t);
	v2 =put(t2, v2, t);
	v3 =put(t3, v3, t);
	
	s=v1;
	
	if(v2 > s) s=v2;
	if(v3 > s) s=v3;
	
	if(v1==s) printf("1\n");
	if(v2==s) printf("2\n");
	if(v3==s) printf("3\n");
}
