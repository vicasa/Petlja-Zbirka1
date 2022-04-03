#include<stdio.h>
int main(){
	int n, p, max1, max2;
	scanf("%i %i", &n, &p);
	if(n==1) {printf("\n"); return 0;}
	max1=p;
	scanf("%i", &p);
	if(p > max1) {max2=max1; max1=p;}
	else max2=p;
	
	for(int i=2; i<n; i++){
		scanf("%i", &p);
		if(p > max1){
			max2=max1;
			max1=p;
		}
		else
			if(p > max2) max2=p;
	}
	printf("%i\n", max2);
}
