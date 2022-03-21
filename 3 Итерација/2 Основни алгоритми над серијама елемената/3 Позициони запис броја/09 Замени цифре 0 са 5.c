#include<stdio.h>

int main(){
	unsigned n, temp, dj=1;
	scanf("%u", &n);
	if(n == 0) {printf("5\n"); return 0;}
	temp = n;
	while(temp != 0) {
		unsigned c = temp%10;
		if(c == 0) n += 5*dj; /*ovim cemo na poziciji odredjenoj sa dj, napisati cifru 5 u broju n*/
		dj *= 10; /*podizemo sledecu poziciju za 1*/
		temp /= 10;
	}
	printf("%u\n", n);
}
