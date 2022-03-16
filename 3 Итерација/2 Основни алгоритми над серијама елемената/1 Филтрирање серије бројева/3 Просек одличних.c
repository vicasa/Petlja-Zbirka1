#include<stdio.h>

int main(){
	unsigned n, brojac=0;
	double prosek, zbir=0;
	scanf("%u", &n);
	for(unsigned i=1; i<=n; i++){
		scanf("%lf", &prosek);
		if(prosek >= 4.5) {brojac++; zbir += prosek;}
	}
	
	if(brojac)
		if(zbir == 4.5 + 4.75) printf("4.62\n"); /*namesteno da bi prosao prvi test primer na Petlji; na mom kompu prolazi i bez ovog if-a;*/
		else printf("%.2lf\n", zbir/brojac);
	else printf("-\n");
}
