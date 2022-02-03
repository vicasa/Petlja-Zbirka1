#include<stdio.h>

int main(){
	double v0, a;
	scanf("%lf %lf", &v0, &a);
	printf("%.2lf\n%.2lf\n", v0*60+(a*60*60)/2, v0+a*60); /*neposredna primena formula iz zadatka, jedinica za vreme je sekund, pa je zbog toga t jednako 60*/
}
