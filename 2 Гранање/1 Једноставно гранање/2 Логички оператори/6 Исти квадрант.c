#include <stdio.h>

int znak(int x){
	if(x>0) return 1;
	if(x<0) return -1;
	else return 0;
}

int main() {
  int x1, y1, x2, y2;
  scanf("%i %i %i %i", &x1, &y1, &x2, &y2);
  if(znak(x1)*znak(x2)>=0 && znak(y1)*znak(y2)>=0) printf("da\n");
  else printf("ne\n");
  return 0;
}
