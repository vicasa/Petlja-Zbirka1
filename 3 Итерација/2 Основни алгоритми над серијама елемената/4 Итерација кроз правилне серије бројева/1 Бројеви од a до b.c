#include<stdio.h>

int main(){
	int a,b;
	scanf("%i %i", &a, &b);
  if (a<=b) for(int i=a; i<=b; i++) printf("%i\n", i);
  else printf("\n");/*ovaj else sluzi da bi na Petlji proslo, inace tacno je bez if-a, samo sto se tada ne pise na izlaz pa Petlja prijavljuje RTE*/
}

