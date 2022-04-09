#include<stdio.h>
#include<string.h>
int main(){
	char s[50], t[50]="\0";
	gets(s);
	int n = strlen(s);
	for(int i=0; i<n; i++){
		t[0]=0;
		int endj=n-i;
		for(int j=0; j<endj; j++){
			strncat(t,s+i+j,1);
			puts(t);
		}
	}
}
