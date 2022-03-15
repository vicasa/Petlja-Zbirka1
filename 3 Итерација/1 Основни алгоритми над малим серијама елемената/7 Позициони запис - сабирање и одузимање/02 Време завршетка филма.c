#include <stdio.h>

int main() {
  
  unsigned h, m, s, t;
  
  scanf("%u %u %u %u", &h, &m, &s, &t);
  
  s += t; 
  m += s/60;
  h += m/60;
  
  printf("%u:%u:%u\n", h%24, m%60, s%60);
  
}
