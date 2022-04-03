#include<stdio.h>
int main(){
	double o, min, max, zo, brojac;
	scanf("%lf", &o);
	min=o;
	max=o;
	zo=o;
	brojac=1;
	while(scanf("%lf", &o)!=-1){
		zo += o;
		brojac += 1;
		if(o<min) min=o;
		if(o>max) max=o;
	}
	zo -= (min+max);
	printf("%.2lf\n", zo/(brojac-2));
}
