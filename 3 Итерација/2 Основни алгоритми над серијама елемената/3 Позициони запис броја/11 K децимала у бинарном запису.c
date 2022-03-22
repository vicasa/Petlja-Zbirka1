#include<stdio.h>
#include<math.h>

int main(){
	double x, c;
	unsigned k;
	scanf("%lf %u", &x, &k);
	printf("0.");
	for(int i=1; i<=k; i++){
		x *= 2;
		c = floor(x);
		printf("%.0lf", c);
		x -= c;
	}
	printf("\n");
}
