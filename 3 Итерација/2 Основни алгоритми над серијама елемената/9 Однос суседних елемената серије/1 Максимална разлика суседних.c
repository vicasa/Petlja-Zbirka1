#include<stdio.h>
#include<stdlib.h>
int main(){
	int max=0, n, prev, curr, diff;
	scanf("%i %i", &n, &prev);
	for(int i=1; i<n; i++){
		scanf("%i", &curr);
		diff = abs(curr-prev);
		if(diff > max) max=diff;
		prev = curr;
	}
	printf("%i\n", max);
}
