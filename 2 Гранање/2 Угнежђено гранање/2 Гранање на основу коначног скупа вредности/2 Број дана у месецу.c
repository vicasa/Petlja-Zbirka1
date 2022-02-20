#include<stdio.h>

int prestupna(int godina){
	return godina%4==0 && (godina%100!=0 || godina%400==0);
}

int main(){
	unsigned m, g;
	scanf("%u %u", &m, &g);
	switch(m){
	case 4:
	case 6:
	case 9:
	case 11:
	printf("30\n"); break;
	case 2:
	if(prestupna(g)) return printf("29\n");
	return printf("28\n");
	break;
	default: printf("31\n");
	}
}
