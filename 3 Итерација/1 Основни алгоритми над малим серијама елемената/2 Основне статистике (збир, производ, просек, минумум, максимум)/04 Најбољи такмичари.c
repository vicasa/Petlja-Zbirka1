#include<stdio.h>

int main(){
	float t1, t2, t3, t4, t_min;
	scanf("%f %f %f %f", &t1, &t2, &t3, &t4);
	t_min=t1;
	if(t2 < t_min) t_min=t2;
	if(t3 < t_min) t_min=t3;
	if(t4 < t_min) t_min=t4;

	if(t_min == t1) printf("1\n");
	if(t_min == t2) printf("2\n");
	if(t_min == t3) printf("3\n");
	if(t_min == t4) printf("4\n");
}
