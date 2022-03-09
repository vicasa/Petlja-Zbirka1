#include<stdio.h>

int main(){
	int ocena;
	
	scanf("%i", &ocena); /*prva ocena*/
	int min=ocena, max=ocena, zbir=ocena;
	
	scanf("%i", &ocena); /*druga ocena*/
	zbir += ocena;
	if(ocena < min) min =ocena;
	if(ocena > max) max =ocena;
	
	scanf("%i", &ocena); /*treca ocena*/
	zbir += ocena;
	if(ocena < min) min =ocena;
	if(ocena > max) max =ocena;	
	
	scanf("%i", &ocena); /*cetvrta ocena*/
	zbir += ocena;
	if(ocena < min) min =ocena;
	if(ocena > max) max =ocena;
	
	scanf("%i", &ocena); /*peta ocena*/
	zbir += ocena;
	if(ocena < min) min =ocena;
	if(ocena > max) max =ocena;

	printf("%.2lf\n", (zbir-min-max)/(3.0));
}
