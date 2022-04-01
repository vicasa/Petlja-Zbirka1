#include<stdio.h>
/*pokazuje se da su odgovarjuce koordinate tezista aritmeticke sredine odgovarjucih koordinata tacaka sa ulaza*/
int main(){
	int n;
	scanf("%i", &n);
	double x, y, zx=0, zy=0;
	for(int i=1; i<=n; i++){
		scanf("%lf %lf", &x, &y);
		zx += x;
		zy += y;
	}
	printf("%.5lf\n%.5lf\n", zx/n, zy/n);
}
