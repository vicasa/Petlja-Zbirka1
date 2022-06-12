#include<stdio.h>
#include<string.h>

int main(){
	char s[500000], t[500000];
	gets(s);
	int is=0, it=0;
	/*pretpostavka je da s ne pocinje niti se zavrsava razmakom*/
	t[0]=s[0];
	while(s[is]!=0)
		if(s[is] == ' '){
			t[it]=0;
			puts(t);
			it=0;
			is++;
		}
		else{
			t[it]=s[is];
			it++;
			is++;
		}
	t[it]=0;
	puts(t);
}
