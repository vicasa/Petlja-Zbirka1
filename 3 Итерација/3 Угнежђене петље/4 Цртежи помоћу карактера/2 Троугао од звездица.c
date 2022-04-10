#include<stdio.h>
int main(){
	int n;
	scanf("%i", &n);
	for(int i=1; i<=n; i++){
		int endj=n+i-1;
		for(int j=1; j<=endj; j++)
			if(j<=n-i) printf(" ");
			else printf("*");
		printf("\n");
	}
}
