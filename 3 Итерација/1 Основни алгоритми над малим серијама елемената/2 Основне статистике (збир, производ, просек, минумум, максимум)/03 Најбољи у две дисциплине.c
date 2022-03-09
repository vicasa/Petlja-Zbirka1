#include<stdio.h>

int main(){
	int m, p, u_max, p_max, rez=1; /*promenljiva rez predstavlja redni broj pobednika, u pocetku je 1, ako ima takmicar bolji od 1. takmicara, promenicu rez */
	scanf("%i %i", &m, &p); /*1. takmicar*/
	u_max = m+p;
	p_max=p;
	scanf("%i %i", &m, &p); /*2. takmicar*/
	m += p; /*ne izmisljam novu promenljivu za ukupan broj poena*/
	if(m > u_max || (m==u_max && p>p_max)) {u_max=m; p_max=p; rez=2;}
	
	scanf("%i %i", &m, &p); /*3. takmicar*/
	m += p;
	if(m > u_max || (m==u_max && p>p_max)) rez=3;
	
	printf("%i\n", rez);
}
