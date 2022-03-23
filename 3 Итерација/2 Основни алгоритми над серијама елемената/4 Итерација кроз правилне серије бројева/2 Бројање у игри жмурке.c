#include<stdio.h>

int main(){
	unsigned x;
	scanf("%u", &x);
  for(unsigned i=5; i<=x; i+=5) printf("%u\n", i);
}

