#include<stdio.h>

int main(){
	int a,b;
	scanf("%i %i", &a, &b);
	a += a%2; //ako je a paran, a se nece promeniti, inace se podize za 1 i tako postaje prvi paran veci od ucitanog a
	a = a < 100 ? 100 : a;
	b = b > 999 ? 999 : b;
	if(a > b) {printf("\n"); return 0; } //Ovo samo zato sto Petlja zahteva da se pise po izlazu cak i kada nema sta da se napise
 	for(int i=a; i<=b; i+=2) printf("%i\n", i);
}

