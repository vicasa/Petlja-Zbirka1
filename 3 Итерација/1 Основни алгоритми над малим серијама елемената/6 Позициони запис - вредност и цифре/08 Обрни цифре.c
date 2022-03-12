#include <stdio.h>

int main() {
  unsigned n, l, r, c, izlaz=0; 
  scanf("%u", &n);
  /*  iterativna varijanta resenja iz 1 Аритметика/2 Целобројно дељење/2 Позициони запис  */
  
  l = n/10000;
  r = n%10000;
  
  c = r%10;
  izlaz = izlaz*10 + c;
  r /= 10;
  
  c = r%10;
  izlaz = izlaz*10 + c;
  r /= 10;
  
  c = r%10;
  izlaz = izlaz*10 + c;
  r /= 10;
  
  c = r%10;
  izlaz = izlaz*10 + c;

  izlaz += l*10000;
  
  printf("%u\n", izlaz);
  return 0;
}
