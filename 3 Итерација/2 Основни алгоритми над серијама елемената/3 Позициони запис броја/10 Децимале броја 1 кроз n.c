#include<stdio.h>

int main(){
	unsigned k, n, d;
	scanf("%u %u", &k, &n);
	/*imitiramo pismeni postupak odredjivanja racionalnog kolicnika (u decimalnom zapisu) dva prirodna broja, izuzev sto odjednom odredjujemo ceo deo, tj onaj deo koji stoji ispred zareza */
	d=1;
	printf("%u,", d/n);/*ovim smo ispisali ceo deo od razlomka d/n*/
	d = (d%n)*10; /*ostatak mnozimo sa 10 i to u narednom koraku delimo sa deliocem i tako dobijamo sledecu decimalu*/
	for(int i=1; i<=k; i++){
		printf("%u", d/n); 
		d = (d%n)*10;
	}
	printf("\n");
}
