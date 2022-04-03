#include<stdio.h>
int main(){
	int n, p, m, f, u, bi, bp, bm, bf, bu;
	scanf("%i %i %i %i", &n, &bp, &bm, &bf);
	bi = 1;
	bu = bp+bm+bf;
	for(int i=2; i<=n; i++){
		scanf("%i %i %i", &p, &m, &f);
		u = p + m + f;
		if(u > bu){
			bp=p;
			bm=m;
			bf=f;
			bi=i;
			bu=u;
		}
		else
			if(u == bu){
				if(p > bp){
					bp=p;
					bm=m;
					bf=f;
					bi=i;
				}
				else
					if(p == bp && m>bm){
						bm=m;
						bf=f;
						bi=i;
					}
			}
	}
	printf("%i: %i %i %i\n", bi, bp, bm, bf);
}
