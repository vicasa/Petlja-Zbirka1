#include<stdio.h>

int main(){
	unsigned n, brojac=0;
	scanf("%u", &n);
	for(unsigned i=1, p, m, tmp; i<=n; i++){
		scanf("%u %u %u %u %u %u %u %u %u %u %u", &tmp, &tmp, &tmp, &tmp, &tmp, &m, &tmp, &tmp, &p, &tmp, &tmp);
		if(p==5 && m>3) brojac++;
	}
	
	printf("%u\n", brojac);
}
