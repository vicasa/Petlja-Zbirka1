#include<stdio.h>
int main(){
	int prev, curr;
	scanf("%i", &prev);
	prev %= 2;
	while(scanf("%i", &curr)!=-1){
		curr %= 2;
		if(curr < prev) {printf("ne\n"); return 0;}
		prev = curr;
	}
	printf("da\n");
}
