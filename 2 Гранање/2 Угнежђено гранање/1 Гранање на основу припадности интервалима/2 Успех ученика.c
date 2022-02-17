#include <stdio.h>


int main() {
  float p;
  scanf("%f", &p);
  if(p>=4.5) printf("odlican\n");
  else
  	if(p>=3.5) printf("vrlodobar\n");
  	else
  		if(p>=2.5) printf("dobar\n");
  		else
  			if(p>=2) printf("dovoljan\n");
  			else printf("nedovoljan\n");
  return 0;
}
/*Sa return-om bi bilo dosta citljivije*/
