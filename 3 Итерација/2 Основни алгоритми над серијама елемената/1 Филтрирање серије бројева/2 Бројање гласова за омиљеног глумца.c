#include<stdio.h>

int main(){
	unsigned x, n, b, brojac=0;
	scanf("%u %u", &x, &n);
	for(unsigned i=1; i<=n; i++){
		scanf("%u", &b);
		if(b == x) brojac++;
	}
	printf("%u\n", brojac);
}
