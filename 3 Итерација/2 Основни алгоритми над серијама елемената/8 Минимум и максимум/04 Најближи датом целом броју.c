#include<stdio.h>
int main(){
	int n;
	double x, p, np, r, min;
	scanf("%lf %i %lf", &x, &n, &p);
	if(p < x) r= x-p;
	else
		if(p>x) r= p-x;
		else {printf("%lf", p); return 0;}
	np=p;
	min=r;
	for(int i=1; i<n; i++){
		scanf("%lf", &p);
		if(p < x){
			r= x-p;
			if(r<min){
				min =r;
				np =p;
			}
		}
		else
			if(p>x){
				r= p-x;
				if(r<=min){
					min =r;
					np =p;
				}
			}
			else {printf("%lf", p); return 0;}
	}
	printf("%.2lf\n", np);
}
