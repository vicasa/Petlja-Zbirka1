#include <stdio.h>


int main()
{
  int x1, y1, x2, y2, l, r, u, d; /*left, right, up, down*/
  scanf("%i %i %i %i", &x1, &y1, &x2, &y2);
	
	/*desno teme ima prvu koordinatu vecu, levo drugu koordinatu manju,
	gornje teme ima drugu koordinatu manju, donje teme ima drugu koordinatu vecu*/ 
	
	if(x1<=x2){l=x1; r=x2;}
	else {l=x2; r=x1;}
	
	if(y1<=y2){u=y1; d=y2;}
	else {u=y2; d=y1;}
    
  printf("%i %i\n%i %i\n", l, u, r, d);
  return 0;
}
