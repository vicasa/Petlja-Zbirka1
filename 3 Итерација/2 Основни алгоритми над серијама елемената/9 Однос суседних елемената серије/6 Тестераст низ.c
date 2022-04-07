#include<stdio.h>
int main(){
	int n, prev, curr, flag;
	scanf("%i %i %i", &n, &prev, &curr);
	if(prev < curr) flag=0;
	else
	 if (prev > curr) flag=1;
	 else {printf("NE\n"); return 0;}
	 
	prev = curr;
	
	for(int i=3; i<=n; i++){
		scanf("%i", &curr);
		if(prev == curr) {printf("NE\n"); return 0;}
		if(prev < curr){
			if(flag == 0) {printf("NE\n"); return 0;}
			flag=0;
		}
		else{
			if(flag == 1) {printf("NE\n"); return 0;}
			flag=1;
		}
		prev = curr;
	}
	printf("DA\n");
}
