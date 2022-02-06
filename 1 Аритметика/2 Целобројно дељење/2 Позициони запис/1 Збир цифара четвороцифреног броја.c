#include <stdio.h>

int main() {
  unsigned n, zbir_cifara=0; 
  scanf("%u", &n);
  zbir_cifara += n%10;
  n /= 10;
  zbir_cifara += n%10;
  n /= 10;
  zbir_cifara += n%10;
  n /= 10;
  zbir_cifara +=n; /*n je ovde ustvari prva cifra sleva broja sa ulaza*/
  printf("%u\n", zbir_cifara);
  return 0;
}
