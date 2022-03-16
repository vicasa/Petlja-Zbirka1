#include<stdio.h>

int main(){
	unsigned n, b;
	scanf("%u", &n);
	for(unsigned i=1; i<=n; i++){
		scanf("%u", &b);
		if(b%3 == 0) printf("%u\n", b);
	}
}
