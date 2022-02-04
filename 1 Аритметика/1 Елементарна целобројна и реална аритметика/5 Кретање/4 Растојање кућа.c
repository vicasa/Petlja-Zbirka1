#include<stdio.h>

int main(){
	double v1, v2, t, d;
	scanf("%lf %lf %lf %lf", &v1, &v2, &t, &d);
	printf("%.2lf\n", d+ (v2-v1)*t); /* fizika - resi se problem u opstim oznakam, sve mera pasu*/
}
