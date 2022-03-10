#include<stdio.h>

int main(){
	/*iako bi lakse bilo da se koristi 5 promenljivih za 5 ocena
	ideja je da se zbog generalizacije algoritma (koji se moze implementirati za "bilo koji" broj ocena pomocu petlji)
	to uradi samo sa jednom promenljivom*/
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
