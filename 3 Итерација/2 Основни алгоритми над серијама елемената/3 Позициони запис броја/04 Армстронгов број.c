#include<stdio.h>

int broj_cifara(int n){
	int rez=0;
	while(n!=0){
	n /= 10;
	rez++;
	}
	return rez==0? 1 : rez;
}

int stepen(int o, int e){
	int rez=1;
	for(int i=1; i<=e; i++) rez *= o;
	return rez;
}

int armstrong(int n){
	int suma=0, pomoc=n, d=broj_cifara(n);
	while(pomoc!=0){
		int c;
		c = pomoc%10;
		suma += stepen(c, d);
		pomoc /= 10;
	}
	return n==suma;
}

int main(){
	int n;
	scanf("%i", &n);
	if(armstrong(n)) printf("DA\n");
	else printf("NE\n");
	printf("\n");
}
