#include<stdio.h>
int main(){
	int n, prev, curr;
	scanf("%i", &n);
	prev = n%10;
	n /= 10;
	while(n != 0){
		curr = n%10;
		if(curr <= prev) {printf("NE\n"); return 0;}
		prev = curr;
		n /=10;
	}
	printf("DA\n");
}
