#include<stdio.h>

int main(){
	int n, dan=-1;
	scanf("%i", &n);
	for(int i=1; i<=n; i++){
		int t;
		scanf("%i", &t);
		if(t<0) dan=i;
	}
	printf("%i\n", dan);
}
