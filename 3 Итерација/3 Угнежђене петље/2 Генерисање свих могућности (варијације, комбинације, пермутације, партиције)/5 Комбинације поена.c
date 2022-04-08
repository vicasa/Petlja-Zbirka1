#include<stdio.h>

int main(){
	int X, gi, gj;
	scanf("%i", &X);
	gi=X/3;
	for(int i=0; i<=gi; i++){
		gj=(X-i*3)/2;
		for(int j=0; j<=gj; j++)
			printf("%i %i %i\n", i, j, X-(3*i+2*j));
	}
}
