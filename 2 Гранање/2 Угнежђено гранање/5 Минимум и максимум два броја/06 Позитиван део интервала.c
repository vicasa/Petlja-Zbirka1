#include <stdio.h>

int main(){
  int a, b;
  scanf("%i %i", &a, &b);
  if(a > 0) printf("%i\n", b-a); /*ceo interval je na pozitivnom delu x ose*/
  else
  	if(b > 0) printf("%i\n", b); /*od nula do b je na pozitivnom delu x ose*/
  	else printf("0\n"); /*nema tacaka na pozitivnom delu x ose ili ima samo 0*/

  return 0;
}
