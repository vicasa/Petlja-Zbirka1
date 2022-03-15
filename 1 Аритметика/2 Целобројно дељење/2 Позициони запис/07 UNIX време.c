#include <stdio.h>
/*bolja varijanta (manje racuna) od koda iz 1 Аритметика/2 Целобројно дељење/2 Позициони запис*/
int main() {
  unsigned dan, sat, minut, sekund, mili, trajanje;
  scanf("%u %u %u %u %u %u", &dan, &sat, &minut, &sekund, &mili, &trajanje);
  mili += trajanje;
  sekund += mili/1000;
  minut += sekund/60;
  sat += minut/60;
  dan += sat/24;
  printf("%u:%u:%u:%u:%u\n", dan, sat%24, minut%60, sekund%60, mili%1000);
  return 0;
}
