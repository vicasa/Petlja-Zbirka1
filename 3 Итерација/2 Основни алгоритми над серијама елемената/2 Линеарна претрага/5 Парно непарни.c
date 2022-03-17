#include<stdio.h>

int main(){
	int b, flag=0;
	while(scanf("%i", &b) != -1){
		if(flag==1) {if(b%2 == 0) {printf("ne\n"); return 0;}}
		else if(b%2) flag=1;			
	}
	printf("da\n");
}
