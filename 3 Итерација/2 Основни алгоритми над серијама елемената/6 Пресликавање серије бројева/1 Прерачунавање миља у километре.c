#include<stdio.h>

int main(){
	int a, b, k;
	scanf("%i %i %i", &a, &b, &k);
	for(int i=a; i<=b; i+=k ){
		printf("%i mi = %.6lf km\n", i, i*1.609344);
	}
}
