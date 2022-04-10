#include<stdio.h>
int main(){
	int n;
	scanf("%i", &n);
	for(int i=n; i>0; i--){
		for(int j=1; j<=i; j++)
			printf("*");
		int endj=2*(n-i);
		for(int j=1; j<=endj; j++)
			printf(" ");
		for(int j=1; j<=i; j++)
			printf("*");
		printf("\n");
	}
	for(int i=2; i<=n; i++){
		for(int j=1; j<=i; j++)
			printf("*");
		int endj=2*(n-i);
		for(int j=1; j<=endj; j++)
			printf(" ");
		for(int j=1; j<=i; j++)
			printf("*");
		printf("\n");
	}
}
