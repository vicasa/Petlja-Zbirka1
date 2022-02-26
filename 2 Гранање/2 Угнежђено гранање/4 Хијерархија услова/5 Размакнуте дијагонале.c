#include <stdio.h>

/*primetimo:
u 1. redu, crna polja su u kolonama ciji su redni brojevi deljivi sa 3,
u 2. redu, crna polja su u kolonama ciji redni brojevi pri deljenju sa 3 imaju ostatak 2,
u 3. redu, crna polja su u kolonama ciji redni brojevi pri deljenju sa 3 imaju ostatak 1,
u 4. redu, crna polja su u kolonama ciji su redni brojevi deljivi sa 3,
u 5. redu, crna polja su u kolonama ciji redni brojevi pri deljenju sa 3 imaju ostatak 2,
u 6. redu, crna polja su u kolonama ciji redni brojevi pri deljenju sa 3 imaju ostatak 1,
i tako u krug

Dakle, 
ako v%3==1 : ako k%3==0 polje je crno u suprotnom je belo
ako v%3==2 : ako k%3==2 polje je crno u suprotnom je belo
ako v%3==0 : ako k%3==1 polje je crno u suprotnom je belo

Sto se lako pise hijerarihijskim grananjem:
  
  if(v%3==1)
  	if(k%3==0) printf("crno\n");
  	else printf("belo\n");
  if(v%3==2)
  	if(k%3==2) printf("crno\n");
  	else printf("belo\n");
  if(v%3==0)
  	if(k%3==1) printf("crno\n");
  	else printf("belo\n");
*/
/*Medjutim,
primetimo da kada od polja (v,k) vucemo sporednu dijagonalu do prvog reda,
doci cemo do polja u koloni v+k-1 (smemo i da izadjemo sa table, tj. da preptostavimo da je tabla na desno beskonacna)
pa ce polje biti crno akko je (v+k-1)%3==0.
Ovo resenje je jos elegantnije od prethodnog
*/
/*
Posto se ponavljaju tri identicne provere, napisacemo funkciju
*/

void ispis(unsigned v, unsigned k){
	if((v+k-1)%3 == 0) printf("crno\n");
  else	printf("belo\n");
}

int main(){
  unsigned v, k;
  scanf("%u %u", &v, &k);
  ispis(v,k);
  scanf("%u %u", &v, &k);
  ispis(v,k);
  scanf("%u %u", &v, &k);
  ispis(v,k);
  return 0;
  /*nije bitno sto u konzoli nece biti odvojen ulaz od izlaza, na petlji proveravaju samo izlaz*/
}
