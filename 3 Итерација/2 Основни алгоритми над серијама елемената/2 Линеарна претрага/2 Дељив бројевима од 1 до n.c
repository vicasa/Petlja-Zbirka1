#include<stdio.h>

int main(){
	unsigned k, n;
	scanf("%u %u", &k, &n);
	for(unsigned i=1; i<=n; i++){
		if(k%i) {printf("ne\n"); return 0;}
	}
	printf("da\n");
}
