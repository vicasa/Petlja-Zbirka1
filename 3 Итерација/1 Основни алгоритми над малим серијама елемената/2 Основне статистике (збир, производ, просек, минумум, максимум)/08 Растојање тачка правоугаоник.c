#include<stdio.h>
#include<math.h>

double min(double a, double b){
	return a<b? a : b;
}

int main(){
	double x1, y1, x2, y2, x, y, rx_min, ry_min, r;
	scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x, &y);
	
	rx_min = min(x-x1, x2-x); 
	/*
	ako je rx_min manje od nula to znaci da na vertikalnom pravcu nije ograda, u suprotnom jeste;
	u oba slucaja apsolutna vrednost od rx_min predstavlja horizontalno rastojanje do blizeg vertikalnog pravca odredjenog levom ili desnom ogradom
	*/

	ry_min = min(y-y1, y2-y);
	/*ako je ry_min manje od nula to znaci da na horizontalnom pravcu nije ograda, u suprotnom jeste;
	u oba slucaja apsolutna vrednost od rx_min predstavlja horizontalno rastojanje do blizeg  vertikalnog pravca odredjenog levom ili desnom ogradom
	*/

	if(rx_min < 0)
		if(ry_min < 0) r = sqrt(pow(rx_min,2) + pow(ry_min,2)); /*slucaj kad ni na vertikalnom ni na horizontalnom pravcu nije ograda, tada ide do najblizeg temena pravougaonika*/
		else r = -rx_min; /* slucaj kada je levo od leve ograde ili desno od desne ograde; -rx_min je apsolutna vrednost od rx_min*/
	else
		if(ry_min < 0) r = -ry_min; /* slucaj kada je iznad gornje ili ispod donje ograde; -ry_min je apsolutna vrednost od ry_min*/
		else r = min(rx_min, ry_min); /*slucaj kad je unutar pravougaonika*/
	
	printf("%.2f\n",r);
}
