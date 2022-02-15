#include <stdio.h>

int znak(int x){
	if(x>0) return 1;
	if(x<0) return -1;
	else return 0;
}

int main() {
  int a, b;
  scanf("%i %i", &a, &b);
  if(znak(a)==znak(b)) printf("da\n");
  else printf("ne\n");
  return 0;
}
