#include<stdio.h>

int main(){
	double v1, v2, t;
	scanf("%lf %lf %lf", &v1, &v2, &t);
	printf("%.2lf\n", (t*v1)/(v2-v1)); /* fizika - trazeno vreme u sekundama je (t*60*v1)/(v2-v1), a dobija se resavanjem jednacine v1*(x+t*60)=v2*x. Zato je trazeno vreme u minutama jednako ((t*60*v1)/(v2-v1))/60, a to je (t*v1)/(v2-v1)*/
}
