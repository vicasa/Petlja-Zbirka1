#include <stdio.h>

unsigned u_skoli(unsigned h, unsigned m){
	if(h<8) return 0;
	if(h==8 && m<30) return 0;
	if(h<13) return 1;
	if(h==13 && m<=50) return 1;
	return 0;
}

int main() {
  unsigned h1, m1, h2, m2, h3, m3;
  scanf("%u %u %u %u %u %u", &h1, &m1, &h2, &m2, &h3, &m3);
  if(u_skoli(h1, m1) || u_skoli(h2, m2) || u_skoli(h3, m3)) printf("da\n");
  else printf("ne\n");
  return 0;
}
