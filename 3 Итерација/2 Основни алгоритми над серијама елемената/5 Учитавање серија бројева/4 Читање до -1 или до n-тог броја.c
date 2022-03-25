#include<stdio.h>

int main(){
	unsigned n, z=0;
	int p;
	scanf("%u", &n);
	for(unsigned i=1; i<=n; i++){
		scanf("%i", &p);
		if(p == -1) break;
		z += p*p;
	}
	printf("%i\n", z);
}
