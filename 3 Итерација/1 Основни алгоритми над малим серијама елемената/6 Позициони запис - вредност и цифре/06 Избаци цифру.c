#include <stdio.h>

int main() {
  
  /*ideja nije u izbacivanju cifara broja sa ulaza,
   vec u pravljanju novog broja u koji ubacujemo samo one cifre koje ne treba izbaciti iz broja sa ulaza*/
  
  unsigned c0, c, izlaz=0, vp=1, ulaz; /*vp je skraceniza od vrednost pozicije*/
  
  scanf("%u", &ulaz);
  
  c0 = ulaz%10;
  ulaz /= 10;
    
  c = ulaz%10;
  if(c != c0){
  	izlaz += c*vp;
  	vp *= 10;
  }
  ulaz /= 10;
  
  c = ulaz%10;
  if(c != c0){
  	izlaz += c*vp;
  	vp *= 10;
  }
  
 	 printf("%u\n", izlaz); 
  /*
  samo da podsetim, poenta ovakvog resenja je u iterativnoj implementaciji(tj. pomocu koda koji se ponavlja);
  naravno da se ovaj problem moze resiti dosta jasnije i prakticnije, ali samo u slucaju kada znamo koliko ima cifara broj sa ulaza i kada je taj broj relativno mali;
  iterativni postupak se moze primeniti i kada ne znamo koliko ima cifara broj sa ulaza (pomocu petlji)
  */ 
}
