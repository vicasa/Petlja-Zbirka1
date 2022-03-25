#include<stdio.h>

int main(){
	unsigned brojac=0;
	int ulaz;
	
	while(scanf("%i", &ulaz)!=-1)		brojac++;
	
	printf("%u\n", brojac);
}
