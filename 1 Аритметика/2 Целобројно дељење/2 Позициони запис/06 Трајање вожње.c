#include <stdio.h>

int main() {
  unsigned h_start, m_start, s_start, h_end, m_end, s_end, h, m, s;
  scanf("%u %u %u %u %u %u", &h_start, &m_start, &s_start, &h_end, &m_end, &s_end);
  s=(h_end*60 + m_end)*60 + s_end - ( (h_start*60 + m_start)*60 + s_start );
  m = s/60;
  h = m/60;
  printf("%u:%u:%u\n", h, m%60, s%60); 
  return 0;
}
