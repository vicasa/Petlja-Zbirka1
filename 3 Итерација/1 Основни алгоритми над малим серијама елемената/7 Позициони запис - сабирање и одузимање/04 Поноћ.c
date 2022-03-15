#include <stdio.h>

int main() {
  unsigned h,m,s;
  scanf("%u %u %u", &h, &m, &s);
  printf("%u\n", h*3600+m*60+s); 
  
  s = 60-s; 
  m = 59-m; 
  h = 23-h;
  
  m += s/60;
  h += m/60;
  
  printf("%u:%u:%u\n", h, m%60, s%60); 
  return 0;
}
