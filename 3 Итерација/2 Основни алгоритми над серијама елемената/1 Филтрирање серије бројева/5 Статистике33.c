#include<stdio.h>

int main(){
	unsigned n, brojac=0;
	scanf("%u", &n);
	for(unsigned i=1, p, s, a; i<=n; i++){
		scanf("%u %u %u", &p, &s, &a);
		if(p>9 && s>9 && a>9) brojac++;
	}
	
	printf("%u\n", brojac);
}
