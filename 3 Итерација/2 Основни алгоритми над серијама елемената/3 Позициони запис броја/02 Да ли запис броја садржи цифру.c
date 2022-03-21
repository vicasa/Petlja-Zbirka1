#include<stdio.h>


int main(){
	unsigned n, t, tmp;
	scanf("%u %u", &n, &t);
	tmp = n;
	if(n==t) {printf("broj %u sadrzi cifru %u\n", n, t); return 0;} /*ovo je samo zbog slucaja kad je n==0 i t==0*/
	while(tmp!=0){ 
		if(t == tmp%10) {printf("broj %u sadrzi cifru %u\n", n, t); return 0;}
		tmp /= 10; 
	}
	printf("broj %u ne sadrzi cifru %u\n", n, t);
}
