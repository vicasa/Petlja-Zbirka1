#include<stdio.h>

int main(){
	int n;
	scanf("%i", &n);
	if(n<=1) {printf("\n"); return 0;}
	for(int i=0; i<=n; i++)
		for(int j=0; j<=n; j++)
			if(j!=i)
				for(int k=0; k<=n; k++)
					if(k!=i && k!=j) printf("%i %i %i\n", i, j, k);
}
