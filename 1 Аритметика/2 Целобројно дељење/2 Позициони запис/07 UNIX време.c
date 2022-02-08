#include <stdio.h>

int main() {
  unsigned dan, sat, minut, sekund, mili, trajanje;
  scanf("%u %u %u %u %u %u", &dan, &sat, &minut, &sekund, &mili, &trajanje);
  mili = ((((dan*24)+sat)*60 + minut)*60 + sekund)*1000 + mili + trajanje; /*milisekundi od paljenja kompa do kraja pesme*/
  sekund = mili/1000;
  minut = sekund/60;
  sat = minut/60;
  dan = sat/24;
  printf("%u:%u:%u:%u:%u\n", dan, sat%24, minut%60, sekund%60, mili%1000);
  return 0;
}
