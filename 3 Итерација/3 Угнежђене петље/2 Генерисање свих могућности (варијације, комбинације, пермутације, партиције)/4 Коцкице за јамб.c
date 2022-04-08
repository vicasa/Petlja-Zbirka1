#include<stdio.h>

int main(){
	int X, x;
	scanf("%i", &X);
	for(int i=1; i<=6; i++){
		if(i>=X-1) break;
		for(int j=1; j<=6; j++){
			if(i+j>=X) break;
			x=X-(i+j);
			if(x<=6) printf("%i %i %i\n", i, j, x);
		}
	}
}
