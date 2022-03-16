#include<stdio.h>

int main(){
	unsigned n, t, brojac1=0, brojac2=0, brojac3=0;
	scanf("%u", &n);
	for(unsigned i=1; i<=n; i++){
		scanf("%u", &t);
		if(t > 75) brojac3++;
		else
			if(t>50) brojac2++;
			else brojac1++;
	}
	
	printf("%u\n%u\n%u\n", brojac1, brojac2, brojac3);
}
