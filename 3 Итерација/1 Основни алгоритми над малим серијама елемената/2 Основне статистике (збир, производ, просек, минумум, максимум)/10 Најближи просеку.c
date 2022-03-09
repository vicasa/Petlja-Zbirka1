#include<stdio.h>
#include<math.h>

int main(){
	double b1, b2, b3, b4, r, r_min, a_s, rez;
	scanf("%lf %lf %lf %lf", &b1, &b2, &b3, &b4);
	
	a_s = (b1 + b2 + b3 + b4)/4;
	
	/*najveci je problem razumeti da se zapravo ne trazi najblizi broj sa ulaza, nego najblizi broj sa ulaza nakon njihovog zaokruzivanja na dve decimale*/
	b1 = round(b1*100);
	b2 = round(b2*100);
	b3 = round(b3*100);
	b4 = round(b4*100);
	a_s = a_s*100;
	
	r_min = fabs(a_s - b1);
	
	rez = b1;
	
	r = fabs(a_s - b2);
	if(r < r_min) {r_min = r; rez = b2;}
	
	r = fabs(a_s - b3);
	if(r < r_min) {r_min = r; rez = b3;}
	
	r = fabs(a_s - b4);
	if(r < r_min) rez = b4;
	
	printf("%.2lf\n", rez/100);
}
