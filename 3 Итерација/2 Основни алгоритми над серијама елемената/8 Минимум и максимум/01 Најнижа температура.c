#include<stdio.h>
int main(){
	int n, t, min;
	scanf("%i %i", &n, &t);
	min=t;
	for(int i=1; i<n; i++){
		scanf("%i", &t);
		if(t<min) min =t;
	}
	printf("%i\n", min);
}
