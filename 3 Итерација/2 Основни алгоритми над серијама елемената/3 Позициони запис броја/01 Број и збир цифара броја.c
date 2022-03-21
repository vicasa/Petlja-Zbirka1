#include<stdio.h>


int main(){
	unsigned n, br=0, zb=0;
	scanf("%u", &n);
	while(n!=0){ /*u svakoj iteraciji obradjujemo jednu cifru i brisemo je iz broj nakon obrade - sve ovo zdesna na levo*/
		br++; /*cim smo u iteracii zanaci da ima cifra da se obradi, zato broj cifara podizemo za 1*/
		zb += n%10; /*uzimamo poslednju cifru iz n, to je n%10 i dodajemo je u zbir cifara*/
		n /= 10; /*brisemo obradjenu cifru*/
	}
	printf("%u %u\n", br==0 ? br+1 : br, zb); /*ako je br 0, to znaci da u while-u nije bila ni jedna iteracija, ato se desava jedino ako je n=0; a ovde se uzima da je 0 jednocifren broj*/
}
