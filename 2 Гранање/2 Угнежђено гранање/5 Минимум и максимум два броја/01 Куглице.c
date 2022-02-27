#include <stdio.h>

int main(){
  unsigned c1, p1, c2, p2, cp, pc;
  scanf("%u %u %u %u", &c1, &p1, &c2, &p2);
  cp = c1+p2; /*broj prebacivanja ako crvene pakujemo u drugu, a plave u prvu kutiju*/
  pc = p1+c2; /*broj prebacivanja ako plave pakujemo u drugu, a crvene u prvu kutiju*/
  printf("%u", cp<=pc ? cp : pc);
  return 0;
}
