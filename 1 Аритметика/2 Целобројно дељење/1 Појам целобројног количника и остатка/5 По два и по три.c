#include <stdio.h>

int main() {
  unsigned R,K,rb; 
  /*promenljiva rb predstavlja redni broj coveka koji stoji u redu R i vrsti K brojeci od 0 na prirodan nacin*/
  scanf("%u %u", &R, &K);
  R--;
  /*nakon ovoga, ako je covek u redu R i koloni K, njegov redni broj medju svim ljudima je 2*R+K brojeci od 1 na prirodan nacin, a 2*R+K-1 brojeci od 0 na
  prirodan nacin */
  rb = 2*R+K-1;
  printf("%u %u\n", rb/3+1,rb%3+1);
  return 0;
}
