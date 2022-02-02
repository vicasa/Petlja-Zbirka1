#include<stdio.h>
#include<math.h>

/*O n-tom korenu pozitivnog broja

Ako imamo POZITIVAN broj x i PRIRODAN broj n, i pitamo se za koji POZITIVAN broj y
vazi da kad se pomnozi sam sa sobom n puta dobije se x (tj. nase pitanje je x=?^n).

Takav broj y uvek postoji i jedinstven je. On se naziva n-ti koren broja x.
Primetimo da ako je n=2 onda se radi o obiznom korenu.
n-ti koren broja x se obelezava tako sto se iznad 'korena' standardnog simbola korena stavi broj n.

Primer: treci koren broja 8 je 2 jer je 8=2^3, cetvrti koren broja 625 je 5 jer je 625=5^4.

Dalje, pomocu pojma n-tog korena, definise se stepen ciji je eksponent razlomak.
Definicija:
x^(1/n) predstavlja n-ti koren broja x

Primer:
16^(1/4) = 4-ti koren broja 16 = 2

*/

int main(){
	double x;
	unsigned n;
	scanf("%lf %i", &x, &n);
	printf("%.5lf\n%.5lf\n", pow(x,n), pow(x,1.0/n));
}
