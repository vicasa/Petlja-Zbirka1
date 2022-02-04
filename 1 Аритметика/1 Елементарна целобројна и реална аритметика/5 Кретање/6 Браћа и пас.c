#include<stdio.h>
/*ideja je da se odredi vreme koje ce proci do susreta brace, a onda da se vidi koliki je put presao pas za to vreme,
a to je lako s obzirom da zanamo prosecnu brzinu kretnaja psa*/
int main(){
	double d, v1, v2, v_p, t;
	scanf("%lf %lf %lf %lf", &d, &v1, &v2, &v_p);
	d /=1000; /*nakon ovoga d je u km*/
	t = d/(v1+v2); /*fizika - vreme do susreta brace u h*/
	t *= 3600; /*nakon ovoga t je u s, pa su uskladjene mere za psa*/
	printf("%.2lf\n", t*v_p); /* t*v_p je put koji je presao pas u metrima*/
}
