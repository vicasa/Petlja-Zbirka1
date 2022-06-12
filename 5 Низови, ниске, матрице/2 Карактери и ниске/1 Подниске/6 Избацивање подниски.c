	#include<stdio.h>
	#include<string.h>

	/*proverava da li niska s pocinje niskom p (duzine lp). vraca 1 ako pocinje, 0 u suprotnom.
	Funkcija pouzdano radi ako niska p nije duza od niske s.*/
	int prefiks(char s[], char p[], int lp){
		for(int i=0; i<lp; i++)
			if(s[i]!=p[i]) return 0;
		return 1;
	}

	/*proverava da li je niska p (duzine lp) podniska niske s. Ako p jeste podniska niske s, funcija vraca prvi indeks niske s od kog pocinje podniska p, u suprotnom vraca -1. */
	int podniska(char s[], char p[], int lp){
		int ls=strlen(s);
		for(int i=0; i<=ls-lp; i++)
			if(prefiks(s+i, p, lp)) return i;
		return -1;
	}

	/*funkcija izbacuje prvih lp clanova niske s*/
	void izbaci(char s[], int lp){
		int i=lp;
		while(s[i]!=0){
			s[i-lp]=s[i];
			i++;
		}
		s[i-lp]=s[i];
	}


	int main(){
		char s[500000];
		gets(s);
		char reci[100000][11];
		int br_reci=0;
		while(scanf("%s", reci[br_reci])!=-1)
			br_reci++;
		int flag=1;
		while(flag){
			flag=0; /*ako se kasnije flag upali to znaci da je u ovom krugu bilo izbacivanja, pa treba napraviti jos jedan krug. Ako se flag ne upali, to znaci da u s nema vise podniski za izbacivanje.*/
			for(int i=0; i<br_reci; i++){
				int l=strlen(reci[i]);
				int indeks=podniska(s,reci[i], l);
				while(indeks!=-1){
					flag=1; /*ako je bar jedna podniska pronadjena, flag se pali*/
					izbaci(s+indeks, l);/*izbacujemo l karaktera iz niske s pocevsi od indeksa indeks */
					int pomoc = indeks - l +1; /*nema potrebe da trazimo nisku reci[i] od pocetka niske s, vec od indeksa indeks+l-1 ako je on veci od nula, u suprotnom trazimo od pocetka*/
					pomoc = 0<pomoc ? pomoc : 0;
					indeks=podniska(s+pomoc,reci[i], l); 
					if(indeks != -1) /*ako je pronadjena podniska, njen pocetak je na adresi s+pomoc+indeks, tj. njen pocetak je na indeksu indeks+pomoc niske s*/
						indeks += pomoc;
				}
			}
		}
		puts(s);
	}
