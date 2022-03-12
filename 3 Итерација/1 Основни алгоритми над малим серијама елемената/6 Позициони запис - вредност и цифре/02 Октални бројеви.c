#include <stdio.h>

int main() {
  /*
  adaptacija koda iz 1 Аритметика/2 Целобројно дељење/2 Позициони запис
  napisana u duhu iteracije
  */
  unsigned oc, n, izlaz;
  
  scanf("%u", &oc);
  izlaz = oc; 
  
  scanf("%u", &oc);
  izlaz = izlaz*8 + oc;
  
  scanf("%u", &oc);
  izlaz = izlaz*8 + oc;
  
  scanf("%u", &oc);
  izlaz = izlaz*8 + oc;
  
  printf("%u\n", izlaz);
  
  /*drugi deo zadatka*/
  scanf("%u", &n);
  
  izlaz=0;
  
  /*za normalno resenje, napisanu sa 4 promenljive (za svaku cifru po promenljiva) pogledati u 1 Аритметика/2 Целобројно дељење/2 Позициони запис*/
  

  printf("%u", n/(8*8*8)); /*ispisujem cifru najvece tezine; zbog pretpostavke n<8^4, n/(8*8*8) ce biti cifra oktalnog sistema*/
  n %= 8*8*8; /*nakon ovoga ostaju tri oktalne cifre najmanje tezine*/
  
  printf("%u", n/(8*8));
  n %= 8*8; /*nakon ovoga ostaju dve oktalne cifre najmanje tezine*/
  
  printf("%u", n/(8));
  n %= 8; /*nakon ovoga ostaje jedna oktalna cifra najmanje tezine*/
  
  printf("%u\n", n); /*n je sada oktalna cifra najmanje tezine*/
  
}
