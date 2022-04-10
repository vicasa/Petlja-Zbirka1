#include<stdio.h>
int main(){
	int n;
	scanf("%i", &n);
	for(int i=1; i<=n; i++){
		int endj=n-i+1;
		for(int j=1; j<endj; j++)
			printf(" ");
		for(int j=1; j<=n; j++)
			printf("*");
		printf("\n");
	}
}
