#include<stdio.h>

int main(){
	int O, gi, startj, endj;
	scanf("%i", &O);
	gi=O/3;
	for(int i=1; i<=gi; i++){
		startj = O/2 - i + 1;
		startj = startj<i ? i : startj;
		endj=(O-i)/2;
		for(int j=startj; j<=endj; j++)
			printf("%i %i %i\n", i, j, O-(i+j));
	}
}
