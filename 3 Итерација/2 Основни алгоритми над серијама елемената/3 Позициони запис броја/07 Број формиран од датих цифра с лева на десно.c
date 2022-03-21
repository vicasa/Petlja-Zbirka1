#include<stdio.h>

int main(){
	unsigned c, b=0;
	
	while(scanf("%u", &c) != -1) b = b*10 + c; /*ovim dodajemo cifru c na desnu stranu broja b*/
	
	printf("%u\n", b);
}
