#include <stdio.h>


int main()
{
	unsigned v1, k1, v2, k2; /*v - vrsta; k - kolona;*/
  scanf("%u %u %u %u", &v1, &k1, &v2, &k2);

	/*ovde je samo bitno za koliko se razlikuju indeksi vrsta i za koliko se razlikuju indeksi kolona*/
	
	
	if(v1 <= v2) v1=v2-v1;
	else v1 = v1-v2;
	/*nadalje, v1 predstavlja za koliko se razlikuju indeksi vrsta*/
	
	if(k1 <= k2) k1=k2-k1;
	else k1 = k1-k2;
	/*nadalje, k1 predstavlja za koliko se razlikuju indeksi kolona*/
	
	
	if(v1 < k1) printf("%u\n", k1); /*ako je v1<k1, kralj ce ici v1 poteza dijagonalno ka destinaciji i k1-v1 poteza vertikalno ka destinaciji- ukupno v1+k1-v1=k1 poteza*/
	else printf("%u\n", v1); /*analogno prethodnom slucaju*/
	
  return 0;
}
