#include<stdio.h>

int main(){
	unsigned n, a, b, c, temp;
  scanf("%u", &n);
  /*trebimo cetvorocifrenog broja n*/
  a = n%10;
  n /= 10;
  b = n%10;
  n /= 10;
  c = n%10;
  n /= 10;
  /*nakon ovoga ucitano n je jednako ncba*/
  
  /*sortiramo promenljive a,b,c,n*/
  /*razmestamo tako da a postane najmanje od aktuelnog a,b,c, n*/
  if(a > b){
  	temp = a;
  	a = b;
  	b = temp;
  }
  if(a > c){
  	temp = a;
  	a = c;
  	c = temp;
  }
  if(a > n){
  	temp = a;
  	a = n;
  	n = temp;
  }
  /*razmestamo tako da b postane najmanje od aktuelnog b,c, n*/
  if(b > c){
  	temp = b;
  	b = c;
  	c = temp;
  }
  if(b > n){
  	temp = b;
  	b = n;
  	n = temp;
  }
  /*razmestamo tako da c postane najmanje od aktuelnog c, n*/
  if(c > n){
  	temp = c;
  	c = n;
  	n = temp;
  }
  /*nakon ovoga vazi a<=b i b<=c i c<=n*/
  
  if(c == 0) {printf("%u\n", n*100); return 0;} /*ovo je slucaj kada ucitani n ima tri nule (npr. ulaz 8000 izlaz 800); koristim return da bi izbegao else*/
  if(b == 0) {printf("%u\n", c*100); return 0;} /*ovo je slucaj kada ucitani n ima dve nule (npr. ulaz 8020 izlaz 200)*/
  if(a == 0) {printf("%u\n", b*100 + c); return 0;} /*ovo je slucaj kada ucitani n ima dve nule (npr. ulaz 2305 izlaz 203)*/
  printf("%u\n", a*100 + b*10 + c); /*ovo je slucaj kada ucitani n nema nula (npr. ulaz 2385 izlaz 235)*/
  
}
