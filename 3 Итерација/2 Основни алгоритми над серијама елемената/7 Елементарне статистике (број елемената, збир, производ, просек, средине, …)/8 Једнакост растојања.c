#include<stdio.h>
/*pokazuje se da je trazeni broj aritmeticka sredina brojeva sa ulaza*/
int main(){
	int n;
	scanf("%i", &n);
	double s, zbir;
	for(int i=1; i<=n; i++){
		scanf("%lf", &s);
		zbir += s;
	}
	printf("%.5lf\n", zbir/n);
}
