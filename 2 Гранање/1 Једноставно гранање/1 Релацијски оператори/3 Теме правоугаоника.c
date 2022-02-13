#include <stdio.h>

int main() {
  int x1, y1, x2, y2, x3, y3;
  scanf("%i %i %i %i %i %i", &x1, &y1, &x2, &y2, &x3, &y3);
  if (x1 == x2) printf("%i ", x3);
  if (x1 == x3) printf("%i ", x2);
  if (x2 == x3) printf("%i ", x1);
  if (y1 == y2) printf("%i\n", y3);
  if (y1 == y3) printf("%i\n", y2);
  if (y2 == y3) printf("%i\n", y1);
  return 0;
}
