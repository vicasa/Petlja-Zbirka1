#include<stdio.h>
#include<string.h>
int main(){
	char s[50], t[50]="\0";
	gets(s);
	int m = strlen(s);
	for(int i=m; i>0; i--){ /*i je duzina reci*/
		int endj=m-i;
		for(int j=0; j<=endj; j++){ /*j je indeks stringa sa ulaza od kojeg pocinje rec*/
			strncat(t,s+j,i);
			puts(t);
			t[0]=0;
		}
	}
}
