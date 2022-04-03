#include<stdio.h>
#include<math.h>
/*ovde je potrebno odrediti najvece rastojanje od tacke sa ulaza do koordinatnog pocetka*/
int main(){
	int n, i;
	double x, y, r2, max2; /*r2 je kvadrat rastojanja; sto je rastojanje vece, veci je njegov kvadrat; i obrnuto*/
	scanf("%i %lf %lf", &n, &x, &y);
	max2 = x*x + y*y;
	i=2;
	for(; i<=n; i++){
		scanf("%lf %lf", &x, &y);
		r2 = x*x + y*y;
		if(r2 > max2) max2=r2;
	}
	printf("%.5lf\n", sqrt(max2));
}
