#include<stdio.h>

int main(){
	int b;
	scanf("%i", &b);
	for(int i=0; i<b; i++)
		for(int j=0; j<b; j++)
			for(int k=0; k<b; k++){
				if(i>=10) printf("%c", 97+i-10);
				else printf("%i", i);
				if(j>=10) printf("%c", 97+j-10);
				else printf("%i", j);
				if(k>=10) printf("%c\n", 97+k-10);
				else printf("%i\n", k);
			}
}
