#include <stdio.h>

/*
Zadatak simulira brojanje u osnovi 5
0	000 Nije pocelo brojanje
1	001 Jovan izbrojao 1 (1 prst)
2	002 Jovan izbrojao 2 (2 prsta)
3	003 Jovan izbrojao 3 (2 prsta)
4	004 Jovan izbrojao 4 (2 prsta)
5	010 Jovan izbrojao 5, rekao Dulu da broji (Dule 1 prst), Jovan nula prstiju - broji ispocetka
6	011 Jovan 1, Dule 1
7	012 Jovan 2, Dule 1
8	013 Jovan 3, Dule 1
9	014 Jovan 4, Dule 1
10	020 Jovan izbrojao do 5, skuplja prste i kaze Dulu da broji, Dule sada pokazuje 2 prsta
... ...
24	044 Jovan 4, Dule 4
25	100 Jovan izbrojao 5 - skuplja prste i kaze Dulu da broji, Dule izbrojao 5 skuplja prste i kaze Stanoju da broji, Stanoje je docekao svoj red i podize 1 prst
26 	101 Jovan 1, Dule 0, Stanoje 1
...
124 444 Jovan 4, Dule 4, Stanoje 4 
*/

int main() {
  unsigned j, d, s; 
  scanf("%u %u %u", &j, &d, &s);
  /*zapravo treba odrediti (sdj)_5*/
  printf("%u\n", s*25 + d*5 +j);
  return 0;
}
