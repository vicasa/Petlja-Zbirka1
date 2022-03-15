#include <stdio.h>

/*ideja koda je da oduzmemo dva vremena, ali da ne pretvaramo oba u sekunde*/

int main() {
  int h_start, m_start, s_start, h_end, m_end, s_end;
  scanf("%i %i %i %i %i %i", &h_start, &m_start, &s_start, &h_end, &m_end, &s_end);
  
  s_end -= s_start; /*rezultat pisemo u end promenljive*/
  if(s_end < 0){ s_end += 60; m_start++;} /*umesto od end-a da oduzmemo 1 minut, startu cemo dodati 1 minut*/
  
  m_end -= m_start; 
  if(m_end < 0){ m_end += 60; h_start++;}
  
  h_end -= h_start; 
   
  printf("%i:%i:%i\n", h_end, m_end, s_end); 
  return 0;
}
