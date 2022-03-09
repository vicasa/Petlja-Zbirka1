#include<stdio.h>

int main(){
	int cena, ukupno, min;
	
	scanf("%i", &cena); /*1. cena*/
	min = cena;
	ukupno = cena;
	
	scanf("%i", &cena); /*2. cena*/
	if(cena < min) min = cena;
	ukupno += cena;
	
	scanf("%i", &cena); /*3. cena*/
	if(cena < min) min = cena;
	ukupno += cena;
	
	printf("%i\n", ukupno+1-min);
}
