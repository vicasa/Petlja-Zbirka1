#include <stdio.h>

int main() {
  
  unsigned c, broj=0, vp=1; /*vp je skraceniza od vrednost pozicije*/
  
  scanf("%u", &c);
  broj += c*vp;
  vp *= 10;
  
  scanf("%u", &c);
  broj += c*vp;
  vp *= 10;
  
  scanf("%u", &c);
  broj += c*vp;
  vp *= 10;
  
  scanf("%u", &c);
  broj += c*vp;
  vp *= 10;
  
  scanf("%u", &c);
  broj += c*vp;
  vp *= 10;
  
  scanf("%u", &c);
  broj += c*vp;
  
  
  printf("%u\n", broj);
  
}
