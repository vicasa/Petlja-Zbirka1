#include <stdio.h>


int main()
{
  unsigned H, S, O, min; 
  scanf("%u %u %u", &H, &S, &O);
	
	H /= 2; /*broj paketica po 2 atoma vodonika*/
	O /= 4; /*broj paketica po 4 atoma kisika*/
	
	min=H;
	if(S < min) min = S;
	if(O < min) min = O;
	    
  printf("%u\n", min);
  return 0;
}
