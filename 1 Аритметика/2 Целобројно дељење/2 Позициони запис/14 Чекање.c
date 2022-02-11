#include <stdio.h>

int main() {
  unsigned hA, mA, sA, hB, mB, sB, h, m;
  int s;
  scanf("%u %u %u %u %u %u", &hA, &mA, &sA, &hB, &mB, &sB);
  s = (hA*60 + mA)*60 + sA - ( (hB*60 + mB)*60 + sB );
  s = s>=0 ? s : -s; /*vreme cekanja u sekundama, ovaj zadatak je isti kao Trajanje voznje, samo je razlika u ovom uslovnom izrazu*/
  m = s/60;
  h = m/60;
  printf("%u:%u:%u\n", h, m%60, s%60); 
  return 0;
}
