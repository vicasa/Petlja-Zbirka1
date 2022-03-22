#include<stdio.h>

int main(){
	unsigned a, b, kM=0, kV=0, dj=1;

	scanf("%u %u", &a, &b);

	while(a!=0 || b!=0){
		unsigned m, v;

		m = a%10;
		v = b%10;
		
		if(m > v){
			unsigned temp=m;
			m = v;
			v = temp;
		}
		
		kM += m*dj;
		kV += v*dj;
		
		a /= 10;
		b /= 10;
		dj *= 10;		
	}
	printf("%u\n%u\n", kM, kV);
}
