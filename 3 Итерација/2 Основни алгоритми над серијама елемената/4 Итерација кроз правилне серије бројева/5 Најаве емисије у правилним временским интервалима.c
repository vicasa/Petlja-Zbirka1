#include<stdio.h>

int main(){
	unsigned sh, sm, eh, em, step;
	scanf("%u %u %u %u %u", &sh, &sm, &eh, &em, &step);
	while(sh<eh || (sh==eh && sm<=em)){
		printf("%u:%u\n", sh, sm);
		sm += step;
		sh += sm/60;
		sm %= 60;
	}
}

