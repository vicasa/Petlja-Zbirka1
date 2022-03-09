#include<stdio.h>

int main(){
	int t1, t2, t3, t4, prag, brojac=0, zbir=0;
	scanf("%i %i %i %i %i", &t1, &t2, &t3, &t4, &prag);
	
	if(t1 < prag) {zbir += t1; brojac++;}
	if(t2 < prag) {zbir += t2; brojac++;}
	if(t3 < prag) {zbir += t3; brojac++;}
	if(t4 < prag) {zbir += t4; brojac++;}
	
	printf("%i\n", 4-brojac);
	if(brojac==0) printf("-\n");
	else printf("%.2f\n", ((float)zbir)/brojac);
}
