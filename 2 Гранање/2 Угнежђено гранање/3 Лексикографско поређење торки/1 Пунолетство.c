#include<stdio.h>

int main(){
	int db, mb, gb, d, m, g;
	scanf("%i %i %i %i %i %i", &db, &mb, &gb, &d, &m, &g);
	gb += 18;
	if(g > gb) printf("DA\n");
	else
		if (g == gb)
			if(mb<m) printf("DA\n");
			else
				if (mb == m)
					if(db<=d) printf("DA\n");
					else printf("NE\n");
				else printf("NE\n");
		else printf("NE\n");
}
