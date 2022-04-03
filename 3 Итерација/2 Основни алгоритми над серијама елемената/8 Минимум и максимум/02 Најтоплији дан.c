#include<stdio.h>
int main(){
	int d, t, max;
	scanf("%i", &t);
	d=1;
	max=t;
	for(int i=2; i<=7; i++){
		scanf("%i", &t);
		if(t>max) {max =t; d=i;}
	}
	printf("%i\n", d);
}
