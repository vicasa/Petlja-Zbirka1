#include <stdio.h>
#include <stdlib.h>
/*
dame se napadaju ako su u istoj koloni (prve koordinate iste) ili u istom redu (druge koordinate iste) ili u istoj dijagonali (razlika izmedju prvih koordinata je ista kao razlika izmedju drugih koordinata)
*/

int main() {
  int x1, y1, x2, y2;
  scanf("%i %i %i %i", &x1, &y1, &x2, &y2);
  if(x1==x2 || y1==y2 || abs(x1-x2)== abs(y1-y2)) printf("da\n");
  else printf("ne\n");
  return 0;
}
