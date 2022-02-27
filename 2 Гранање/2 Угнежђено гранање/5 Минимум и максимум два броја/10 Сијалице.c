#include <stdio.h>

int main(){
  unsigned p1H, p1M, p1S, p0H, p0M, p0S, d1H, d1M, d1S, d0H, d0M, d0S; /*p - prva sijalica; d - druga sijalica; 1 ukljucena; 0 iskljucena; H - sat; M- minut; S-sekund; */
  
  unsigned flag=0, temp, p, d, g; /* ako je flag 0 prva sijalica je plava, ako je flaq 1 prva sijalica je zuta; p - trajanje prve boje u sekundama; d - trajanje druge boje u sekundama; g - trajanje zelene boje u sekundama;*/
  
  scanf("%u %u %u %u %u %u %u %u %u %u %u %u", &p1H, &p1M, &p1S, &p0H, &p0M, &p0S, &d1H, &d1M, &d1S, &d0H, &d0M, &d0S);
  
  /*pretvaramo vremena u broj sekundi od ponoci i smestamo ih u odgovarajuce promenljive sekundi, da ne bi pravili nove promenljive*/
  p1S = (p1H*60 + p1M)*60 + p1S;
  p0S = (p0H*60 + p0M)*60 + p0S;
  d1S = (d1H*60 + d1M)*60 + d1S;
  d0S = (d0H*60 + d0M)*60 + d0S;
  
  /*ako je prva sijalica (za sada plava) upaljena posle druge (za sada zute) sijalice, razmenjujemo vrednosti promenljivama tako da p predstavlja prvo upaljenu sijalicu i da se to desilo oznacavamo u flag-u*/
  if(d1S < p1S) {
  	temp = p1S;
  	p1S = d1S;
  	d1S = temp;
  	
  	temp = p0S;
  	p0S = d0S;
  	d0S = temp;
  	
  	flag = 1;
  }
  
   
  if(p0S < d1S){ /*slucaj p1 < p0 < d1 < d0 (citaj prva upaljena, prva ugasena, druga upaljena, druga ugasena)*/
  	p = p0S-p1S;
  	g=0;
  	d = d0S-d1S;
  }
  else
  	if(p0S < d0S){ /*slucaj p1 <= d1 <= p0 < d0*/
  		p = d1S-p1S;
  		g=p0S-d1S;
  		d = d0S-p0S;
  	}
  	else{ /*slucaj p1 <= d1 < d0 <= p0*/
  		p = d1S - p1S + p0S-d0S;
  		g=d0S-d1S;
  		d = 0;
  	}
  
  /*pretvaroma trajanje vremena iz sekundi u format H:M:S, koristimo postojece promenljive cije vrednosti vise nisu vazne da ne bi pravili nove promenljive*/
  
  p1S = p%60;
  p1M = p/60;
  p1H = p1M/60;
  p1M %= 60;
  
  d1S = d%60;
  d1M = d/60;
  d1H = d1M/60;
  d1M %= 60;
  	
  d0S = g%60;/*odabrali d0 za trajanje zute, mogli smo i p0 - totalno svejedno*/
  d0M = g/60;
  d0H = d0M/60;
  d0M %= 60;
  	
  if(flag) printf("%u:%u:%u\n%u:%u:%u\n%u:%u:%u\n", d1H, d1M, d1S, d0H, d0M, d0S, p1H, p1M, p1S); /*slucaj kad je zuta upaljena pre plave - tada je d plava, a p zuta*/
  else printf("%u:%u:%u\n%u:%u:%u\n%u:%u:%u\n", p1H, p1M, p1S, d0H, d0M, d0S, d1H, d1M, d1S);
  
  return 0;
}
