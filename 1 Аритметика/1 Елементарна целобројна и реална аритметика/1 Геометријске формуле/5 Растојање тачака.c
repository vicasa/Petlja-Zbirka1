#include <stdio.h>
#include<math.h>
int main(){
  double A_x, A_y, B_x, B_y;
  scanf("%lf %lf %lf %lf", &A_x, &A_y, &B_x, &B_y);
  printf("%.5lf\n", sqrt(pow(A_x-B_x,2)+ pow(A_y - B_y, 2)));
}
