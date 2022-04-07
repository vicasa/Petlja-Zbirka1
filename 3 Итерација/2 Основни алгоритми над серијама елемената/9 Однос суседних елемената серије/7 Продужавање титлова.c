#include<stdio.h>
int main(){
	int n, hh, mm, ss, t_end, m;
	scanf("%i %d:%d:%d", &n, &hh, &mm, &ss);/*koristimo %d (forsiramo tumacenje celobrojnog ulaza u osnovi 10); kad bi stavili %i ulaz 09 bi tumacio u osnovi 8 zbog vodece nule, pa posto 09 ne postoji u osnovi 8 citanje nece biti validno*/
	printf("%i\n%02i:%02i:%02i ", n, hh, mm, ss);
	for(int i=1; i<n; i++){
		scanf("%d:%d:%d", &hh, &mm, &ss);
		t_end = (hh*60 + mm)*60 + ss + 5;
		scanf("%d:%d:%d", &hh, &mm, &ss);
		if(t_end >= ((hh*60+mm)*60 +ss)) printf("%02i:%02i:%02i\n", hh, mm, ss);
		else {
			m = t_end/60;
			printf("%02i:%02i:%02i\n", m/60, m%60, t_end%60);
		}
		printf("%02i:%02i:%02i ", hh, mm, ss);
	}
	scanf("%d:%d:%d", &hh, &mm, &ss);
	t_end = (hh*60+mm)*60 +ss+5;
	m = t_end/60;
	printf("%02i:%02i:%02i\n", m/60, m%60, t_end%60);
}
