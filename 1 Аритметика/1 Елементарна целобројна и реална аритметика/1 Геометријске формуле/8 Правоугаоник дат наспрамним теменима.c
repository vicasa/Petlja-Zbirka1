#include<stdio.h>
#include<stdlib.h> /* zbog funkcije abs*/
#include<math.h>
int main(){
  int A_x, A_y, B_x, B_y;
  scanf("%i %i %i %i", &A_x, &A_y, &B_x, &B_y);
  int a = abs(A_x - B_x), b = abs(A_y - B_y);
  printf("%.2lf\n%i\n%i\n", sqrt(pow(a, 2) + pow(b, 2)), 2 * (a + b) , a*b);
}
