#include<stdio.h>

int main(){
	double d, v, v_k;
	scanf("%lf %lf %lf", &d, &v, &v_k);
	d /= 1000; /*nakon ovoga d je u km*/
	printf("%.2lf\n", (d/(v_k-v) + d/(v_k+v))*60); /* fizika - d/(v_k-v) je vreme koje biciklisti treba da stigne do celo kolone, a d/(v_k+v) je vreme da se vrati nazad. Kako su ova vremena u h to se na kraju mnozi sa 60 da se dobije vreme u min*/
}
