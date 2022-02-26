#include <stdio.h>

/*ovo resenje je samo ilustracija hijerarhijskog grananja*/
/*
kada se uporedi sa resenjem iz aritmetika/celobrojno deljenje/pojam celobrojnog kolicnika i ostatka,
vidi se kako se jedan isti problem moze resiti potpuno razlicitim idejama od kojih je jedna ubedljivo efikasnija, elegantnija, inteligentnija,...
kada se resi neki problem i kada mu je resenje rogobatno (suprotno od elegantno, jednostavno, ...) uvek treba razmisliti da li ima neko drugo lepse (bolje resenje)

Dakle, ovo resenje predstavlja rogobatno(lose) resenje, a ono iz aritmetike elegantno(bolje) resenje
*/

int main() {
  unsigned x,y;
  scanf("%u %u", &x, &y);
  if(x<=100)
  	if(y<=100) printf("1\n");
  	else
  		if(y<=200) printf("4\n");
  		else printf("7\n");
  else
  	if(x<=200)
  		if(y<=100) printf("2\n");
  		else
  			if(y<=200) printf("5\n");
  			else printf("8\n");
  	else
  		if(y<=100) printf("3\n");
  		else
  			if(y<=200) printf("6\n");
  			else printf("9\n");
} 
