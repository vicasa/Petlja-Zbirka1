#include<stdio.h>

int main(){
	unsigned M,V, n, zbirM=0, zbirS=0, zbirV=0;
	scanf("%u %u %u", &M, &V, &n);
	for(unsigned i=1, X; i<=n; i++){
		scanf("%u", &X);
		if(X > V) zbirV += X;
		else
			if(X > M) zbirS += X;
			else zbirM += X;
	}
	printf("%u\n%u\n%u\n", zbirM, zbirS, zbirV);
}
