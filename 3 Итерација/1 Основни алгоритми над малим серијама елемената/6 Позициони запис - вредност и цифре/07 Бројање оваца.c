#include <stdio.h>

/*
brojevi sa ulaza su cifre (zdesna) broja ovaca zapisanog u osnovi 5;
za detaljnije objasnjenje ovoga pogledati u 1 Аритметика/2 Целобројно дељење/2 Позициони запис;
takodje, resenje predstavljeno u 1 Аритметика/2 Целобројно дељење/2 Позициони запис je normalnije za konkretan problem
ovde je predstavljena iterativna verzija resenja
*/

int main() {
  unsigned ulaz, izlaz=0, vp=1; /*vp skracenica od  vrednost pozicije*/ 
  
  scanf("%u", &ulaz);
  izlaz += ulaz*vp;
  vp *=5;
  
  scanf("%u", &ulaz);
  izlaz += ulaz*vp;
  vp *=5;
  
  scanf("%u", &ulaz);
  izlaz += ulaz*vp;
  
  
  printf("%u\n", izlaz);
  
}
