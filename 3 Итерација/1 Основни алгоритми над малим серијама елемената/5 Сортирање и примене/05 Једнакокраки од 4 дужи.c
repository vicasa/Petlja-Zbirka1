#include<stdio.h>

int main(){
	float a, b, c, d, temp;
  scanf("%f %f %f %f", &a, &b, &c, &d);
  /*sortiramo promenljive a,b,c,d*/
  /*razmestamo tako da a postane najmanje od aktuelnog a,b,c,d*/
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
  if(a > d){
  	temp = a;
  	a = d;
  	d = temp;
  }
  /*razmestamo tako da b postane najmanje od aktuelnog b, c, d*/
  if(b > c){
  	temp = b;
  	b = c;
  	c = temp;
  }
  if(b > d){
  	temp = b;
  	b = d;
  	d = temp;
  }
  /*razmestamo tako da c postane najmanje od aktuelnog c, d*/
  if(c > d){
  	temp = c;
  	c = d;
  	d = temp;
  }
  /*nakon ovoga vazi a<=b i b<=c i c<=d*/
  if(a==d) {printf("ne\n"); return 0;} /* ovo je slucaj kada su sve duzi jednake, po definiciji jednakokrakog (ima tacno dve jednake stranice), ne moze se napraviti jednakokraki*/
  if(a==c){ /*slucaj kad su manje tri stranice jednake; zbir te dve manje jednake mora biti veci od najvece stranice (ista prica, ne smemo tri iste stranice u trougao)*/
  	if(2*c <= d) printf("ne\n");
  	else printf("da\n");
  	return 0;
  }
  if((a==b && (a+b)>c) || b==c || c==d) printf("da\n"); /*ovo je slucaj kada su bilo koje manje dve strogo manje od bilo koje vece dve; ako su bilo koje vece dve jednake onda za trecu stranicu uzmemo bilo koju  koja je strogo manja od njih i  ne treba proveravati jednakost trougla jer je sigurno ispunjena (npr. 3, 5, 5 ; 3+5 > 5)*/
  else printf("ne\n");
    
}
