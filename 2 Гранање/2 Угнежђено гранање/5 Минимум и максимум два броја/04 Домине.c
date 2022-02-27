#include <stdio.h>

int main(){
  unsigned d11, d12, d21, d22, max1, min1, max2, min2;
  scanf("%u %u %u %u", &d11, &d12, &d21, &d22);
  if(d11<=d12){
  	min1=d11;
  	max1=d12;
  }
  else{
  	min1=d12;
  	max1=d11;
  }
  if(d21<=d22){
  	min2=d21;
  	max2=d22;
  }
  else{
  	min2=d22;
  	max2=d21;
  }
  if(max1<max2) printf("%u%u%u%u\n", max2, min2, max1, min1);
  else 
  	if(max1>max2)  printf("%u%u%u%u\n", max1, min1, max2, min2);
  	else /*slucaj ako je max1==max2, tj. kada su najveci brojevi na obe domine isti - onda uporedjumo najmanje vrednosti na dominama*/
  		if(min1 <= min2) printf("%u%u%u%u\n", max2, min2, max1, min1);
  		else printf("%u%u%u%u\n", max1, min1, max2, min2);
  		
/*Ovaj kod radi je tacno resenje postavljenog zadatka, iako na petlji pokazuje WA,
problem je sto su u njihovim testcase-ovima stavili razmake izmedju cifara na izlazu,
dok to ne poprave, ako hocete da vam resenje na petlji prodje, u printf-u izmedju %u stavite razmake.*/
  return 0;
}
