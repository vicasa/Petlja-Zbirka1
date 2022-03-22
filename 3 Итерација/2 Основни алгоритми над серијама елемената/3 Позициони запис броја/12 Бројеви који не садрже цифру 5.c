#include<stdio.h>

int f(int n){
	while(n!=0){ 
		if(n%10 == 5) return 0;
		n /= 10; 
	}
	return 1;
}

int main(){
	unsigned n, brojac=0;
	while(scanf("%u", &n) != -1) if(f(n)) brojac++;
	
	printf("%u\n", brojac);
}
