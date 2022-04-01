#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%i", &n);
	double p, proizvod=1;
	
	for(int i=1; i<=n; i++)	{
		scanf("%lf", &p);
		proizvod *= (1 + p/100);
	}
	printf("%.2lf\n", (pow(proizvod, 1.0/n)-1)*100);
}
