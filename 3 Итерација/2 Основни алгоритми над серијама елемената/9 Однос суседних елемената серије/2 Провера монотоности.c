#include<stdio.h>
int main(){
	int n, prev, curr;
	scanf("%i %i", &n, &prev);
	for(int i=1; i<n; i++){
		scanf("%i", &curr);
		if(curr <= prev) {printf("Ne\n"); return 0;}
		prev = curr;
	}
	printf("Da\n");
}
