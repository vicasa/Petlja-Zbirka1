#include <stdio.h>

int main() {
  unsigned p, o;
  scanf("%u", &p);
  if(p<51) o=5;
  else
  	if(p<61) o=6;
  	else
		if(p<71) o=7;
  		else
  			if(p<81) o=8;
  			else
  				if(p<91) o=9;
  				else o=10;
  printf("%u\n", o);
}
