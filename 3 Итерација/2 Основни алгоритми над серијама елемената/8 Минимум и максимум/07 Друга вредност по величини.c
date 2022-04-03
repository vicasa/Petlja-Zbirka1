#include<stdio.h>
int main(){
	int n, b, max1, max2, i;
	scanf("%i %i", &n, &b);
	max1=b;
	i=1;
	do{
		scanf("%i", &b);
		i++;
	}while(b == max1);
	
	if(b > max1) {max2=max1; max1=b;}
	else max2=b;
	
	for(; i<n; i++){
		scanf("%i", &b);
		if(b > max1){
			max2=max1;
			max1=b;
		}
		else
			if(b > max2 && b<max1) max2=b;
	}
	printf("%i\n%i\n", max1, max2);
}
