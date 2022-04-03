#include<stdio.h>

/*ovde je potrebno odrediti najvece rastojanje od tacke sa ulaza do koordinatnog pocetka*/
int main(){
	int n, maxi;
	double c, maxc; 
	scanf("%i %lf", &n, &maxc);
	maxi = 1;
	for(int i=2; i<=n; i++){
		scanf("%lf", &c);
		if(c > maxc) {maxc=c; maxi=i;}
	}
	printf("%i\n", maxi);
}
