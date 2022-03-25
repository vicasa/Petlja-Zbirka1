#include<stdio.h>

int main(){
	unsigned brojac=0;
	int ulaz;
	scanf("%i", &ulaz);
	while(ulaz!=0){
		brojac++;
		scanf("%i", &ulaz);
	}
	printf("%u\n", brojac);
}
