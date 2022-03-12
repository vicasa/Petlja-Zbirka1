#include <stdio.h>

int main() {
  
  unsigned c, sabirak=0, zbir=0;
  
  scanf("%u", &c);
  sabirak = sabirak*10 + c; 
  
  scanf("%u", &c);
  sabirak = sabirak*10 + c; 
  
  scanf("%u", &c);
  sabirak = sabirak*10 + c; 
  
  zbir += sabirak;
  
  sabirak=0;
  
  scanf("%u", &c);
  sabirak = sabirak*10 + c; 
  
  scanf("%u", &c);
  sabirak = sabirak*10 + c; 
  
  scanf("%u", &c);
  sabirak = sabirak*10 + c; 
  
  zbir += sabirak;
  
  printf("%u\n", zbir);
  
}
