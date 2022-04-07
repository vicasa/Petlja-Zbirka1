#include <stdio.h>

int main(void) {
  int r, k, brB=0, brC=0;
  char c;
  scanf("%i %i", &r, &k);
  for(int i=1; i<=r; i++){
    scanf("%c", &c);/*guta nov red*/
    for(int j=1; j<=k; j++){
      scanf("%c", &c);
      if(c == 'B')
        if((i+j)%2) brB++;
        else brC++;
      else
        if((i+j)%2) brC++;
        else brB++;
    }
  }
  printf("%i\n", brB<brC ? brB : brC);
  return 0;
}
