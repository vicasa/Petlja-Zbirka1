#include<stdio.h>
int main(){
	int n, p, max, bmax;
	scanf("%i %i", &n, &p);
	max=p;
	bmax=1;
	for(int i=1; i<n; i++){
		scanf("%i", &p);
		if(p > max){
			max=p;
			bmax=1;
		}
		else
			if(p == max) bmax++;
	}
	printf("%i\n", bmax);
}
