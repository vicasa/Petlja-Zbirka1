#include<stdio.h>

int main(){
	/*ista prica o promenljivama kao u prethodnom zadatku*/
	int t, max, d=1;
	scanf("%i", &t); /*temp 1. dan*/
	max=t;
	
	scanf("%i", &t); /*temp 2. dan*/
	if(t > max) {max=t; d=2;}
	
	scanf("%i", &t); /*temp 3. dan*/
	if(t > max) {max=t; d=3;}
	
	scanf("%i", &t); /*temp 4. dan*/
	if(t > max) {max=t; d=4;}
	
	scanf("%i", &t); /*temp 5. dan*/
	if(t > max) {max=t; d=5;}
	
	scanf("%i", &t); /*temp 6. dan*/
	if(t > max) {max=t; d=6;}
	
	scanf("%i", &t); /*temp 7. dan*/
	if(t > max) {max=t; d=7;}
	
	printf("%i\n", d);
}
