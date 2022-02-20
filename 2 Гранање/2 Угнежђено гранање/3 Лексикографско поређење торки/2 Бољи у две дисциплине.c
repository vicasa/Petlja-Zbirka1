#include<stdio.h>

int main(){
	int m1, p1, m2, p2, r;
	scanf("%i %i %i %i", &m1, &p1, &m2, &p2);
	r = (m2+p2)-(m1+p1);
	if(r > 0) printf("2\n");
	else
		if (r == 0)
			if(p1<p2) printf("2\n");
			else printf("1\n");
		else printf("1\n");
}
