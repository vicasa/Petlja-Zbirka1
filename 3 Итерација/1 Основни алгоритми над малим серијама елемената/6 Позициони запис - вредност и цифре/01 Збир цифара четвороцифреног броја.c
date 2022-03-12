#include <stdio.h>
/* malo promenjeno resenje iz 1 Аритметика/2 Целобројно дељење/2 Позициони запис
da bi se bas video koncept iteracije
*/
int main() {
  unsigned n, zbir_cifara=0; 
  scanf("%u", &n);
  
  zbir_cifara += n%10;
  n /= 10;
  
  zbir_cifara += n%10;
  n /= 10;
  
  zbir_cifara += n%10;
  n /= 10;
  
  zbir_cifara +=n%10; /*n je ovde jednocifren broj, pa je n==n%10*/
  /*kada bi napisali n/10 dobili bi nulu, sto znaci da su otrebljene sve cifre broja sa ulaz*/
  
  printf("%u\n", zbir_cifara);
  return 0;
}
