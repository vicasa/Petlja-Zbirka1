#include<stdio.h>

int sign(int x){
	if(x==0) return 0;
	return x>0 ? 1 : -1;
}

int main(){
	int n, b, s=-1;
	scanf("%i", &n);
	for(int i=1; i<=n; i++){
		int temp;
		scanf("%i", &b);
		temp = sign(b);
		if(temp < s) {printf("ne\n"); return 0;}
		else s=temp;
	}
	printf("da\n");
}
