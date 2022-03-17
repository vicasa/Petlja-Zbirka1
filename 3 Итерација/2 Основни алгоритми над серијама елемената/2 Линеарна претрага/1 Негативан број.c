#include<stdio.h>

int main(){
	unsigned n;
	scanf("%u", &n);
	for(unsigned i=1; i<=n; i++){
		double x;
		scanf("%lf", &x);
		if(x < 0) {printf("da\n"); return 0;}
	}
	printf("ne\n");
}
