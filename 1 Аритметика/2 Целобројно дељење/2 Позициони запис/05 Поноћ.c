#include <stdio.h>

int main() {
  unsigned h,m,s,s_od_ponoci, s_do_ponoci, m_do_ponoci, h_do_ponoci;
  scanf("%u %u %u", &h, &m, &s);
  s_od_ponoci=(h*60+m)*60 +s;
  printf("%u\n", s_od_ponoci);
  s_do_ponoci = 24*60*60 - s_od_ponoci; /*ukupno sekundi do ponoci*/
  m_do_ponoci = s_do_ponoci/60; /*ukupno celih minuta do ponoci*/
  h_do_ponoci = m_do_ponoci/60; /*ukupno celih sati do ponoci*/
  printf("%u:%u:%u\n", h_do_ponoci, m_do_ponoci%60, s_do_ponoci%60); 
  /*
  m_do_ponoci%60 su oni minuti do ponoci koji nisu pretvoreni u sati,
  s_do_ponoci%60 su one sekunde do ponoci koje nisu pretvorene u minute
   */
  return 0;
}
