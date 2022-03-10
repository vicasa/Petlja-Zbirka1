#include<stdio.h>

int main(){
	/*
	poenta lekcije sortiranje je da se koriste nizovi,
	a onda i ugradjene funkcije za sortiranje nizova;
	stoga se i ovoj lekciji ponovljaju programi od ranije,
	kako bi se resili pomocu sortiranja nizova,
	ja to necu raditi, pa cu zbog toga prosto kopirati kod od ranije
	*/
	int ocena;
	
	scanf("%i", &ocena); /*prva ocena*/
	int min=ocena, zbir=ocena;
	
	scanf("%i", &ocena); /*druga ocena*/
	zbir += ocena;
	if(ocena < min) min =ocena;
	
	scanf("%i", &ocena); /*treca ocena*/
	zbir += ocena;
	if(ocena < min) min =ocena;	
	
	scanf("%i", &ocena); /*cetvrta ocena*/
	zbir += ocena;
	if(ocena < min) min =ocena;
	
	scanf("%i", &ocena); /*peta ocena*/
	zbir += ocena;
	if(ocena < min) min =ocena;

	printf("%.2lf\n", (zbir-min)/(4.0));
}
