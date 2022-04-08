#include<stdio.h>

int main(){
	int n;
	scanf("%i", &n);
	for(int i=1; i<=n-2; i++)
		for(int j=i+1; j<=n-1; j++)
			for(int k=j+1; k<=n; k++)
				printf("%i %i %i\n", i, j, k);
}
