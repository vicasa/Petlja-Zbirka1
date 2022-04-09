#include<stdio.h>
int main(){
	int n;
	scanf("%i", &n);
	for(int i=1; i<=n; i++){
		for(int j=i; j<=n; j++)
			printf("%i ", j);
		printf("\n");
	}
}
