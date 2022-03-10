#include<stdio.h>
#include<math.h>

double pretek(double tA, double vA, double tB, double vB){/*funkcija vrac dobru vrednost ako tA < tB*/
	return vB>vA ? (tB*vB - tA*vA)/(vB-vA) : 0;
}

int main(){
	double t1, t2, t3, t, v1, v2, v3, p, pMax;
	scanf("%lf %lf %lf %lf %lf %lf", &t1, &v1, &t2, &v2, &t3, &v3);
	
	pMax = pretek(t1, v1, t2, v2);
	
	p = pretek(t1, v1, t3, v3);
	if(p > pMax) pMax=p;
	
	p = pretek(t2, v2, t3, v3);
	if(p > pMax) pMax=p;
	
	if(pMax==0) printf("nema\n");
	else printf("%.2lf\n", pMax);
}
