#include<stdio.h>

int prestupna(int godina){
	return godina%4==0 && (godina%100!=0 || godina%400==0);
}

int broj_dana(int mesec, int godina){ /*u mesecu*/
	switch(mesec){
	case 4:
	case 6:
	case 9:
	case 11:
	return 30;
	case 2:
	if(prestupna(godina)) return 29;
	return 28;
	default: return 31;
	}
}

int main(){
	int dan, mesec, godina;
	scanf("%i %i %i", &dan, &mesec, &godina);
	/*
	ovaj kod se razlikuje od onog iz Grananje/Ugnezhdjeno grananje/Razni zadaci... 
	po tome sto imamo jedan printf za koga vrednosti pripremamo u promenljivima
	*/
	if(dan< broj_dana(mesec, godina)) dan++;
	else
		if(mesec<12) {dan =1; mesec++;}
		else {dan=1; mesec=1; godina++;}
	
	printf("%i.%i.%i.\n", dan, mesec, godina);
}
