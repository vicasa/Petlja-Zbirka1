#include<stdio.h>

int main(){
	unsigned c, b=0, dj=1;
	
	while(scanf("%u", &c) != -1) {
		b += c*dj; /*ovim dodajemo cifru c na levu stranu broja b*/
		dj *= 10; /*podesavamo sledecu dekadnu jedinicu, tj. poziciju sledece cifre za dodavanje u b*/
	}
	printf("%u\n", b);
}
