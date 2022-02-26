#include <stdio.h>

int main(){
  unsigned n, k, f, min, max;
  scanf("%u %u %u", &n, &k, &f);
  
/* uopsteno
Oznacimo sa o broj ucenika koji igra oba sporta, tada je 0<=o i o<=k i o<=f, kao i o+(k-o)+(f-o) <= n, tj. k+f-o<=n tj. k+f-n <= o*/
/* prica o minimalnom broju
ako je k+f<=n, moguce je da su kosarkasi i fudbaleri disjunktni tj. da nema djaka koji igra oba sporta (npr. privih k ucenika igra kosarku, narednih f ucenika igra fudbal i eventualni ostali ucenici ne igraju ni kosarku ni fudbal), pa je tada min za o jednak 0

ako je k+f>n, onda iz k+f-n <=o, sledi da je o bar k+f-n, pa sledi da je tada min za o jednak k+f-n (to se desava ako vazi 'prvih' k+f-n ucenika igra oba sporta, narednih n-f ucenika igra samo kosarku i preostalih n-k ucenika igra samo fudbal
*/
/*prica o maksimalnom broju
oznacimo sa m manji od brojeva k i f. kako o<=k i o<=f sledi da o<=m, pa je max za o jednak m (ovaj max se postize kada svi kosarkasi igraju fudbal ili kada svi fudbaleri igraju kosarku)
*/
	if(k+f <= n) min = 0;
	else min = k+f-n;
	
	if(k<=f) max=k;
	else max=f;
  
  printf("%u\n%u\n", min, max);
  return 0;
}
