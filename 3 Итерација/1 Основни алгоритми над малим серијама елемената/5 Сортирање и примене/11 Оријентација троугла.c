#include<stdio.h>

int main(){
	unsigned a, b, c, temp, brojac_zamena=0;
  scanf("%u %u %u", &a, &b, &c);
  /*sortiramo promenljive a,b,c*/
  if(a > b){
  	brojac_zamena++;
  	temp = a;
  	a = b;
  	b = temp;
  }
  if(a > c){
  	brojac_zamena++;
  	temp = a;
  	a = c;
  	c = temp;
  }
  if(b > c){
  	brojac_zamena++;
  	temp = b;
  	b = c;
  	c = temp;
  }
	
	printf("%u %u %u\n", a, b, c);
  
  /*treba uvideti ako se tokom sortiranja napravi paran broj zamena (0 ili 2) orjentacija se nije promenila,
  dok ako se napravi neparan broj zamena (1 ili 3) orjentacija se promenila
  To se uvidja sledecom invarijantom: pri bilo kojoj zameni orjentacija se promeni;
  kako ima dve orjentacije, to posle prve zamene orjentacija je "druga", posle druge zamene orjentacija je "prva", posle trece zamene orjentacija je "druga", ...
  */
  if(brojac_zamena%2 == 0) printf("isto\n"); 
  else printf("suprotno\n");
}
