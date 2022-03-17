#include<stdio.h>

int main(){
	unsigned n;
	scanf("%u", &n);
	for(unsigned i=1; i<=n; i++){
		int t;
		scanf("%i", &t);
		if(t<0) {printf("%u\n",i); return 0;}
	}
	printf("-1\n");
}
