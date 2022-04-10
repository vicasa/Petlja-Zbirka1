#include<stdio.h>
#include<string.h>
int main(){
	char s[21];
	gets(s);
	int n=strlen(s);
	for(int i=0; i<n-1; i++){
		int endj=n+i;
		for(int j=1; j<endj; j++)
			if(j==n-i) printf("%c", s[i]);
			else printf(" ");
		printf("%c\n", s[i]);
	}
	for(int i=n-1; i>0; i--)
		printf("%c", s[i]);
	puts(s);
}
