#include<stdio.h>
#include<string.h>
int main(){
	char s[50], t[50]="\0";
	gets(s);
	int m = strlen(s);
	puts(s);
	for(int i=1; i<m; i++){ 
		strncat(t,s+i,m-i);
		strncat(t,s,i);
		puts(t);
		t[0]=0;
	}
}
