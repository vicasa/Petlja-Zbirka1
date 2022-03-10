#include <stdio.h>
/*
promenio sam kod u odnosu na onaj iz 2 Гранање/1 Једноставно гранање/2 Логички оператори
i u u_skoli i u main-u
*/
unsigned u_skoli(unsigned h, unsigned m){
	m += 60*h;
	if(m < (8*60 + 30)) return 0;
	if(m <= (13*60 + 50)) return 1;
	return 0;
}

int main() {
  unsigned h, m;
  
  scanf("%u %u", &h, &m); /*1. poruka*/
  if(u_skoli(h, m)) {printf("da\n"); return 0;}

  scanf("%u %u", &h, &m); /*2. poruka*/
  if(u_skoli(h, m)) {printf("da\n"); return 0;}

  scanf("%u %u", &h, &m); /*3. poruka*/
  if(u_skoli(h, m)) {printf("da\n"); return 0;}
  
  printf("ne\n");
  
}
