#include<stdio.h>

int main(){
	int n, f=1;
	scanf("%i", &n);
	for(int i=2; i<=n; i++) f *= i;
	printf("%i\n", f);
}
