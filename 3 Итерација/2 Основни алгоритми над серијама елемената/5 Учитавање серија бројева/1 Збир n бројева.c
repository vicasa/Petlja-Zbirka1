#include<stdio.h>

int main(){
	unsigned n;
	int sabirak, zbir=0;
	scanf("%u", &n);
	for(unsigned i=1; i<=n; i++){
		scanf("%i", &sabirak);
		zbir +=sabirak;
	}
	printf("%i\n", zbir);
}
