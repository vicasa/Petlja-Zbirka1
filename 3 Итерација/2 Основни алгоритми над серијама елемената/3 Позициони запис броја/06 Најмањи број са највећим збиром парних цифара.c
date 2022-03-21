#include<stdio.h>

int zbir_parnih_cifara(int n){
	int rez=0, flag=0;
	if(n==0) return 0;
	while(n!=0){
		int c=n%10;
		if(c%2 == 0){
			flag=1;
			rez += c;
		}
		n /= 10;
	}
	return flag? rez : -1;
}

int main(){
	int n, minB, maxZ;
	
	scanf("%i", &n);
	
	if(n == -1) return -1;
	
	maxZ = zbir_parnih_cifara(n);
	
	if(maxZ == -1) minB = -1;
	else minB = n;
	
	scanf("%i", &n);
	
	while(n != -1){
		int Z = zbir_parnih_cifara(n);
		if(Z == -1) {scanf("%i", &n); continue;}
		if(Z > maxZ) {maxZ = Z; minB=n;}
		else if(Z == maxZ && n < minB) minB=n;
		scanf("%i", &n);
	}
	printf("%i\n", minB);
}
