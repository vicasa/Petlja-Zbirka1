#include<stdio.h>

int main(){
	/*
	ovo resenje je razlikuje od resenja iz grananje/ugnezdjeno grananje/razni zadaci...
	po tome sto se koristi jedan par promenljivih za sve uglove i svaki ugao se obradjuje u jednom prolazu
	*/
	unsigned s, m, zbir, max;
  
  scanf("%u %u", &s, &m); /*1. ugao*/
  m += 60*s;
  if(m==0) {printf("ne\n"); return 0;} /*svi uglovi u trouglu su veci od 0 stepeni*/
  zbir = m;
  max = m;
  
  scanf("%u %u", &s, &m); /*2. ugao*/
  m += 60*s;
  if(m==0) {printf("ne\n"); return 0;}
  zbir += m;
  if(m > max) max = m;
  
  scanf("%u %u", &s, &m); /*3. ugao*/
  m += 60*s;
  if(m==0) {printf("ne\n"); return 0;}
  zbir += m;
  if(m > max) max = m;
  
  if(zbir != 180*60) {printf("ne\n"); return 0;}
  
 	int prav = 90*60;
 	
  if(max > prav) printf("tupougli\n"); 
  else
  	if (max == prav) printf("pravougli\n");
  	else printf("ostrougli\n");
}
