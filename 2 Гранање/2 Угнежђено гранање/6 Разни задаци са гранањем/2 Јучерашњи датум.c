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
	if(dan > 1) printf("%i.%i.%i.\n", dan-1, mesec, godina);
	else
		if(mesec > 1) {
			mesec--;
			printf("%i.%i.%i.\n", broj_dana(mesec, godina), mesec, godina);
		}
		else printf("31.12.%i.\n", godina-1);
}
