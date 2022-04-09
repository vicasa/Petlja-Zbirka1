#include<stdio.h>
#include<string.h>
int main(){
	char s[50], t[50]="\0";
	gets(s);
	int m = strlen(s);
	int n, endi;
	scanf("%i", &n);
	endi=m-n;
	for(int i=0; i<=endi; i++){
		strncat(t,s+i,n);
		puts(t);
		t[0]=0;
	}
}
