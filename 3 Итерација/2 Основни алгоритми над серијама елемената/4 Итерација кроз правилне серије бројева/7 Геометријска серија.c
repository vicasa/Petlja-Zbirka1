#include<stdio.h>

int main(){
	unsigned a,b;
	scanf("%u %u", &a, &b);
  while(a<=b){
  	printf("%u\n", a);
  	a *= 3;
  }
}

