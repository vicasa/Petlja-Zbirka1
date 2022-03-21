#include<stdio.h>

unsigned proizvod_cifara(unsigned n){
	unsigned rez=1;
	if(n==0) return 0;
	while(n!=0){
		rez *= n%10;
		n /= 10;
	}
	return rez;
}

int main(){
	unsigned n, br=0, pr=1;
	scanf("%u", &n);
	while(n>9){ 
		br++; 
		n = proizvod_cifara(n);
		printf("%u\n",n);		
	}
	printf("%u\n", br);
}
