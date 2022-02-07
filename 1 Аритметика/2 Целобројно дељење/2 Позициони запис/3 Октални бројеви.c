#include <stdio.h>

int main() {
  unsigned oc0, oc1, oc2, oc3, n, izlaz1;
  scanf("%u %u %u %u %u", &oc3, &oc2, &oc1, &oc0, &n);
  /*
  izlaz1 je po definiciji jednak 0c0 + oc1*8 + oc2*8^2 + oc3*8^4,
  ali necu tako ovde uraditi.
  Algoritam sto cu pretstaviti je efikasniji i pogodniji za iteraciju.
  Zasniva se na nacinu kako vec formiranom broju dodajemo cifru sa desna
  naime ako broju x treba da dopisemo cifru c zdesna (na najznizu poziciju)
  u osnovi b, onda je dobijen broj (nakon dopisivanja) jednak x*b+c.
  */
  izlaz1 = oc3; /*izlaz je jednak (oc3)_8*/
  izlaz1 = izlaz1*8 + oc2; /*izlaz je jednak (0c3 oc2)_8*/
  izlaz1 = izlaz1*8 + oc1; /*izlaz je jednak (0c3 oc2 oc1)_8*/
  izlaz1 = izlaz1*8 + oc0; /*izlaz je jednak (0c3 oc2 oc1 oc0)_8*/
  /*
  mogli smo odmah napisati
  izlaz1= ((oc3*8+oc2)*8+oc1)*8+oc0
  */
  printf("%u\n", izlaz1);
  
  oc0 = n%8;
  n /= 8;
  oc1 = n%8;
  n /= 8;
  oc2 = n%8;
  n /= 8; /*uzdamo se u to sto je receno da je n<8^4, pa ce nakon ovog deljenja n biti broj manji od 8, a samim tim je n%8 isto sto i n*/
  oc3= n;
  
  printf("%u%u%u%u\n", oc3, oc2, oc1, oc0);
  
  return 0;
}
